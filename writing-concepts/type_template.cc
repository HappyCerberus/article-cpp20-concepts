#include <concepts>

template <std::integral T>
struct S;

template <typename T>
concept template_test = requires {
    typename S<T>; // Checks whether S<T> is a valid template substitution
};

void function(template_test auto x) {}

struct X { using ElementType = int; };

int main() {
	function(1); // OK
	function(X{}); // Fails
}
