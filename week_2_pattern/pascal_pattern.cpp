// Pascal triangle pattern

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 6 4 6 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int row=1; row<=n; row++) {
        int c=1;
        for(int col=1; col<=row; col++) {
            cout<< c << " ";
            c= c * (row-col) / col;
        }
        cout<< endl;
    }
    return 0;
}