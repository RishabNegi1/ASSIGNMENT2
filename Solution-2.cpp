#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif
*/
	int openBalance;
	cout << "enter the amount you want to start ramesh account with? \n";
	cin >> openBalance;
	account ramesh(openBalance);
	int paisa;
	cout << "enter the amount you want to add in ramesh's account? \n";
	cin >> paisa;
	ramesh.Credit(paisa);
	cout << ramesh.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to removein ramesh's account? \n";
	cin >> paisa1;
	binod.Debit(paisa1);
	cout << ramesh.getBalance() << "\n";
	cout << "enter the amount you want to start suresh account with? \n";
	cin >> openBalance;
	account glsuresh(openBalance);
	cout << "enter the amount you want to add in suresh's account? \n";
	cin >> paisa;
	suresh.Debit(paisa);
	cout << gaurav.getBalance() << "\n";
	cout << "enter the amount you want to removein suresh's account? \n";
	cin >> paisa1;
	Suresh.Debit(paisa1);
	cout << siresh.getBalance() << "\n";

 return 0;
}
