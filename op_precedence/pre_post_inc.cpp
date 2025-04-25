#include<iostream>
using namespace std;

int main() {
           // pre & post increment
    // int a=5;

    // cout<< a <<endl;;
    // cout<< ++a <<endl;
    // cout<< a++ <<endl;
    // cout<< a;

    // cout<< (++a) + 1 <<endl;
    // cout<< (a++) + 1 <<endl;

        // pre & post decrement

    // int a=4;
    // int b=5;

    // cout<< (a++) * (--b) << endl;
    // cout<< (--b) * (--a) <<endl;

    // int a=5;
    // cout<< (++a) * (++a) <<endl;

    int a=5;
    int b=10;

    int ans1= (++a) * (--b);
    int ans2= (++a) * (b--);
    int ans3= (a++) * (--b);
    int ans4= (a++) * (b--);

    cout<< ans1 <<endl;
    cout<< ans2 <<endl;
    cout<< ans3 <<endl;
    cout<< ans4 <<endl;
}