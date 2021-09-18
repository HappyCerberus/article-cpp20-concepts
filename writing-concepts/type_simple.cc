#include <concepts>

template <typename T>
concept type_test = requires {
    typename T::ElementType; // ElementType member type must exist
};

void function(type_test auto x) {}

struct X { using ElementType = int; };

int main() {
	function(X{}); // OK
	function(1); // Fails
}
