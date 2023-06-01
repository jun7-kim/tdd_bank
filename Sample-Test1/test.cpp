#include "pch.h"
#include "../Bank/bank.cpp"

class AccoutFixture : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccoutFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccoutFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccoutFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccoutFixture, DefaultInterest) {
	account.calculate(5);
	EXPECT_EQ(12762, account.getBalance());
}

TEST_F(AccoutFixture, SetInterest) {
	account.setInterest(3);
	account.calculate(5);
	EXPECT_EQ(11592, account.getBalance());
}

TEST_F(AccoutFixture, Estimate) {
	account.setInterest(3);
	EXPECT_EQ(11592, account.estimate(5));
}



