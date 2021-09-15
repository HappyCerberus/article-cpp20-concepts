#include <concepts>

template <typename T>
concept invoke_integral = requires (T a) {
    { a() } -> std::integral;
};

template <invoke_integral T>
void function(const T& f) {};

int main() {
    function([](){ return 1; }); // OK
    // function([](){ return 1.0; }); // doesn't return integral
    // function(1); // 1() is not a valid expression
}
