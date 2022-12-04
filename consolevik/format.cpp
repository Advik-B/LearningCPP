//
// Created by Advik on 04/12/22.
//
#include "effects.cpp"
#include "colors.cpp"

namespace fmt
{
    std::string format(std::string text, std::string color, std::string effect)
    {
        return colors::dye(effects::add_effect(text, effect), color);
    }
}
