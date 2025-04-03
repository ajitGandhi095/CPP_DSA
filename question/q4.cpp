// print even number

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter your value to print even number: ";
    cin>> n;

    for(int i=2; i<=n; i=i+2) {
        cout<< i <<endl;
    }
}