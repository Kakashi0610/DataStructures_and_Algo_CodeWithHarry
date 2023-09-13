// SWITCH - CASE statements


/* switch case easy example

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char button;
    cout << "enter a button\n";
    cin >> button;

    switch (button)
    {
        case 'a':
        cout << "namaste\n";
        break;

        case 'b':
        cout <<"hola\n";
        break;

        case 'c':
        cout << "ciao\n";
        break;

        case 'd':
        cout << "salut\n";
        break;

        default:
        {
            cout << "I am still learning more\n";
        }
    }
    return 0;
}
*/


// calculator using switch case

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    char op1;

    cout << "Enter 2 numbers as an input\n";
    cin>> a >> b;

    cout << "Enter an operator\n";
    cin >> op1;

    switch (op1)
    {
        case '+':
        cout << "the value of a + b is :"<< a + b;
        break;

        case '-':
        cout <<"the value of a - b is :"<< a - b;
        break;

        case '*':
        cout << "the value of a * b is :" << a * b;
        break;

        case '/':
        cout << "the value of a / b is :" << a / b;
        break;

        default:
        {
            cout << "enter a valid operator\n";
        }

    }
    return 0;
}
*/


/*  OUTPUT

Enter 2 numbers as an input
4
2
Enter an operator
*
the value of a * b is :8
*/