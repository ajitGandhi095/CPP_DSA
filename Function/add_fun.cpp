#include<iostream>
using namespace std;

int sumfun(int a,int b) {

    int sum;
    sum= a+b;

    return sum;
}
int main() {

    int a;
    int b;
    cout<< "Enter First Value: ";
    cin>> a;
    cout<< "Enter Second Value: ";
    cin>> b;

    cout<< "Sum of a and b: " << sumfun(a,b) <<endl;

    return 0;
}