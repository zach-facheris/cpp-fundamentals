#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> nums;
    int x;
    while (std::cin >> x) nums.push_back(x);

    auto it_start = nums.begin();
    auto it_end = nums.end();

    unsigned long long total = std::accumulate(it_start, it_end, 0, [](unsigned long long run, int elem){
        if(elem % 2 > 0)
        {
            return run;
        }

        unsigned long long square = static_cast<long long>(elem) * elem;

        return run + square;
    });
    // TODO: set total to the sum of the squares of the even values in nums.

    std::cout << total << "\n";
    return 0;
}
