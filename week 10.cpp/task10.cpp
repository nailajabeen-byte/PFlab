#include <iostream>
using namespace std;

string pyramidVolume(double l, double w, double h, string unit) {
    double volume = (l * w * h) / 3;

    if (unit == "millimeters")
        volume *= 1000000000;
    else if (unit == "centimeters")
        volume *= 1000000;
    else if (unit == "kilometers")
        volume /= 1000000000;

    return to_string(volume) + " cubic " + unit;
}

int main() {
    double length, width, height;
    string unit;

    cout << "Enter length (meters): ";
    cin >> length;

    cout << "Enter width (meters): ";
    cin >> width;

    cout << "Enter height (meters): ";
    cin >> height;

    cout << "Enter unit (millimeters / centimeters / meters / kilometers): ";
    cin >> unit;

    cout << pyramidVolume(length, width, height, unit);

    return 0;
}