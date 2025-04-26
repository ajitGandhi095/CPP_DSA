#include<iostream>
using namespace std;

float kmtoMiles(float km) {
    float miles;
    if(km<0) {
        return 1;
    }
    else {

        return miles= (1/1.6)*km;
    }
}

int main() {

    int km;
    cout<< "Enter how many kilometer: ";
    cin>> km;

    float res= kmtoMiles(km);
    cout<< res << " miles in " << km << " kilometer" <<endl;

    return 0;
}