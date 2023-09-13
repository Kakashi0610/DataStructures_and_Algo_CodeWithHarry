// star patterns

/*   1st star (filled rectangle) pattern

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row;
    cin >> row;

    int column;
    cin >> column;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << "*";
            if (j % column == 0)
            {
                cout << "\n";
            }
        }
    }
    return 0;
}
*/

/* OUTPUT

5
7
*******
*******
*******
*******
*******

*/




/*  2nd star (hollow rectangle) pattern


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row;
    cin >> row;

    int column;
    cin >> column;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || j == 1 || i == row || j == column)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
*/

/* OUTPUT

5
5
*****
*   *
*   *
*   *
*****

*/



//   inverted half pyramid
/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    cout << "Enter thenumber of stars to print : \n";
    cin >> num;    

    for (int i = num; i>=1; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
*/

/* OUTPUT 

Enter thenumber of stars to print : 
5
*****
****
***
**
*

*/