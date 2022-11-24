#include <string>

namespace effects {

    using std::string;

    const string UNDERLINE = "\033[1m";
    const string BOLD = "\033[4m";
    const string REVERSE = "\033[7m";
    const string RESET = "\033[0m";
    const string BLINK = "\033[5m";
    const string INVISIBLE = "\033[8m";

    string add_effect(string text, string effect) {
        // Lowercase the effect string
        for (auto &c : effect) {
            c = tolower(c);
        }

        if (effect == "underline") {
            return UNDERLINE + text + RESET;
        } else if (effect == "bold") {
            return BOLD + text + RESET;
        } else if (effect == "reverse") {
            return REVERSE + text + RESET;
        } else if (effect == "blink") {
            return BLINK + text + RESET;
        } else if (effect == "invisible") {
            return INVISIBLE + text + RESET;
        } else {
            return effect + text + RESET;
        }
    }

}