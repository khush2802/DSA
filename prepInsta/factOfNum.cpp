#include <bits/stdc++.h>
using namespace std;

void getFactors(int num){
    
    for(int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0){
          
            if(i == num/i)
                cout << i << " ";
            
            else
                cout << i << " " << num/i << " "; 
        }
    }
}


int main()
{
    int num =100;
     
    getFactors(num);
}