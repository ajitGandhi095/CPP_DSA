// Inverted Full Pyramid
//  * * * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    //outer for loop
    for(int row=0; row<n; row++) {
        // outer for loop for space
        for(int col=0; col<row; col++) {
            cout<< " ";
        }
        // outer for loop for *
        for(int col=0; col<n-row; col++) {
            cout<< "*";
            cout<< " ";
        }
        cout<< endl;
    }
}