#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n) {
    int binary=0;
    int i=0;

    while(n>0) {
        int bit= n%2;
        binary= bit * pow(10, i++) + binary;
        n=n/2;
    }
    return binary;
}

int main() {
    int n;
    cout<< "Enter a number that convert to binary: ";
    cin>>n;

    int res= binaryToDecimal(n);
    cout<< "Binary number of " << n << " is: " << res << endl;
}