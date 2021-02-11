/*
*             | if a == 1 -> return 1
*   fib (a) = | if a == 0 -> return 0
*             | else      -> return fib(a-1) + fib(a-2)
*/

#include <iostream>
using namespace std;

#ifndef DEBUG_MSG
    #define DEBUG_MSG
    #define DEBUG_MSG_OFF       // Debug messages on (DEBUG_MSG_ON) or off (DEBUG_MSG_OFF)
#endif


int fib (int a) {       // Recursive method for calculating a-th fibonacci number

    #ifdef DEBUG_MSG_ON
        cout << "a: " << a << endl;
    #endif

    if (a == 0) {       // Checking if input is 0
        return 0;
    }

    else if (a == 1) {  // Checking if input is 1
        return 1;
    }

    else {              // Fibonacci algorithm
        return fib (a-1) + fib (a-2);
    }
}

int main () {
    int _inputNumber;   // Variable for input
    int _fibOut;        // Variable for output

    cout << "Enter your number: ";  // Output string for entering number
    cin >> _inputNumber;            // Reading in iput number

    _fibOut = fib (_inputNumber);   // Starting recursive function

    cout << "The corresponding fibbonacci number is " << _fibOut << endl;   // Give out result

    exit (0);       // Ending program
}
