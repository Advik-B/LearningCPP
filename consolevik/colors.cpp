#include "termcolor/termcolor.hpp"

int main()
{
    std::cout << termcolor::red << "Hello, World!" << std::endl;
    std::cout << termcolor::green << "Hello, World!" << std::endl;
    std::cout << termcolor::blue << "Hello, World!" << std::endl;
    std::cout << termcolor::yellow << "Hello, World!" << std::endl;
    std::cout << termcolor::magenta << "Hello, World!" << std::endl;
    std::cout << termcolor::cyan << "Hello, World!" << std::endl;
    std::cout << termcolor::white << "Hello, World!" << std::endl;
    std::cout << termcolor::reset << "Hello, World!" << std::endl;
}
