#include <iostream>
#include <string>

using namespace std;

void printBoard(int board[]);
string printChar(int position);
int isWin(int first, int second, int third);
bool checkBoardWin(int board[]);

enum TicTacToeSquare{
	TTTS_blank,
	TTTS_X,
	TTTS_O
};


int main(){

	string welcome = "Welcome to Tic Tac Toe";
	string descrip = "Player One: X and Player Two: O \n Enter 1 - 9 starting from top left.";
	string playerOneNumString = "Player 1: Please put in a number: ";
	string playerTwoNumString = "Player 2: Please put in a number: ";
	string winner = "";
	
	int playerOneNum;
	int playerTwoNum;

	int board[9] = {
		TTTS_blank, TTTS_blank, TTTS_blank,
		TTTS_blank, TTTS_blank, TTTS_blank,
		TTTS_blank, TTTS_blank, TTTS_blank };



	cout << welcome << "\n";
	cout << descrip << "\n" << "\n";

	printBoard(board);

	while (true){

		cout << playerOneNumString;
		cin >> playerOneNum;
		board[playerOneNum - 1] = TTTS_X;
		cout << "\n";
		printBoard(board);

		if (checkBoardWin(board) == true){
			winner = "Player One Wins!";
			break;
		}


		cout << playerTwoNumString;
		cin >> playerTwoNum;
		board[playerTwoNum - 1] = TTTS_O;
		cout << "\n";
		printBoard(board);

		if (checkBoardWin(board) == true){
			winner = "Player Two Wins!";
			break;
		}

	}

	cout << "\n" << winner << "\n \n";

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


int isWin(int first, int second, int third){

	if (first == TTTS_O && second == TTTS_O && third == TTTS_O){
		return TTTS_O;
	}
	else if (first == TTTS_X && second == TTTS_X && third == TTTS_X){
		return TTTS_X;
	}
	return TTTS_blank;
}

bool checkBoardWin(int board[]){
	
	if (isWin(board[0], board[1], board[2]) != TTTS_blank){
		return true;
	}
	else if (isWin(board[3], board[4], board[5]) != TTTS_blank){
		return true;
	}
	else if (isWin(board[6], board[7], board[8]) != TTTS_blank){
		return true;
	}
	else if (isWin(board[0], board[4], board[8]) != TTTS_blank){
		return true;
	}
	else if (isWin(board[2], board[4], board[6]) != TTTS_blank){
		return true;
	}
	else if (isWin(board[0], board[3], board[6]) != TTTS_blank){
		return true;
	}
	else if (isWin(board[1], board[4], board[7]) != TTTS_blank){
		return true;
	}
	else if (isWin(board[2], board[5], board[8]) != TTTS_blank){
		return true;
	}
	
	return false;
}