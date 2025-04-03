//  Square Pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "How many star u want to print";
    cin >> n;
    for(int row=0; row<n; row+=1) {
        for(int col=0; col<n; col+=1) {
            cout << "* ";
        }
        cout << endl;
    }
}