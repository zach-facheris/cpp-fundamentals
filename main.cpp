#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> tally;
    std::string input;
    // TODO: read every word until input ends and count it in tally.
    while(std::cin >> input) tally[input]++;

    // TODO: print the number of distinct words on its own line,
    //       then one line per word: the word, a space, its count.
    std::cout << tally.size() << std::endl;

    for(const auto& entry : tally)
    {
        std::cout << entry.first << " " << entry.second << std::endl;
    }

    return 0;
}
