template <typename T>
concept has_x = requires (T v) {
    v.x;
};

template <typename T>
concept coord = requires (T v) {
    v.x;
    v.y;
};

void function(has_x auto x) {}
void function(coord auto x) {}

struct X {
	int x;
};

struct Y {
    int x;
    int y;
};

int main() {
	function(X{}); // OK, only one viable candidate
	function(Y{}); // Fails, ambiguous
}
