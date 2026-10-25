#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    // TODO: both results can fall outside the int range.
    // Give them a type that holds them, and make sure the
    // arithmetic itself is done in that type, not in int.
    long long sum = static_cast<long long>(a) + b;
    long long diff = static_cast<long long>(a) - b;

    std::cout << sum << "\n";
    std::cout << diff << "\n";
    return 0;
}
