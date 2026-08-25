#include <iostream>
using namespace std;

// function to calculate factorial
int facto(int n){
   if (n==0){
    return 1;

   }

   return n*facto(n-1);
}

int detectStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    
    // calculate 1! + 4! + 5!
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + facto(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
    int num = 125;
    
    if(detectStrong(num))
        cout << num << " is Strong Number";
    else
        cout << num << " is Not Strong Number";

}