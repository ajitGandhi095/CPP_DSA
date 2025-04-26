#include<iostream>
using namespace std;

int printNum(int digit[]) {

    int ans=0;
    for(size_t i=0; i< sizeof(digit); i++) {
        ans= ans*10+digit[i];
    }

    return ans;
}

int main() {

    int digit[]={5,4,3,6};
    int res= printNum(digit);
    cout<< res;

    return 0;
}