//Syed Jawwad Hasnain Zaidi (35750) CSE_141
#include <iostream>
// #include <unistd.h>   // uncomment for sleep(1) on Linux/Mac
using namespace std;

int main() {
    int hours, minutes, seconds;
    int alarmHours, alarmMinutes;

    cout << "Enter current time (hh mm ss): ";
    cin >> hours >> minutes >> seconds;

    cout << "Enter alarm time (hh mm): ";
    cin >> alarmHours >> alarmMinutes;

    int snoozeCount = 0;
    bool finished = false;

    while (!finished) {
        // ---- advance the clock by one second ----
        seconds++;
        if (seconds == 60) {
            seconds = 0;
            minutes++;
            if (minutes == 60) {
                minutes = 0;
                hours++;
                if (hours == 24) {
                    hours = 0;
                }
            }
        }

        // sleep(1); // optional real-time delay, comment out while testing

        // ---- check the alarm ----
        if (hours == alarmHours && minutes == alarmMinutes && seconds == 0) {
            string hh = (alarmHours < 10) ? "0" + to_string(alarmHours) : to_string(alarmHours);
            string mm = (alarmMinutes < 10) ? "0" + to_string(alarmMinutes) : to_string(alarmMinutes);

            cout << "BEEP BEEP BEEP! It's " << hh << ":" << mm << "!" << endl;

            if (snoozeCount >= 3) {
                cout << "No more snoozing - up you get!" << endl;
                finished = true;
                continue;
            }

            cout << "1) Snooze 2) Wake up: ";
            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    snoozeCount++;
                    alarmMinutes += 5;
                    if (alarmMinutes >= 60) {
                        alarmMinutes -= 60;
                        alarmHours++;
                        if (alarmHours == 24) {
                            alarmHours = 0;
                        }
                    }
                    cout << "Snoozing for five more minutes..." << endl;
                    break;

                case 2:
                    cout << "Good morning!  You woke up after "
                         << snoozeCount << " snooze(s)." << endl;
                    finished = true;
                    break;

                default:
                    cout << "Invalid choice, please enter 1 or 2." << endl;
                    break;
            }
        }
    }

    return 0;
}