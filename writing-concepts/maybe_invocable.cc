#include <string>
#include <concepts>
#include <iostream>

template <typename T>
concept maybe_invokable_integral_v1 = std::is_integral<T>::value ||
    (std::is_invocable<T>::value &&
     std::is_integral<typename std::invoke_result<T>::type>::value);

template <typename T>
concept maybe_invokable_integral_v2 = std::integral<T> ||
    (std::invocable<T> &&
     std::integral<typename std::invoke_result<T>::type>);

template <maybe_invokable_integral_v2 T>
void function(const T& x) {
    if constexpr (std::invocable<decltype(x)>) {
        std::cout << "Result of call is " << x() << "\n";
    } else {
        std::cout << "Value is " << x << "\n";
    }
}


int main() {
    function(1);
    function([]() { return 2; });
}
