/*
                    FIZZBUZZ
------------------------------------------------------
Write a program that prints the numbers from 1 to 100.

For multiples of 3, print "Fizz" instead of the number.

For multiples of 5, print "Buzz" instead of the number.

For multiples of both 3 and 5, print "FizzBuzz" instead 
                  of the number.
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++) //can't start at i = 0
    {
        if (i % 15 == 0)
        {
            cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz\n";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz\n";
        }
        else
        {
            cout << i << "\n";
        } //end if else statement

    } //end for loop

} //end main method