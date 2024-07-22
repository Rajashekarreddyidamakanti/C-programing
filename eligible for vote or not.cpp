#include <iostream>
using namespace std;  
const int VOTING_AGE = 18;
int getPerson() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}
void checkVotingEligibility(int age) {
    if (age >= VOTING_AGE) {
        cout << "You are eligible to vote." << endl;
    } else {
        int yearsLeft = VOTING_AGE - age;
        cout << "You are allowed to vote after " << yearsLeft << " years." << endl;
    }
}
int main() {
    int age = getPerson();
    checkVotingEligibility(age);
    return 0;
}

