#include<iostream>
using namespace std;

int evenSum(int n) {

    int sum=0;
    // for(int i=0; i<n; i++) {
    //     if(i%2==0) {
    //         sum=sum+i;
    //     }
    // }

    for(int i=2; i<n; i+=2) {
        sum=sum + i;
    }
    
    return sum;
}

int main() {
    int n;
    cout<< "Enter the value of n to find sum of even number: ";
    cin>> n;

    int ans= evenSum(n);
    cout<< "Sum of all the even Number upto n is: " << ans <<endl;
    return 0;
}