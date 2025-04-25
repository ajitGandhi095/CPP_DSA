#include<iostream>
using namespace std;

int Factorial(int val) {

    int fact=1;
    for(int i=val; i>=1; i--) {
            fact= fact * i;
    }
    return fact;
}

int main() {

    int val;
    cout<< "Enter your value: ";
    cin>> val;

    int fact= Factorial(val);

    cout<< "Factorial of " << val << " is " << fact <<endl;
    return 0;
}