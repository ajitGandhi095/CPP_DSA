#include<iostream>
using namespace std;

string stud_grade() {
    int marks;
    cout<< "Enter the student marks: ";
    cin>> marks;

    // if(marks>=90) {
    //     return "A";
    // }
    // else if(marks>=80) {
    //     return "B";
    // }
    // else if(marks>=70) {
    //     return "C";
    // }
    // else if(marks>=60) {
    //     return "D";
    // }
    // else {
    //     return "Fail";
    // }

    // if (marks>=90)
    //     return "A";
    // else if(marks>=80)
    //     return "B";
    // else if(marks>=70)
    //     return "C";
    // else if(marks>=60)
    //     return "D";
    // else
    //     return "Fail";

    switch(marks/10) {
        case 9:
            return "A";
            break;
        case 8:
            return "B";
            break;
        case 7:
            return "C";
            break;
        case 6:
            return "D";
            break;
        default:
            return "Fail";

    }

}

int main() {

    string grade= stud_grade();
    cout<< "Grade Of Student is: " << grade <<endl;

    return 0;
}