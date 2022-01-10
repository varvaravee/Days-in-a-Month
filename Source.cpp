#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month = 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


	cout << "This program returns the number of days in any month." << endl;
	cout << "Please indicate the number of the month for which you wish to see the day total.\n";
		cin >> month;
	if(month>0 && month<=12)
	{
		
		cout << "The " << month << " month of the year has " << days[month - 1] << " days." << endl;
		cout << "Please indicate the number of the month for which you wish to see the day total.\n";
			cin >> month;
	}

	while(!(month>0 && month<=12))
	{
		cout << "The character you entered is not valid. Please enter a number within the range 1-12.";
			cin >> month;

	}
	return 0;
}