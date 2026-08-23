#include <iostream>
using namespace std;

// Factorial Program. 
int factorial(int n){
    
    // Base Case
    if ( n <= 1){
        return 1;
    }

    // Condition
    return n * factorial(n-1);
}

// Fibonacci Series
int fibonacci(int nTerm){

    // Base Case
    if ( nTerm <= 1){
        return nTerm;
    }

    return fibonacci(nTerm-1) + fibonacci(nTerm-2);
    
}


int main(){

    cout << "Factorial of 5 is " << factorial(5) << endl; 

    cout << "Fibonacci at position 6 is " << fibonacci(6) << endl;

    return 0; 
}