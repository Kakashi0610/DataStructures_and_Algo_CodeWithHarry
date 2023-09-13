// break and continue 

/*  tough example

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;

    int pocket_money = 2000;
    
    for (i = 0; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }

        if (pocket_money == 0)
        {
            break;
        }

        cout <<"you can go out today\n";
        pocket_money=pocket_money-500;
    }
    return 0;
}
*/


/*  OUTPUT

you can go out today
you can go out today
you can go out today
you can go out today
*/


/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 16; i++)
    {
        if (i%3 == 0)
        {
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}
*/

/* OUTPUT

1
2
4
5
7
8
10
11
13
14
16
*/

// to check if a number is prime or not 

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,n;
    cin >> n;

    for (i = 2; i = n/2; i++)
    {
        if (n%i == 0)
        {
            cout << "the number in non prime\n";
            break;
        }
    
    }

    if (i == n)
    {
    cout << "the number is Prime\n";
    }
    return 0;
}
*/

