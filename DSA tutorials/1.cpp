
//timepass

/* to find value of 3 numbers

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 2;
    int c = 3;

    if ((a>b) && (a>c))
    {
        cout << "the value of a is bigger ";
    }
    if ((b>c) && (b>a))
    {
        cout << "the value of b is bigger ";
    }
    if ((c>a) && (c>b))
    {
        cout << "the value of c is bigger ";
    }

    return 0;
}
*/

// OUTPUT = the value of a is bigger


// to find even odd to tal numbers inputted by user

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number to check even numbers" <<"\n";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i<<"\n";
            cout << "It is an even number" <<"\n\n";
        }
        else
        {
            cout << i<<"\n";
            cout << "It is not an even number" <<"\n\n";
        }
    }

    return 0;
}
*/


/* OUTPUT
enter the number to check even numbers
10
1
It is not an even number

2
It is an even number

3
It is not an even number

4
It is an even number

5
It is not an even number

6
It is an even number

7
It is not an even number

8
It is an even number

9
It is not an even number

10
It is an even number

*/


/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    printf("hello world");
    return 0;
}
*/