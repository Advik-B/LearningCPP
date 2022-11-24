#include <string>



namespace colors {
    
    using std::string;

    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string MAGENTA = "\033[35m";
    const string CYAN = "\033[36m";
    const string WHITE = "\033[37m";
    const string RESET = "\033[0m";

    const string ON_RED = "\033[41m";
    const string ON_GREEN = "\033[42m";
    const string ON_YELLOW = "\033[43m";
    const string ON_BLUE = "\033[44m";
    const string ON_MAGENTA = "\033[45m";
    const string ON_CYAN = "\033[46m";
    const string ON_WHITE = "\033[47m";


    string dye(string text, string color) {
        // Lowercase the color string
        for (auto &c : color) {
            c = tolower(c);
        }

        if (color == "red") {
            return RED + text + RESET;
        } else if (color == "green") {
            return GREEN + text + RESET;
        } else if (color == "yellow") {
            return YELLOW + text + RESET;
        } else if (color == "blue") {
            return BLUE + text + RESET;
        } else if (color == "magenta") {
            return MAGENTA + text + RESET;
        } else if (color == "cyan") {
            return CYAN + text + RESET;
        } else if (color == "white") {
            return WHITE + text + RESET;
        } else if (color == "on_red") {
            return ON_RED + text + RESET;
        } else if (color == "on_green") {
            return ON_GREEN + text + RESET;
        } else if (color == "on_yellow") {
            return ON_YELLOW + text + RESET;
        } else if (color == "on_blue") {
            return ON_BLUE + text + RESET;
        } else if (color == "on_magenta") {
            return ON_MAGENTA + text + RESET;
        } else if (color == "on_cyan") {
            return ON_CYAN + text + RESET;
        } else if (color == "on_white") {
            return ON_WHITE + text + RESET;
        } else {
            return color + text + RESET;
        }
    }
}