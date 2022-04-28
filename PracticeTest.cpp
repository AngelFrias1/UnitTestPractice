/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

//Function 1
TEST(PracticeTest, zzz_repeats)
{
Practice testObject;
ASSERT_EQ(testObject.count_starting_repeats("zzz"),3);
}

//Function 2
TEST(PracticeTest, ascending)
{
Practice testObject;
int a= 1;
int b= 2;
int c= 3;
testObject.sortDescending(a,b,c);
ASSERT_EQ(a,3);
ASSERT_EQ(b,2);
ASSERT_EQ(c,1);
}

TEST(PracticeTest, ascending2)
{
Practice testObject;
int a = 3;
int b = 1;
int c = 2;

testObject.sortDescending(a,b,c);
ASSERT_EQ(a,3);
ASSERT_EQ(b,2);
ASSERT_EQ(c,1);
}
TEST(PracticeTest, ascending3)
{
Practice testObject;
int a = 4;
int b = 4;
int c = 4;
testObject.sortDescending(a,b,c);
ASSERT_EQ(a,4);
ASSERT_EQ(b,4);
ASSERT_EQ(c,4);
}

//Function 3
TEST(PracticeTest,palindrome1)
{
Practice testObject;
ASSERT_EQ(testObject.isPalindrome("level"),true);
}

TEST(PracticeTest,palindrome2)
{
Practice testObject;
ASSERT_EQ(testObject.isPalindrome("foo"),false);
}
TEST(PracticeTest,palindrome3)
{
Practice testObject;
ASSERT_EQ(testObject.isPalindrome("   "),true);
}
