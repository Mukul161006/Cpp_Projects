#include <iostream>
using namespace std; 

int calculateAmount(int principal_Amt, int time = 2, int rate = 5){
    int interest = (principal_Amt * time * rate) / 100; 
    return (principal_Amt + interest);
}

int main(){

    // Relying on default values
    int loan_amt = 1000;
    cout << "Reliance on Default Arguments : " << calculateAmount(loan_amt);

    // Overiding both of the default values.
    int loan_amt1 = 2000;
    cout << "\nNo reliance on Default values : " << calculateAmount(loan_amt1, 5, 10);

    return 0;
}