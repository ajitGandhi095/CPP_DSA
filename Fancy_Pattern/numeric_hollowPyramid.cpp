#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int row=0; row<n; row++) {

        //Spaces
        for(int col=0; col<n-row-1; col++) {
            cout<< "  ";
        }

        //Numbers in between spaces
        int start=1;
        for(int col=0; col<2*row+1; col++) {
            //First row or last row
            if(row==0 || row==n-1) {
                //even
                if(col%2==0) {
                    cout<< start <<" ";
                    start=start+1;
                }
                //odd
                else {
                    cout<< "  ";
                }
            }
            else {
                // first col
                if(col==0) {
                    cout<< col+1 << " ";
                }
                else if(col==2*row+1-1) {
                    cout<< row+1 << " ";
                }
                else {
                    cout<< "  ";
                }
            }
            
        }
        cout<< endl;
    }
}