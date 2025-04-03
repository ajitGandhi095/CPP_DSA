// FULL PYRAMID
//       *
//     *    *
//    *  *   *
//   *  *  *  *
//  *  *  *  *  *
// *  *  *  *  *  *

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n: " <<endl;
    cin>> n;

    //Outer for loop
    for(int row=0; row<n; row++) {
        // Inner for loop for space
        for(int col=0; col<n-row-1; col++) {
            cout<< " ";
        }
        //Inner for loop for * print
        for(int col=0; col<row+1; col++) {
            cout<< "* ";
        }
        cout<< endl;
    }
}