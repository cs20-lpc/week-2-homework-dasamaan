template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 f, T2 s) {
    first = f;
    second = s;
}

// Print function implementation
template <typename T1, typename T2>
void Pair<T1, T2>::print() const {
    std::cout << "(" << first << ", " << second << ")" << std::endl;
}
