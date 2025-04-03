// Check a number a prime or not.

#include<iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number to check prime or not: ";
    cin >> number;
    for(int  i=2; i<number; i=i+1) {
        if(number%i==0) {
            cout << "Not a prime number" <<endl;
        }
    }
    cout <<"Prime number"<<endl;

    
}