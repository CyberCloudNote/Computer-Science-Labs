class Payroll
{
	private:
		double hours;
		double rate;
	public:
		Payroll();
		void setHour(double hr);
		void setRate(double rat);
		int getHour();
		double getRate();
		double totalPay();
};
