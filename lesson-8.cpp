#include <iostream>

// TODO: int is too small for the full input range. Widen the parameter and the return type.
uint64_t square(int64_t n) {
    return n * n;
}

int main() {
    long long n;
    std::cin >> n;
    std::cout << square(n) << "\n";
    return 0;
}
