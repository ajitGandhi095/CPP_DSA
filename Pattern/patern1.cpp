// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;
int main() {
    //Declare row and column
    int row;
    int col;

    // outer for loop--> row observe
    for(row=0; row<3; row=row+1) {
        // inner for loop---> col observe
        for(col=0; col<5; col=col+1) {
            cout << "*" << " ";
        }
        cout << endl;
    }

}
    