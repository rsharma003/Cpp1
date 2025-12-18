#include<iostream>
using namespace std;
int main()
{
	int seconds;
	int minutes;
	int hours;
	int left1;
	int left2;

	cout << "Hello programmers, Let's change seconds into hours, minutes and seconds. " << endl;
	cout << "Enter seconds: ";
	cin >> seconds;;
	

	// converting seconds into hours minutes and seconds.
	hours = seconds / 3600; // changing seconds into hours first. 

	left1 = seconds % 3600; //left1 indicates leftover  after obtained hours.

	minutes = left1 / 60; // changing into minutes

	left2 = left1 % 60; // left2 indicates the leftover after obtained minutes.

	seconds = left2 / 1; // changing into seconds

	cout << "Total time : " << hours << " hours " << minutes <<" minutes " << seconds << " seconds" << endl;
	cout << "Good Bye" << endl;

	return 0;

}