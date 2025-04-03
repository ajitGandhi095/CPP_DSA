#include<iostream>
using namespace std;

int main() {

    // Declare variable
    int score;

    // Print Enter score
    cout << "Enter Score: ";

    //Take score as input
    cin >> score;

    //define condition
    if(score < 300) {
        cout << "India Wins" <<endl;
    }
    else {
        cout << "Pak wins" <<endl;
    }
}