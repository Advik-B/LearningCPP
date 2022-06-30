#include <iostream>

int main() {
    using namespace std;
    char wanted_grade;
    cout << "[?] What grade do you want?: ";
    cin >> wanted_grade;

    switch (wanted_grade) {
        case 'A':
        case 'a':
            cout << "An A? You really need to slog your ass off!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "B... Umm did you just give up on 'A' and just disided on a 'B' as a fallback?" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Humm... you should really try for an 'A' even if you did not get an 'A', you will get a 'B/C' for sure!" << endl;
            break;
        case 'E':
            cout << "Really? An E! 😑" << endl;
            break;
        case 'f':
        case 'F': {
            cout << "[?] Bruh! F = fail! are you sure? [Y/N]: ";
            char yes_or_no;
            cin >> yes_or_no;
            switch (yes_or_no) {
                case 'Y':
                case 'y':
                    cout << "Wow... you need help bro! Go to a counsolour now!" << endl;
                    break;
                case 'n':
                case 'N':
                    cout << "Thank goodness you are joking!" << endl;
                    break;
                default:
                    cout << "Bruh, enter a y or n. stop trying to break me!" << endl;
            }
            break;

        }

        default:
            cout << "NOT A VALID GRADE, bro" << endl;
    }
    return 0;
}
