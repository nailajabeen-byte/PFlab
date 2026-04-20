#include <iostream>
using namespace std;

void timeTravel()
{
    int hour, minute;

    cout << "Enter hour: ";
    cin >> hour;

    cout << "Enter minutes: ";
    cin >> minute;

    // Add 15 minutes
    minute = minute + 15;

    if(minute >= 60)
    {
        minute = minute - 60;
        hour = hour + 1;
    }

    if(hour >= 24)
    {
        hour = 0;
    }

    cout << "Future time: " << hour << ":" << minute;
}

int main()
{
    timeTravel();
    return 0;
}