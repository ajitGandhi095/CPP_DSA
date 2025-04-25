#include<iostream>
using namespace std;

void reverseNum(int num) {

    int rem;
    // while(num>0){
    //     rem= num%10;
    //     cout<< rem << " ";
    //     num= num/10;
    // }

    for(; num!=0; num=num/10) {
        rem= num%10;
        cout<< rem << " ";
    }

}

int main() {

    int num;
    cout<< "Enter your number: ";
    cin>> num;

    reverseNum(num);

    return 0;
}