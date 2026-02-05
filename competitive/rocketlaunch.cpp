//Simulate a rocket launch countdown timer fix the time in minutes then print seconds from maximum seconds to 0 then print in the last line fire it and launch the rocket.
#include <iostream>
using namespace std;
int main() {
    int minutes;
    cout << "Enter Time to launch: ";
    cin >> minutes;
    int seconds = minutes * 60;
    while (seconds != -1) {
        cout << seconds << " ";
        seconds--;
    } cout << "Rocket Launched!";
}