#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter value one;" << endl;
    cin >> a;
    cout << "Enter operation" << endl;
    cin >> ch;
    cout << "Enter value two" << endl;
    cin >> b;

    if (ch == '+')

        cout << "Sum of two number is = " << a + b;

    else if (ch == '-')
        cout << "Subtraction of two number is = " << a - b;

    else if (ch == '*')
        cout << "multipication of two nuber is = " << a * b;
    else if (ch == '/')
        cout << "Dividion of two nuber is = " << a / b;
    else
        cout << "Byee";
}