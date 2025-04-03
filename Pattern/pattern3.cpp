//   Hollow Rectangle
// * * * * *
// *       *
// * * * * *

#include<iostream>
using namespace std;

int main() {

    // int rowCount,colCount;
    // cout<<"Enter row value: "<<endl;
    // cin>>rowCount;
    // cout<<"Enter col value: "<<endl;
    // cin>>colCount;

    // for(int row=0; row<rowCount; row+=1) {
    //     if(row==0 || row==rowCount-1) {
    //         for(int col=0; col<colCount; col+=1) {
    //             cout << "* ";
    //         }
    //     }
    //     else {
    //         cout << "* ";
    //         for(int col=0; col<colCount-2; col+=1) {
    //             cout << "  ";
    //         }
    //         cout << "*";
    //     }
    //     cout <<endl;
    // }

            // OR

    int n;
    cout<< "Enter a number to print pattern: ";
    cin>> n;

    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            if(row==0 || row==(n-1) || col==0 || col==(n-1)) {
                cout<< "* ";
            }
            else {
                cout<< "  ";
            }
        }
        cout<< endl;
    }

}