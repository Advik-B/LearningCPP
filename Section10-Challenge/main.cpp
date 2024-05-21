#include <iostream>
#include <string>

using namespace std;
#define shift 8

string encrypt(const string &message) {
    string encrypted;
    for (const char &c : message) {
        if (isalpha(c)) {
            if (isupper(c)) {
                encrypted += static_cast<char>((c + shift - 'A') % 26 + 'A');
            } else {
                encrypted += static_cast<char>((c + shift - 'a') % 26 + 'a');
            }
        } else if (isdigit(c)) {
            encrypted += static_cast<char>((c + shift - '0') % 10 + '0');
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

string decrypt(const string &message) {
    string decrypted;
    for (const char &c : message) {
        if (isalpha(c)) {
            if (isupper(c)) {
                decrypted += static_cast<char>((c - shift - 'A' + 26) % 26 + 'A');
            } else {
                decrypted += static_cast<char>((c - shift - 'a' + 26) % 26 + 'a');
            }
        } else if (isdigit(c)) {
            decrypted += static_cast<char>((c - shift - '0' + 10) % 10 + '0');
        } else {
            decrypted += c;
        }
    }
    return decrypted;
}

int main() {
    string message;
    cout << "Enter a message: ";
    getline(cin, message);
    const string encrypted = encrypt(message);
    cout << "Encrypted message: " << encrypted << endl;
    const string decrypted = decrypt(encrypted);
    if (message == decrypted) {
        cout << "Decryption passed: " << decrypted << endl;
    } else {
        cout << "Decryption failed!" << endl;
    }

    cout << "<<- Press ENTER to exit ->>" << endl;
    getchar();
    return 0;
}
