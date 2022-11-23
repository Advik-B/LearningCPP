#include <termcolor/termcolor.hpp>
#include <string>
#include <sstream>

using std::string;

void test()
{
    // Create a stream so that we can capture the output
    std::stringstream ss;
    std::streambuf* old = std::cout.rdbuf(ss.rdbuf());

    // Print some text in different colors
    ss << termcolor::red << "red text" << termcolor::reset << std::endl;
    ss << termcolor::green << "green text" << termcolor::reset << std::endl;
    ss << termcolor::blue << "blue text" << termcolor::reset << std::endl;
    ss << termcolor::yellow << "yellow text" << termcolor::reset << std::endl;
    ss << termcolor::magenta << "magenta text" << termcolor::reset << std::endl;

    // Restore the original stream buffer
    std::cout.rdbuf(old);


}

int main()
{
    test();
    return 0;
}