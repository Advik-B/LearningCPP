#include <iostream>
#include <cmath>
#include "makeitrain.h"

int main() {
    /*
    std::cout << "Hello, World!" << std::endl;
    std::cout << 2 + 6 << std::endl;
    return 0;
    */
    // The above code is very tiring to write. so... Imma use printf instead
    printf("Additon:\n");
    std::cout << "6 + 2 = " << 6+2 << std::endl;
    printf("=======================================\n");
    printf("Subtractoin\n");
    std::cout << "6 - 2 = " << 6 - 2 << std::endl;
    printf("=======================================\n");
    printf("Multiplaction\n");
    std::cout << "6 x 2 = " << 6*2 << std::endl;
    printf("=======================================\n");
    printf("Division\n");
    std::cout << "6 / 2 = " << 6 / 2 << std::endl;
    printf("=======================================\n");
    printf("Powers (using <math.h>)\n");
    std::cout << "6² = " << pow(6, 2) << std::endl;
    printf("=======================================\n");
    printf("The program ended. now. time for some rain using makeitrain.h\n");
    makeitrain();
    return 0;

}
