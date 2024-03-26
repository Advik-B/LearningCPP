#include <iostream>
#include <string>
#include <sstream>

using std::cin, std::cout, std::string;
typedef string ptr_string;


ptr_string format_pointer_address(void *ptr) {
    // Format a pointer memory address to a sensible string
    return "0x" + std::to_string(reinterpret_cast<uintptr_t>(ptr));
}


int main() {
    string s1;
    string s2 {}; // Initialiser not needed
    string s4 {"Advik"};
    string s5 {s4, 3}; // Only first 3 characters
    string s6 {s4, 3, 2}; // 2 characters starting from 3rd character
    string s7 (10, 'A'); // 10 'A's
    string s8 (s4); // Copy of s4

    cout << "s1: " << s1 << "\n"; // Empty string
    cout << "s2: " << s2 << "\n"; // Empty string
    cout << "s4: " << s4 << "\n"; // Advik
    cout << "s5: " << s5 << "\n"; // ik
    cout << "s6: " << s6 << "\n"; // ik
    cout << "s7: " << s7 << "\n"; // AAAAAAAAAA
    cout << "s8: " << s8 << "\n"; // Advik

    size_t lexlen_s8 { };
    cout << "size_t default initialization is: " << lexlen_s8 << "\n";
    void *ptr = &lexlen_s8;
    cout << "Address of lexlen_s8: " << format_pointer_address(ptr) << "\n";
    for (const unsigned char x: s8) {
        lexlen_s8+=x;
    }

    cout << "Lexicographical length of s8: " << lexlen_s8 << "\n"; // 429
    return 0;
}