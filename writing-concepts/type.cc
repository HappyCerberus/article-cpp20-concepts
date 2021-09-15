#include <concepts>

template <typename T>
concept type_test = requires {
    typename T::ElementType; // ElementType member type must exist
};

template <std::integral T>
struct S;

template <typename T>
concept template_test = requires {
    typename S<T>; // Checks whether S<T> is a valid template substitution
};

void function1(template_test auto x) {}
void function2(type_test auto x) {}

struct X { using ElementType = int; };

int main() {
	function1(1); // OK
	// function1(X{}); // Fails

	function2(X{}); // OK
	// function2(1); // Fails
}
