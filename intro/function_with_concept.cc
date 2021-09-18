#include <string>
#include <concepts>

void func_with_auto_inline(const std::convertible_to<std::string> auto& x) {
    std::string v = x;
}

int main() {
    func_with_auto_inline(1);
}
