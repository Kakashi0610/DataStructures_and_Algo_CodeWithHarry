// IF ELSE statements in C++

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int amount;

    cout << "enter the amount you have \n";
    cin >> amount;

    if (amount>5000)
    {
        cout <<"you can go with Neha \n";
        if (amount<6000)
        {
            cout << "you can go on a road trip w neha \n";
        }

        else
        {
            cout << "you can go in mall w neha \n";
        }
    }

    else if (amount >= 2500)
    {
        cout << "anuja \n";
        if (amount >= 3000)
        {
            cout << "you can go to pub w anuja \n";
        }

        else 
        {
            cout << "you can go to mcdonalds \n";
        }
    }

    else
    {
        cout << "you can go w friends you broke ass !! \n";
    }

    return 0;
}
*/


/*  OUTPUT
enter the amount you have 
2600
anuja 
you can go to mcdonalds
*/



// maximun num out of 3 

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c;

    cin >> a;
    cout << "the val of a is " << a << endl;

    cin >> b;
    cout << "the val of b is " << b << endl;

    cin >> c;
    cout << "the val of c is " << c << endl;
    
    if (a>b && a>c)
    {
        cout << "the val of a is greater";
    }

     else if (b>a && b>c)
    {
        cout << "the val of b is greater";
    }

    else if (c>b && c>a)
    {
        cout << "the val of c is greater";
    }

    else 
    {
        cout << "the numberis invalid !";
    }

    return 0;
}
*/


/* OUTPUT
22
the val of a is 22
66
the val of b is 66
44
the val of c is 44
the val of b is greater
*/


// even odd

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cin >> n;
    cout <<"the number is : "<<n<<"\n";

    if (n%2 == 0)
    {
        cout << "the number is even\n";
    }

    else
    {
        cout << "the number is odd\n";
    }

    return 0;
}
*/


/* OUTPUT
5
the number is : 5
the number is odd
*/
