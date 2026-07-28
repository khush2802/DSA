// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 15;
//     int a = 0, b = 1;
    
  
//     cout << a << ", " << b << ", ";
    
//     int nextTerm;
 
//     for(int i = 2; i < num; i++){
//         nextTerm = a + b;
//         a = b;
//         b = nextTerm;
        
//         cout << nextTerm << ", ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int fibonacci(int n){
    
    if(n <= 1)
        return n;
        
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main()
{
    int n = 15;

    for(int i = 0; i < n; i++)
        cout << fibonacci(i) << ", ";

    return 0;
}