// Inverted Half Pyramid
// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main() {

    int rowCount;
    cout<< "Enter Row Value: ";
    cin>> rowCount;

    for(int row=0; row<rowCount; row=row+1) {
        for(int col=0; col<rowCount-row; col=col+1) {
            cout<< "* ";
        }
        cout<< endl;
    }
}