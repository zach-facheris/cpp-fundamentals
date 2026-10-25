#include <iostream>

class Rectangle
{
public:
    // TODO: constructor Rectangle(int w, int h) with a member initializer list
    // TODO: int area() const
    // TODO: int perimeter() const
    // TODO: bool isSquare() const

    Rectangle(int w, int h) : width{w}, height{h} {}
    int area() const { return width * height; }
    int perimeter() const { return (2 * width) + (2 * height); }
    bool is_square() const { return width == height; }

private:
    int width;
    int height;
};

int main()
{
    int w, h;
    std::cin >> w >> h;
    // TODO: build a Rectangle from w and h, then use its methods below
    Rectangle rect{w, h};

    int a = rect.area();
    int p = rect.perimeter();
    bool sq = rect.is_square();
    std::cout << "area: " << a << "\n";
    std::cout << "perimeter: " << p << "\n";
    std::cout << "square: " << (sq ? "yes" : "no") << "\n";
    return 0;
}
