#include <string>
#include <concepts>

void function_without_concept(const auto& x) {
    std::string v = x;
}

void func_with_auto_inline(const std::convertible_to<std::string> auto& x) {
    std::string v = x;
}

void func_with_auto_postfix(const auto& x)
    requires std::convertible_to<decltype(x), std::string> {
    std::string v = x;
}

template <std::convertible_to<std::string> T>
void func_with_template_inline(const T& x) {
    std::string v = x;
}

template <typename T>
    requires std::convertible_to<T, std::string>
void func_with_template_postfix(const T& x) {
    std::string v = x;
}

int main() {
    // function_without_concept(1);
    function_without_concept("Hello World");
    // func_with_auto_inline(1);
    func_with_auto_inline("Hello World");
    // func_with_auto_postfix(1);
    func_with_auto_postfix("Hello World");
    // func_with_template_inline(1);
    func_with_template_inline("Hello World");
    // func_with_template_postfix(1);
    func_with_template_postfix("Hello World");
}
