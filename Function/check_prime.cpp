#include<iostream>
using namespace std;

string Primenumber(int val) {

    if(val == 1) {
        return "After 1 u check";
    }
    else {
        for(int i=val; i>=2; i--) {
            if(i%i == 0 || val%1 == 0) {
                return "Prime Number";
            }
            else {
                return "Not ";
            }
        }
    }
}

int main() {

    int val;
    cout<< "Enter your value: ";
    cin>> val;

    string result= Primenumber(val);
    cout<< val << " Is a " << result <<endl;

    return 0;
}