// Fancy-Pattern-3

// * 1 *
// * 1 2 1 *
// * 1 2 3 2 1 *
// * 1 2 1 *
// * 1 *


#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int row=0; row<n; row++) {
        // row growing and shrinking 
        int cond= row <= n/2 ? 2*row : 2*(n-row-1);
        cout<< "* ";

        for(int col=0; col<=cond; col++) {

            // Col growing and shrinking
            if(col<=cond/2) {
                cout<< col+1 << " ";
            }
            else {
                cout<< cond-col+1 << " ";
            }
        }
        cout<< "* ";
        cout<< endl;
    }
    return 0;
}