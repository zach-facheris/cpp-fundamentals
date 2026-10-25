#include <iostream>

inline bool is_div_by(int number, int divisor)
{
    return number % divisor == 0;
}

int main()
{
    int n;
    std::cin >> n;

    // TODO: replace this line with an if / else if / else chain
    // that prints FizzBuzz, Fizz, Buzz, or n.
    if (is_div_by(n, 3) && is_div_by(n, 5))
    {
        std::cout << "FizzBuzz" << "\n";
    }
    else if (is_div_by(n, 3))
    {
        std::cout << "Fizz" << "\n";
    }
    else if (is_div_by(n, 5))
    {
        std::cout << "Buzz" << "\n";
    }
    else
    {
        std::cout << n << "\n";
    }

    return 0;
}
