#include<iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int num) {
    int decimalno=0; 
    int i=0;

    while(num) {
        int bit= num % 10;
        decimalno= decimalno+bit*pow(2, i++);
        num /= 10;
    }
    return decimalno;
}

int main() {
    int num;
    cout<< "Enter Binary No To Convert Decimal: ";
    cin>> num;
    
    int res= BinaryToDecimal(num);
    cout<< res;
}