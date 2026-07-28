// #include<bits/stdc++.h>
// using namespace std;

// int main ()
// {
//     int num1, num2, largest;
//     num1=32,num2=47; 
 
//     if(num1 == num2)
//         cout << "Both are Equal\n"; else { largest = num1 > num2? num1 : num2;
//         cout << largest << " is largest";
//     }

//   retur


// }


#include <iostream>  

#include <math.h>
using namespace std;

int main ()
{
    int num1, num2;
    num1=45,num2=14;
 
    if (num1 == num2)
        cout << "both are equal";
    else
        cout << max(num1,num2) << " is greater";

    return 0;
}
