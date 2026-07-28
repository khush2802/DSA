#include <iostream>
using namespace std;

int getReverse(int num, int rev){
    if(num == 0)
        return rev;
    
    int rem = num % 10;
    rev = rev * 10 + rem;
    
    return getReverse(num / 10, rev);
}


int main ()
{
    int num, rev = 0;
    num=1234;
    cout << "\n The number is"<<num; 
       
    cout << "\nReverse: " << getReverse(num, rev);
}