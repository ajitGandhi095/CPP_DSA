// Number Pyramid
// 1
// 1 2
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main() {

    int rowCount;
    cout<< "Enter No of Rows: ";
    cin>> rowCount;

    for(int row=0; row<rowCount; row=row+1) {
        for(int col=0; col<row+1; col=col+1) {
            cout << col+1 <<" ";
        }
        cout<< endl;
    }
}
