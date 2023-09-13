// LOOPS in C++

/*  FOR loop

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, sum;

    cin >> num;
    cout <<"the number for the sum is " <<num<<"\n\n";

    sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        cout << "from the value of "<<i<< ", the sum is : " <<sum<<"\n";
    }

    cout <<"\n"<<"the total sum is :"<<sum<<"\n";

    return 0;
}
*/


/* OUTPUT

5
the number for the sum is 5

from the value of 1, the sum is : 1
from the value of 2, the sum is : 3
from the value of 3, the sum is : 6
from the value of 4, the sum is : 10
from the value of 5, the sum is : 15

the total sum is :15
*/


//  WHILE LOOP

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    
    while (num>0)    //no semicolon here
    {
        cout << "\nthe number in while loop is : "<<num<<"\n";
        cin >>num;
    }
        
    return 0;
}
*/


/* OUTPUT
12

the number in while loop is : 12
33

the number in while loop is : 33
-22
*/

// DO WHILE loop 

// for printing +ve and terminating -ve

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num,new_num;

    cin >> num;
    
    do
    {
        cout << "\nthe number in do while loop is : \n";
        cin >> new_num;
    }
    while ((num>0) && (new_num>0));    //semicolon is required
        
    return 0;
}
*/

/* OUTPUT

12

the number in do while loop is :
34

the number in do while loop is :
-34     // after 34 terminated 
*/
