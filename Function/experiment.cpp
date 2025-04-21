#include<iostream>
using namespace std;

// int add(int a,int b) {
//     int result= a + b;
//     return result;
// }

// Function declaration
int add(int a, int b);

int main() {

    int a;
    int b;
    cout<< "Enter the value of a: ";
    cin>> a;

    cout<< "Enter the value of b: ";
    cin>> b;

    int sum=add(a,b);
    cout<< "Addition of a & b is : " << sum <<endl;

    return 0;
}


int add(int a, int b){
    return (a+b);
}