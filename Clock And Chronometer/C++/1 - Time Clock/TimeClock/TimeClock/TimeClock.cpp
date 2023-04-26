
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
	int sec, min, hour, count = 1;
	do {
		cout << "Enter the hour : ";
		cin >> hour;
		cout << "Enter the minutes : ";
		cin >> min;
		cout << "Enter the seconds : ";
		cin >> sec;
		if ((sec >= 0 && sec < 60) && (min >= 0 && min < 60) && (hour >= 0 && hour < 24)) {
			while (1) {
				system("cls");
				if (sec == 60) {
					min++;
					sec = 0;
				}
				if (min == 60) {
					hour++;
					sec = 0;
					min = 0;
				}
				if (hour == 24) {
					count = 0;
					break;
				}

				if (sec < 10 && min < 10 && hour < 10) {
					cout << "0" << hour << ":" << "0" << min << ":" << "0" << sec << endl;
				}
				else if (sec >= 10 && min < 10 && hour < 10) {
					cout << "0" << hour << ":" << "0" << min << ":" << sec << endl;
				}
				else if (sec < 10 && min >= 10 && hour < 10) {
					cout << "0" << hour << ":" << min << ":" << "0" << sec << endl;
				}
				else if (sec >= 10 && min >= 10 && hour < 10) {
					cout << "0" << hour << ":" << min << ":" << sec << endl;
				}
				else if (sec < 10 && min >= 10 && hour >= 10 && hour < 24) {
					cout << hour << ":" << min << ":" << "0" << sec << endl;
				}
				else if (sec < 10 && min <= 10 && hour >= 10 && hour < 24) {
					cout << hour << ":" << "0" << min << ":" << "0" << sec << endl;
				}
				else if (sec >= 10 && min <= 10 && hour >= 10 && hour < 24) {
					cout  << hour << ":" << "0" << min << ":" << sec << endl;
				}
				else {
					cout << hour << ":" << min << ":" << sec << endl;
				}

				this_thread::sleep_for(chrono::milliseconds(1000));
				sec++;
			}
		}
		else {
			cout << "Please enter again!" << endl;
			count = 1;
		}
	} while (count != 0);
	cout << "Finished!";
	return 0;
}

