#ifndef BANK_H
#define BANK_H

class Bank
{
	public:
		Bank();
		Bank(double rate,int years,double amount);
		double getAnnualInterestRate();
		int getNumberOfYears();
		double getLoanAmount();
		void setAnnualInterestRate(double rate);
		void setNumberOfYears(int years);
		void setLoanAmount(double amount);
		double getMonthlyPayment();
		double getTotalPayment();
	protected:
		double annualInterestRate;
		int numberOfYears;
		double loanAmount;
};

#endif
