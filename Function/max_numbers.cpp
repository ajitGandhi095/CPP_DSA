#include<iostream>
using namespace std;

int maxnum(int a, int b, int c) {
    int max;
    if(a>b && a>c) {
        max= a;
    }
    else if(b>c) {
        max= b;
    }
    else {
        max= c;
    }
    
    return max;
}

int main() {

    int a,b,c;
    cout<< "Enter the value of a: ";
    cin>> a;

    cout<< "Enter the value of b: ";
    cin>> b;

    cout<<"Enter the value of c: ";
    cin>> c;

    int max= maxnum(a,b,c);
    cout<< "Maximum number among three numbers is: " << max <<endl;
    return 0;
}