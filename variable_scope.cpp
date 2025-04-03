#include<iostream>
using namespace std;

int abc= 30;

int main() {

    // Declaration
    int a;

    // Initialization
    int b=10;  // local variable

    // Updation
    b=20;

    if(true) {

        // int b=7;
        cout<< b <<endl;
        cout<< abc <<endl;
        int abc= 40;
        cout<< abc <<endl;
    }

    cout<< b <<endl;
    cout<< abc <<endl;
    // cout<< d <<endl;
}

// int d=30;