#include<iostream>
using namespace std;

int main() {

    int mark;
    cout << "Enter Your Mark: ";
    cin >> mark;

    //Condition

    // if(mark>=90) {
    //     cout << "A" <<endl;
    // }
    // else {
    //     if(mark>=80) {
    //         cout << "B" <<endl;
    //     }
    //     else {
    //         if(mark>=70) {
    //             cout << "C" <<endl;
    //         }
    //         else {
    //             if(mark>=60) {
    //                 cout << "D" <<endl;
    //             }
    //             else {
    //                 cout << "Fail Try Next Time";
    //             }
    //         }
    //     }
    // }


    if(mark >=90) {
        cout << "A-Grade" <<endl;
    }
    else if(mark >= 80) {
        cout << "B-Grade" <<endl;
    }
    else if(mark >= 70) {
        cout << "C-Grade" <<endl;
    }
    else if(mark >= 60) {
        cout << "D-Grade" <<endl;
    }
    else {
        cout << "Fail-- Try Next Time";
    }
}