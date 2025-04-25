// Print maximum of three numbers

#include<iostream>
using namespace std;

int main() {

    int a,b,c;
    cout<< "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;
    cout<< "Enter third number: ";
    cin>> c;

    if((a>b) & (a>c)) {
        cout << a;
    }
    else if((b>c)) {
        cout << b;
    }
    else {
        cout << "Maximum number among 3 number is: " << c;
    }
}