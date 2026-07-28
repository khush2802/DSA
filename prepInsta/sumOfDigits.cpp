#include<iostream>
using namespace std;

int getSum(int num, int sum){
    
    if(num == 0)
        return sum;

    sum += num % 10;

    return getSum(num/10, sum);
}

int main ()
{
    int num, sum = 0;
    num=12345;
    cout <<"\nThe number is:"<<num;
 
    cout <<"\nSum of digits : " << getSum(num, sum);
 
    return 0;
}