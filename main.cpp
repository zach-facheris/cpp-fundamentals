#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int input;
    std::vector<int> nums;
    // TODO: read every integer from stdin into nums (the line has no count).

    while(std::cin >> input) 
        nums.push_back(input);

    int largest = 0;
    int count = 0;
    // TODO: find the largest value in nums, then count how many times it appears.
    for(auto num: nums)
    {
        largest = std::max(num, largest);
    }

    for(auto num: nums)
    {
        if(num == largest)
            count++;
    }

    std::cout << largest << "\n";
    std::cout << count << "\n";
    return 0;
}
