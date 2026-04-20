#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience) {

    float bonusRate;

    // Performance bonus
    if (score >= 90) {
        bonusRate = 0.20;
    }
    else if (score >= 75) {
        bonusRate = 0.10;
    }
    else {
        bonusRate = 0.05;
    }

    // Extra experience bonus
    if (experience >= 5) {
        bonusRate += 0.05;
    }

    // Calculate bonus and final salary
    float bonus = base * bonusRate;
    return base + bonus;
}

int main() {
    float base;
    int score, experience;

    cout << "Enter base salary: ";
    cin >> base;

    cout << "Enter score: ";
    cin >> score;

    cout << "Enter experience: ";
    cin >> experience;

    float finalSalary = calculateSalary(base, score, experience);

    cout << "Final Salary = " << finalSalary << endl;

    return 0;
}