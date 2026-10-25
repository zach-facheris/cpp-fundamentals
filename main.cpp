#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    // TODO: add up every number from 1 through n,
    // then print the result on its own line.

    std::cout << (static_cast<long long>(n) * (static_cast<long long>(n) + 1)) / 2 << std::endl;

    return 0;
}
