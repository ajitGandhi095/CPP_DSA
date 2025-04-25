#include<iostream>
using namespace std;

float areaCircle(int r) {

    return (3.14*r*r);
}

int main() {

    int r;
    cout<< "Enter the radius of a circle: ";
    cin>> r;
    float area= areaCircle(r);
    cout<< "Area of circle is: " << area <<endl;

    return 0;
}