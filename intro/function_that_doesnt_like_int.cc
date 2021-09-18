#include <string>

void function_without_concept(const auto& x) {
	std::string v = x;
}

int main() {
	function_without_concept(1);
}
