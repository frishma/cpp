#include "Bank.h"
#include<cmath>
using namespace std;

	Bank::Bank()
	{
		annualInterestRate=9.5;
		numberOfYears=30;
		loanAmount=100000;
	}
	Bank::Bank(double rate,int years,double amount)
	{
		annualInterestRate=rate;
		numberOfYears=years;
		loanAmount=amount;
	}
	double Bank::getAnnualInterestRate()
	{
		return annualInterestRate;
	}
	int Bank::getNumberOfYears()
	{
		return numberOfYears;
	}
	double Bank::getLoanAmount()
	{
		return loanAmount;
	}
	double Bank::getMonthlyPayment()
	{
		double monthlyInterstRate=annualInterestRate/1200;
		return loanAmount * monthlyInterstRate / ( 1 -
(pow(1 / ( 1 + monthlyInterstRate) , numberOfYears * 12))); 

	}
	double Bank::getTotalPayment()
	{
		return getMonthlyPayment()*numberOfYears*12;
	}

