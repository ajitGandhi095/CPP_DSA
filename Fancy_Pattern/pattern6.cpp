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

        // numeric between spaces
        int start=1;
        for(int col=0; col<2*row+1; col++) {
            if(row==0 || row==n-1) {
                //even
                if(col%2==0) {
                    cout<< start << " ";
                    start=start+1;
                }
                //odd
                else {
                    cout<< "  ";
                }
            }
            else {
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