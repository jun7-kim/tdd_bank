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


