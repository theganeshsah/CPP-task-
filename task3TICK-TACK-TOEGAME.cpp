#include <iostream>
#include <vector>
using namespace std;
// Function to display the Tic-Tac-Toe board
void displayBoard(const vector<vector<char>>& board) {
    cout << "-------------" << endl;
    for (const auto& row : board) {
        cout << "| ";
        for (char cell : row) {
            cout << cell << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

// Function for check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // for  Checking rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // for Checking diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function for check if the board is full (a tie)
bool checkTie(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ')
                return false; // Board is not full
        }
    }
    return true; // Board is full (tie)
}

// Function to make a player's move
void makeMove(vector<vector<char>>& board, int row, int col, char player) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = player;
    } else {
        cout << "Invalid move! Try again." << endl;
    }
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // 3x3 Tic-Tac-Toe board
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    do {
        displayBoard(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        makeMove(board, row - 1, col - 1, currentPlayer);

        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins! Congratulations!" << endl;
            break;
        } else if (checkTie(board)) {
            displayBoard(board);
            cout << "It's a tie! The game is over." << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

    } while (true);

    return 0;
}
