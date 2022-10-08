#include <iostream>

using namespace std;
/*
 * A small note for future me:
 * using 'endl' as a line ending is a bad idea
 * 'endl' will also "flush the buffer" which can take time
 * therefore it is better to use a "\n"
 *
*/
int main()
{
    long long num{ 0 };
    cout << "Enter a number: ";
    cin >> num;
    
    while (num > 0)
    {
        cout << num << "\n";
        num--;
    }
    cout << "BLASTOFF!!" << "\n";
    return 0;
}