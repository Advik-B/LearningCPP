#include <iostream>

template <typename T>
constexpr auto make_adder(const T &x) {
    return [x] (const T &y) { return x + y; };
}


int main()
{
    auto add_5 = make_adder(5.f);
    std::cout << add_5(10) << std::endl;
    auto add_10 = make_adder(10);
    std::cout << add_10(10) << std::endl;
    return 0;
}
