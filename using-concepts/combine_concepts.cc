#include <string>
#include <concepts>
#include <iostream>

template <typename T>
    requires std::integral<T> || 
    (std::invocable<T> && 
     std::integral<typename std::invoke_result<T>::type>)
void function(const T& x) {
    if constexpr (std::invocable<T>) {
        std::cout << "Result of call is " << x() << "\n";
    } else {
        std::cout << "Value is " << x << "\n";
    }
}

int main() {
    function(1); // OK, integral
    function([]() { return 2; }); // OK, invocable, returns integral
    function(2.0); // Fails
}
