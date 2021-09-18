template <typename T>
concept x = requires (T a) {
    requires sizeof(a) >= 4;
    requires std::integral<T>;
    std::integral<T>; // probably not what you meant
};
