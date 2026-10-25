#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> nums;
    int x;
    while (std::cin >> x) nums.push_back(x);

    auto it_start = nums.begin();
    auto it_end = nums.end();

    long long total = std::accumulate(it_start, it_end, 0, [](long long run, int elem){
        if(elem % 2 > 0)
        {
            return run;
        }

        return run + (static_cast<long long>(elem) * elem);
    });
    // TODO: set total to the sum of the squares of the even values in nums.

    std::cout << total << "\n";
    return 0;
}
