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

        //NUmbers
        for(int col=0; col<row+1; col++) {
            cout<< row+col+1 << " ";
        }

        //Reverse numbers
        int start=row*2;
        for(int col=0; col<row; col++) {
            cout<< start << " ";
            start= start-1;
        }

        cout<< endl;
    }
}