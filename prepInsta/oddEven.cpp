#include <iostream>
using namespace std;

int main ()
{
    int number;
    cout << "Enter a number:"; cin >> number;

    
    //Checking if the number is divisible by 2
    number % 2 == 0 ? cout << "Even":cout << "Odd";
    
    return 0;
}