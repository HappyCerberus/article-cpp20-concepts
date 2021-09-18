template <typename T>
concept assignment_cant_throw = requires (T a, T b) {
    { a = b } noexcept;
};

struct X {
    X& operator = (const X& lhs) noexcept { return *this; }
};

struct Y {
    Y& operator = (const Y& lhs) { return *this; }
};

template <assignment_cant_throw T> struct Test {};

int main() {
  Test<X> a; // OK
  Test<Y> b; // Fails
}
