#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

int main()
{
    unsigned long long w, h;
    std::cin >> w >> h;

    // TODO: print the area (it can be as large as 10000000000)
    unsigned long long area = w * h;
    double mean = (static_cast<double>(w) + static_cast<double>(h)) / 2;

    std::cout << area << "\n";

    // TODO: print the mean of the two sides (it can end in .5)
    std::cout << std::dec << mean << "\n";
    return 0;
}
