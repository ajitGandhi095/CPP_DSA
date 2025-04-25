// Find factorial of a number

#include<iostream>
using namespace std;

int main() {

    int number;
    cout<< "Enter a number to find factorial: ";
    cin>>number;
    int factorial=1;

    while(number>=1) {
        factorial= factorial * number;
        number= number - 1;
    }
    cout << factorial;
    
}