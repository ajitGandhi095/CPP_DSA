#include<iostream>
#include<cmath>
using namespace std;

int decToBinBitwise(int num) {
    //  Bitwise Method
    int binaryno= 0;
    int i=0;

    while(num > 0) {
        int bit= (num & 1);
        binaryno= bit*pow(10, i++) + binaryno;
        num= num>>1;
    }
    return binaryno;
}

int main() {
    int num;
    cout << "Enter the decimal number to convert binary: ";
    cin >> num;

    int res= decToBinBitwise(num);
    cout << res;
}