// Numeric Hollow Half Pyramid

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int row=0; row<n; row++) {
        for(int col=0; col<=row; col++) {
            if(col==0 || col==row || row == n-1) {
                cout<< col+1 << " ";
            }
            else {
                cout<< " ";
            }
        }
        cout<< endl;
    }

    return 0;
}