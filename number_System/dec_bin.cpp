#include<iostream>
#include<cmath>
using namespace std;

int DecToBinMethod1(int num) {
    int binaryno=0;
    int i=0;
    while(num>0) {
        int bit= num % 2;
        binaryno= bit * pow(10,i++) + binaryno;
        num=num/2;

    }
    return binaryno;
}

int main() {

    int num;
    cout<< "Enter a Number: ";
    cin>> num;

    int res= DecToBinMethod1(num);
    cout<< num << " Binary is: " << res <<endl;
    return 0;
}