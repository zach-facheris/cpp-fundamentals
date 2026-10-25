#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string name;
    int qty;
    double price;
    std::getline(std::cin, name);
    std::cin >> qty >> price;
    double total = qty * price;
    // TODO: add manipulators so the row matches the column spec:
    // name left-aligned in 10, qty right-aligned in 5, total right-aligned in 10 with 2 decimals.
    std::cout << std::left << std::setw(10) << name << "|";
    std::cout << std::right << std::setw(5) << qty << "|";
    std::cout << std::fixed << std::setprecision(2) << std::setw(10) << total << std::endl;
    return 0;
}
