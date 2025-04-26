#include<iostream>
using namespace std;

int setBit(int n) {

    int ans= 0;

    while(n!=0) {
        // find one setbit
        if(n&1) {
            //increment setbit count
            ans++;
        }
        //right shift
        n= n>>1;
    }

    return ans;
}

int main() {

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    int res= setBit(n);
    cout<< "Setbit of " << n << " is: " << res <<endl;
    return 0;
}