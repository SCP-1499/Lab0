#include <iostream>
using namespace std;

int main()
{   
    char a;
    cout << "Hello World!\n";
    cout << "Enter a character\n";
    cout << "To end the program, enter '!'\n";
    while (cin >> a)
    {
        if (a == '!') {
            break;
        }
        cout << a << "\n";
    }
    return 1;
}
