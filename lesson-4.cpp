#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::getline(std::cin, s); // the WHOLE line, spaces included

    // TODO: rearrange the characters of s into reverse order.
    std::reverse(s.begin(), s.end());

    std::cout << s << '\n';
    return 0;
}
