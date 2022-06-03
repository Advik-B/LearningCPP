#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int counter {10};
    int result {0};

    cout << "===EXAMPLE-1===" << endl;

    cout << "counter: " << counter << endl;

    counter = counter + 1;
    cout << "counter: " << counter << endl;

    counter++;
    cout << "counter: " << counter << endl;

    ++counter;
    cout << "counter: " << counter << endl;

    cout << "===EXAMPLE-2===" << endl;

    // Resetting values
    counter = 10;
    result = 0;

    cout << "counter: " << counter << endl;
    result = ++counter; //Note the pre increment
    cout << "counter: " << counter << endl;
    cout << "result: " << result << endl;

    cout << "===EXAMPLE-3===" << endl;

    counter = 10;
    result = 0;

    cout << "counter: " << counter << endl;
    result = counter++; //Note the post increment
    cout << "counter: " << counter << endl;
    cout << "result: " << result << endl;

    cout << "===EXAMPLE-4===" << endl;

    counter = 10;
    result = 0;
    cout << "counter: " << counter << endl;
    result = ++counter  + 10; //Note the pre increment
    cout << "counter: " << counter << endl;
    cout << "result: " << result << endl;

    cout << "===EXAMPLE-5===" << endl;

    counter = 10;
    result = 0;

    cout << "counter: " << counter << endl;

    result = counter++ + 10; //Note the post increment

    cout << "counter: " << counter << endl;
    cout << "result: " << result << endl;

    cout << "You can also do i++ + ++i lol. (if i initalised to 0, then the result will be 3)" << endl;
    cout << "(Wait, lemmie actually check...)" << endl;
    int i {0};
    cout << "i: " << i << endl;
    cout << "i++ + ++i: " << i++ + ++i << endl;
    if (i == 3)
    {
        cout << "i is 3 and I am right" << endl;
    }
    else
    {
        cout << "i is not 3 and I got a bit confused?" << endl;
        // I still got confused, so I'll just do it again
    }
    cout << "..." << endl;
    cout << "Nevermind c++ reads from the right to left" << endl;
    cout << "...makes sense" << endl;
    cout << "return 0; // I'm done" << endl;
    cout << endl;
    return 0;
}
