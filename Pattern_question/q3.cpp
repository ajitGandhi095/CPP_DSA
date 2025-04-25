// Check a triangle is valid or not

#include<iostream>
using namespace std;

int main() {

    int a,b,c;
    cout<< "Enter first value: ";
    cin>> a;
    cout<< "Enter second value: ";
    cin >>b;
    cout<< "Enter third value: ";
    cin>> c;

    if((a+b)>c & (b+c)>a & (a+c)>b) {
        cout<< "This is a valid triangle";
    }
    else {
        cout<< "This is not a valid triangle";
    }
}