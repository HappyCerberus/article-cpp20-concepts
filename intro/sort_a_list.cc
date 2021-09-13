#include <algorithms>
#include <list>

int main() {
	std::list<int> data = { 4, 1, 2, 9, 8, 6 };
	std::sort(begin(data), end(data));

	for (const auto &i : data) {
		std::cout << i << " ";
	}

	std::cout << "\n";
}
