class Account
{
public:
	explicit Account(int money)
		: balance(money)
	{
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int meney)
	{
		balance -= meney;
	}

private:
	int balance;
};