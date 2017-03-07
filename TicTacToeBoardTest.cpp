/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
using namespace std;
 
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


TEST(TicTacToeBoardTest, getWinner)
{
	bool checker = true;
	TicTacToeBoard b;
	b.clearBoard();
	//cout << b.getWinner() << endl;
	ASSERT_TRUE(b.getWinner() == Invalid);

}


TEST(TicTacToeBoardTest, placePieceatInvalidPlace)
{
	TicTacToeBoard b;	
	//b.placePiece(4,5);
	ASSERT_TRUE(b.placePiece(4,5) == Invalid);

}

TEST(TicTacToeBoardTest, placePieceAtZeroZero)
{
	TicTacToeBoard b;	
	//b.placePiece(4,5);
	ASSERT_TRUE(b.placePiece(0,0) == X);
	

}


TEST(TicTacToeBoardTest, placeSecondPieceAtZeroZero)
{
	TicTacToeBoard b;	
	b.placePiece(0,0);
	ASSERT_TRUE(b.placePiece(0,0) == X);


}


TEST(TicTacToeBoardTest, getPieceHighRowHighCol)
{
	TicTacToeBoard b;	
	b.clearBoard();
	ASSERT_TRUE(b.getPiece(4,4) == Invalid);

}


TEST(TicTacToeBoardTest, getPieceLowRowLowCol)
{
	TicTacToeBoard b;	
	b.clearBoard();
	ASSERT_TRUE(b.getPiece(-1,-1) == Invalid);

}


TEST(TicTacToeBoardTest, PlacePieceHighRowHighCol)
{
	TicTacToeBoard b;	
	//b.placepiece(4,4);
	ASSERT_TRUE(b.placePiece(4,4) == Invalid);

}



TEST(TicTacToeBoardTest, PlacePieceLowRowLowCol)
{
	TicTacToeBoard b;	
	//b.clearBoard();
	ASSERT_TRUE(b.placePiece(-1,-1) == Invalid);

}

TEST(TicTacToeBoardTest, getWinnerOneDiagonal)
{
	TicTacToeBoard b;
	b.placePiece(0,0);
	b.placePiece(0,1);
	b.placePiece(1,1);
	b.placePiece(1,2);
	b.placePiece(2,2);
	ASSERT_TRUE(b.getWinner() == X);
}



TEST(TicTacToeBoardTest, getWinnerReverseDiagonal)
{
	TicTacToeBoard b;
	b.placePiece(0,2);
	b.placePiece(0,1);
	b.placePiece(1,1);
	b.placePiece(1,2);
	b.placePiece(2,0);
	ASSERT_TRUE(b.getWinner() == X);
}

TEST(TicTacToeBoardTest, getWinnerOneCol)
{
	TicTacToeBoard b;
	b.placePiece(0,0);
	b.placePiece(0,1);
	b.placePiece(1,0);
	b.placePiece(1,2);
	b.placePiece(2,0);
	ASSERT_TRUE(b.getWinner() == X);
}

TEST(TicTacToeBoardTest, getWinnerOneRow)
{
	TicTacToeBoard b;
	b.placePiece(0,0);
	b.placePiece(1,0);
	b.placePiece(0,1);
	b.placePiece(1,2);
	b.placePiece(0,2);
	ASSERT_TRUE(b.getWinner() == X);
}


TEST(TicTacToeBoardTest, getWinnerFilledIncompleteBoard)
{
	TicTacToeBoard b;
	b.placePiece(0,0);//x
	b.placePiece(0,1);//y
	b.placePiece(0,2);//x
	b.placePiece(1,0);//y
	b.placePiece(2,0);//x
	b.placePiece(1,1);//y
	b.placePiece(2,1);//x
	b.placePiece(2,2);//y
	b.placePiece(1,2);//x
	ASSERT_TRUE(b.getWinner() == Blank);
}











