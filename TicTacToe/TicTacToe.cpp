#include <iostream>
#include <string>

using namespace std;

void printBoard(int board[]);
string printChar(int position);
int checkWin(int first, int second, int third);
void checkBoard(int board[]);

enum TicTacToeSquare{
	TTTS_blank,
	TTTS_X,
	TTTS_O
};


int main(){

	string welcome = "Welcome to Tic Tac Toe";
	string descrip = "Player One: X and Player Two: O";
	string playerOneRow = "Player 1: Please put in a row: ";
	string playerOneCol = "Player 1: Please put in a col: ";

	string playerTwoRow = "Player 2: Please put in a row: ";
	string playerTwoCol = "Player 2: Please put in a col: ";
	
	int playerOneRowNum;
	int playerOneColNum;

	int playerTwoRowNum;
	int playerTwoColNum;

	int check = TTTS_blank;

	int board[9] = {
		TTTS_blank, TTTS_blank, TTTS_blank,
		TTTS_blank, TTTS_blank, TTTS_blank,
		TTTS_blank, TTTS_blank, TTTS_blank };



	cout << welcome << "\n";
	cout << descrip << "\n" << "\n";

	while (check == 0){

		printBoard(board);

		cout << playerOneRow;
		cin >> playerOneRowNum;
		cout << "\n" << playerOneCol;
		cin >> playerOneColNum;
		cout << "\n" << playerTwoRow;









	}









	system("pause");
}

void printBoard(int board[]){
	cout << "| " << printChar(board[0]) << " | " << printChar(board[1]) << " | " << printChar(board[2]) << " |" << "\n";
	cout << "| " << printChar(board[3]) << " | " << printChar(board[4]) << " | " << printChar(board[5]) << " |" << "\n";
	cout << "| " << printChar(board[6]) << " | " << printChar(board[7]) << " | " << printChar(board[8]) << " |" << "\n";
}

string printChar(int position){

	switch (position){
	case TTTS_blank:
		return " ";
		break;
	case TTTS_O:
		return "O";
		break;
	case TTTS_X:
		return "X";
		break;
	default:
		return "ERROR";
		break;
	}

}


int checkWin(int first, int second, int third){

	if (first == TTTS_O && second == TTTS_O && third == TTTS_O){
		return TTTS_O;
	}
	else if (first == TTTS_X && second == TTTS_X && third == TTTS_X){
		return TTTS_X;
	}
	
	
	return TTTS_blank;

}