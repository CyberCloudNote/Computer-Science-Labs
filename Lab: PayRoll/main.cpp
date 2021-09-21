#include <iostream>
#include "PayRoll.h"

using namespace std;

int main()
{
  cout << "Creat 7 payroll objects" << endl;
	Payroll employee[7];

	for (int x = 0; x < 7; x++)
	{
		double hour;
		double rate;
    cout << "Enter the #" << x + 1 << " rate of pay per hour: ";
    cin >> hour;

    cout << "Enter the #" << x + 1 << " hours worked for the week: ";
    cin >> rate;
		
		employee[x].setHour(hour);
		employee[x].setRate(rate);
	}

  cout << endl;

	for (int x = 0; x < 7; x++)
	{
    cout << "Emplyee #" << x + 1 << " worked " << employee[x].getHour() << " hours at $" << employee[x].getRate();
		cout << " for gross pay of $" << employee[x].totalPay() << endl;
	}

	return 0;
}
