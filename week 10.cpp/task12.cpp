#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers) {

    // Training days (10% of total days)
    int trainingDays = days * 0.10;

    // Effective working days
    int workingDays = days - trainingDays;

    // Total available working hours
    int totalHours = workingDays * workers * 10; 
    // (8 normal + 2 overtime = 10 hours)

    // Final comparison
    if (totalHours >= neededHours) {
        int leftHours = totalHours - neededHours;
        return "Yes!" + to_string(leftHours) + " hours left.";
    } 
    else {
        int neededMore = neededHours - totalHours;
        return "Not enough time!" + to_string(neededMore) + " hours needed.";
    }
}

int main() {
    int neededHours, days, workers;

    cout << "Enter needed hours: ";
    cin >> neededHours;

    cout << "Enter days: ";
    cin >> days;

    cout << "Enter number of workers: ";
    cin >> workers;

    cout << projectTimeCalculation(neededHours, days, workers);

    return 0;
}