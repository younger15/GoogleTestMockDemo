
#include <iostream>
#include "gtest/gtest.h"//using google test
#include "Header.h"//include need test header file
#include "TestClass.h"
#include "./FishBet.h"

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

/*class TmpTest : public ::testing::Test{
public:
	TmpTest() {};
	void SetUp() override{
		TestClass t;
	};
	void TearDown() override {
		TestClass t;
	};
	~TmpTest() {};
	std::vector<TestClass> tmpClass;
};

TEST_F(TmpTest, test1)
{
	EXPECT_EQ(0, tmpClass.size());
}*/

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
	MockMethod01(IfWin, int(int));
};

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("pause");
}

