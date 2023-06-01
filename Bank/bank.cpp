class Account
{
public:
	explicit Account(int money)
		: balance(money), curInterest(0.05)
	{
	}

	int getBalance()
	{
		return (int)balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int meney)
	{
		balance -= meney;
	}

	void calculate(int year)
	{
		for (int i =0; i<year;i++)
		{
			balance += balance * curInterest;
		}
	}

	void setInterest(int interestPercent)
	{
		curInterest = (float)interestPercent / 100;
	}

	int estimate(int year)
	{
		float temp = balance;
		for (int i = 0; i < year;i++)
		{
			temp += temp * curInterest;
		}
		return (int)temp;
	}

private:
	float balance;
	float curInterest;
};