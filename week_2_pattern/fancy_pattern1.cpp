#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int row=0; row<n; row++) {
        int start_num_index= n-row;
        int num= row+1;
        int count_num= num;
        for(int col=0; col<2*n+1; col++) {
            // Print the number
            if( col== start_num_index && count_num > 0) {
                cout<< num;
                start_num_index += 2;
                count_num--;
            }
            else {
                cout<< "*";
            }
        }
        cout<< endl;
    }

    return 0;
}