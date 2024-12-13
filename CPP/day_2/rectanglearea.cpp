#include <iostream>
#include <string>

int main()
{
    [[maybe_unused]]double pi{};
    double length{}, breadth{};
    printf("Enter the Length of the Rectangle: ");
    std::cin >> length;
    printf("Enter the breadth of the Rectangle: ");
    std::cin >> breadth;
    printf("The area is: ");
    std::cout << length*breadth;

}



