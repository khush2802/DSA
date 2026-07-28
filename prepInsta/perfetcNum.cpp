#include <iostream>
using namespace std;

int main ()
{
    int num = 28, sum = 0;
    
    int i = 1;
    while(i < num)  
    {
        // check if i is a divisor
        if(num % i == 0)  
            sum = sum + i;
            
        i++;  
    }  
    
    if(sum == num)
        cout << num << " is a perfect number";
    else
        cout << num << " is not a perfect number";
    
    return 0;
}