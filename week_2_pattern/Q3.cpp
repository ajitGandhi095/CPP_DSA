// Numeric Palindrome equilateral Pyramid

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int row=0; row<n; row++) {
        int c=1;
        for(int col=0; col<n+row; col++) {
            // Print Spaces
            if(col<n-row-1) {
                cout<< " ";
            }

            // Print Number
            else if(col <= n-1){
                cout<< c;
                c++;
            }

            // Print Reverse order
            else if(col == n) {
                c=c-2;
                cout<< c;
                c--;
            }
            else {
                cout<< c;
                c--;
            }

            cout<< " ";
        }
        cout<< endl;
    }

    return 0;
}