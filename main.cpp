#include <iostream>

int main(int, char **)
{
    int year;
    std::cout << "Hello, from demo!\n";
    std::cout << "This is the second line!\n";
    std::cout << "Please enter a year: ";
    std::cin >> year;
    std::cout << "The year is now " << year << "!\n";
    return 0; // success
}
