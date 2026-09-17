#include <iostream>
using namespace std;

inline int square(int x){
    return (x*x);
}

inline int addition(int a, int b){
    return a + b;
}

int main(){

    int num1 = 2; 
    int num2 = 3; 

    cout << "Sum is => " << addition(num1, num2);

    cout << "\nSquare of " << num1 << " is " << square(num1);

    cout << "\nSquare of " << num2 << " is " << square(num2);

    return 0; 
}