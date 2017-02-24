/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, blankBoard)
{
	bool checker = true;
	TicTacToeBoard b;
	b.clearBoard();
	for(int i = 0; i < 3 ; i++ )
	{
		for (int j = 0; j < 3;j++)
		{
			if (b.getPiece(i,j) != Blank)
			{
				checker = false;	
			}
		}
	}
	ASSERT_TRUE(checker);
}
