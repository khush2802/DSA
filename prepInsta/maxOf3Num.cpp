#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int first, second, third;
    
    first=10,second=20,third=30;
    
    int result;

    result =  max(first,max(second, third));
    
    cout << result << " is the largest";

 
    return 0;
}