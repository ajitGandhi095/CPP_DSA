#include<iostream>
using namespace std;

int main() {

    // int age;
    // cout<< "Enter your age: ";
    // cin>> age;

    // string ans= (age>=18)? "u can Vote":"U cannot Vote";
    // cout<< ans;

    int num;
    cout<< "Enter your number: ";
    cin>> num;

    string res= (num%2==0)? "Number is Even" : "Number is Odd";

    cout<< res;

    return 0;
}