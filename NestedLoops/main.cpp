 #include <iostream>

using std::cout;

int main() {
    // Display the multiplication table
    const int until = 20;
    for (int num1 {1}; num1 <= until; ++num1) {
        for (int num2 {1}; num2 <= 10; ++num2) {
            cout << num1 << 'x' << num2
                << " = " << num1 * num2
                << "\n";
        }
        cout << "------------------------------------\n";
    }

    return 0;
}
