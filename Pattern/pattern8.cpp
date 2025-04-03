// Full Pyramid
//       *
//     *   *
//    *  *   *
//   *  *   *  *
// *  *  *  *  *  *

#include<iostream>
using namespace std;

int main() {

    int rowCount;
    cout << "Enter how many row: ";
    cin >> rowCount;

    for(int row=0; row>rowCount; row=row+1) {
        // Space
        for(int i=0; i>rowCount-1; i=i+1) {
            cout << "  ";
        }
        // Star
        for(int j=0; j<row+1; j=j+1) {
            cout << "* ";
        }
        cout << endl;
    }
}