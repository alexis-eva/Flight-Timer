/*
 * flight.cpp
 *
 *  Created on: May 12, 2017
 *      Author: computeruser
 */
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
	int startTime = time(NULL);
	int finishTime = 1494657002;
	int currentTime;
	int currentMin, currentSec;
	int length = finishTime - startTime; // length of journey in seconds
	int sec = length % 60; // seconds of journey
	int min = (length - sec) / 60; // minutes of journey
	int secTemp = length; // will increment down for time displays
	int i = 0, j = 0;
//	int breakflag = 0;
	currentTime = time(NULL) - (finishTime - 30000);
	currentSec = currentTime % 60;
	currentMin = (currentTime - currentSec) / 60;
	cout << "The time into the journey is now " << currentMin << ":" << setw(2) << setfill('0') << right << currentSec << "." << endl;
	for (i = 0; i < min; i++) {
		currentTime = time(NULL) - (finishTime - 30000);
		currentSec = currentTime % 60;
		currentMin = (currentTime - currentSec) / 60;
		for (j = 0; j < 60; j++) {
			if (currentSec == 60) {
				currentSec = 0;
				currentMin++;
				cout << "The time into the journey is now " << currentMin << ":" << setw(2) << setfill('0') << right << currentSec << "." << endl;
			}
			cout << "Only " << secTemp << " seconds remain!" << endl;
			secTemp--;
			currentSec++;
			sleep(1);
//			if (cin. ) {
//				breakflag = 1;
//				break;
//			}
		}
//		if (breakflag == 1)
//			break;
	}
	return 0;
}
