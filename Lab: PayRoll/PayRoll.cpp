#include <iostream>
#include "PayRoll.h"

using namespace std;

Payroll::Payroll()
{
	hours = 0;
	rate = 0;
}
void Payroll::setHour(double hr)
{
	hours = hr;
}
void Payroll::setRate(double rat)
{
	rate = rat;
}
int Payroll::getHour()
{
	return hours;
}
double Payroll::getRate()
{
	return rate;
}
double Payroll::totalPay()
{
	return hours * rate;
}
