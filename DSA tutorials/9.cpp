// OPERATORS IN C++

/*

PRE-incrementors / decrementors in C++ - they increment the value first then save it.
example : if i = 10, and ++i, ans = 1 + i = 11.
example : if i = 11, and --i, ans = 1 - i = 10.

displays the final val to 1st position.



POST-incrementors in C++  - they first save the value, then increments it.
example : if i = 10, and i++, ans = i + 1 = 11.
example : if i = 11, and i--, ans = i - 1 = 10.

displays the first val to 1st position.

*/


/*   IMPORTANT YET UNKNOWN OPERATORS

 +=   -->  a += b   -->    a = a+b
 -=   -->  a -= b   -->    a = a-b
 *=   -->  a *= b   -->    a = a*b
 /=   -->  a /= b   -->    a = a/b


 sizeof(var)   -->   shows size of int, char, long,double, boolean, float.



 condition operator (terniary opeartor)  -->   (condition) ? X : Y

 example : (a > b) ? (*if true* a is greater than b) : (*if false* b is greater than a)    QUICK IF-ELSE

*/


// relational operators


/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout <<" Enter a number : \n";
    cin >> n;

    if ((n%2 == 0)  &&  (n%3 == 0))
    {
        cout << "the number is divisible by 2 and 3";
    }

    else if (n%3 == 0)
    {
        cout << "the number is only divisible by 3";
    }

    else if (n%2 == 0)
    {
        cout << "the number is only divisible by 2";
    }

    else
    {
        cout << "the number is not divisible by 2 or 3";
    }

    return 0;
}
*/


