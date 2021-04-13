
#include <iostream>
//#include "gtest/gtest.h"//using google test
#include "Header.h"//include need test header file
#include "TestClass.h"
#include "./FishBet.h"
#include "gmock/gmock.h"//using google mock

/*TEST(StringToInt, PositiveTest)
{
	EXPECT_EQ(1, StringToInt("1"));//EXPECT_EQ will keep executing even when error occured.
	EXPECT_EQ(31, StringToInt("31"));
}

TEST(StringToInt, FloatTest)
{
	EXPECT_EQ(31.2, StringToInt("31.2"));//ASSERT_EQ will stop executing when error occured.
	//ASSERT_EXIT(StringToInt(-22.0), ::testing::ExitedWithCode(-1), "Error: Negative Input");
}

TEST(StringToInt, OutOfTypeRangeTest)
{
	EXPECT_EQ(10000000000000, StringToInt("10000000000000"));
	ASSERT_EQ(-10000000000000, StringToInt("-10000000000000"));
}*/

class TmpTest : public ::testing::Test{
public:
	TmpTest() {};
	void SetUp() override{

		tmpClass.a.push_back(new int(1));
	};
	void TearDown() override {

	};
	~TmpTest() {};
	TestClass tmpClass;
};

TEST_F(TmpTest, test1)
{
	EXPECT_EQ(1, tmpClass.a.size());
	tmpClass.RemoveElement(0);
	EXPECT_EQ(0, tmpClass.a.size());

}


/*TEST(Exception, test1)
{
	// this tests _that_ the expected exception is thrown
	EXPECT_THROW(
	{
		try
		{
			ThrowException();
		}
		catch (std::exception &e)
		{
			std::cout << "error" << std::endl;
			throw "index out of range";
		}
	}, const char*);
}*/

class MockBetWinProbability : public BetWinProbability {
public:
	//MOCK_METHOD1(IfWin, bool(int b));
	MOCK_METHOD(bool, IfWin, (int b), (override));
};

/*TEST(TESTMOCK, BetFish) {
	MockBetWinProbability m;
	//EXPECT_CALL(m, IfWin(2)).Times(::testing::AtLeast(1)).WillOnce(::testing::Return(true));
	EXPECT_CALL(m, IfWin(2)).Times(::testing::AtLeast(1)).WillRepeatedly(::testing::Return(true));
	//ON_CALL(m, IfWin(2)).WillByDefault(::testing::Return(true));
	FishBet bets(&m);
	//EXPECT_TRUE(bets.BetFish(2));
	//EXPECT_TRUE(bets.BetFish(2));
}*/

MATCHER(IsTen, "value must be 10") {

	if (arg == 10) {
		return true;
	}
	else {
		return false;
	}
}

MATCHER_P(IsNotSpecificValue, n, "") {

	if (arg != n) {
		return true;
	}
	else {
		return false;
	}
}



/*TEST(TESTMOCK, Matcher) {
	MockBetWinProbability m;
	EXPECT_CALL(m, IfWin).WillOnce(::testing::Return(true));
	FishBet bets(&m);
	EXPECT_TRUE(bets.BetFish(1));
}*/

int main(int argc, char** argv)
{
	//testing::InitGoogleTest(&argc, argv);
	testing::InitGoogleMock(&argc, argv);
	RUN_ALL_TESTS();
}

