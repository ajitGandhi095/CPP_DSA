#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n:";
    cin>> n;
    int c=1;

    // Growing Phase
    for(int row=0; row<n; row++) {
        for(int col=0; col<=row; col++) {
            cout<< c << " ";
            c++;
            if(col<row) {
                cout<< "* ";
            }
        }
        cout<< endl;
    }
    // Shrinking Phase
    int start_index= c-n;
    for(int row=0; row<n; row++) {
        int k=start_index; //Print the shrink value

        for(int col=0; col<= n-row-1; col++) {
            cout<< k << " ";
            k++;
            if(col<n-row-1) {
                cout<< "* ";
            }
        }
        start_index= start_index - (n-row-1);
        cout<< endl;
    }
    return 0;
}