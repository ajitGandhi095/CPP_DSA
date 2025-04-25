#include<iostream>
using namespace std;

string EvenOdd(int val) {

    if(val%2==0) {
        return "Even Number";
    }
    else {
        return "Odd Number";
    }
}

int main() {

    int val;
    cout<< "Enter your value: ";
    cin>> val;

    string result = EvenOdd(val);
    cout<< val << " Is a " << result << endl;
    return 0;
}