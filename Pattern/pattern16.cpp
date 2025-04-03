// Flipped solid dimond

#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int row=0; row<n ; row= row+1) {

        // Upper half pyramid
        for(int col=0; col<n-row; col=col+1) {
            cout<< "*";
        }

        // upper space full pyramid
        for(int col=0; col<2*row+1; col=col+1) {
            cout<< " ";
        }

        // upper half pyramid
        for(int col=0; col<n-row; col=col+1) {
            cout<< "*";
        }
        cout<< endl;
    }

    for(int row=0; row<n; row=row+1) {

        // down half pyramid
        for(int col=0; col<row+1; col=col+1) {
            cout<< "*";
        }

        //down full pyramid
        for(int col=0; col<2*n-2*row-1; col=col+1) {
            cout<< " ";
        }

        //down half pyramid
        for(int col=0; col<row+1; col=col+1) {
            cout<< "*";
        }
        cout<< endl;
    }
    
}