template <typename T>
concept addable = requires (T a, T b) {
	a+b;
};

void function(addable auto x) {}

struct X {};

int main() {
	function(1); // OK
	//function(X{}); // Fails
}
