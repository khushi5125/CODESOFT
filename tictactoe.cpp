#include <iostream>
#include <vector>

using namespace std;

const int sides = 3;
char board[sides][sides];
string Player1, Player2;

void initializeboard()
{
    int i,j;
    for (i = 0; i < sides; i++)
    {
        for ( j = 0; j < sides; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void displayBoard()
 {
    cout << "\n";
    for (int i = 0; i < sides; i++)
    {
        for (int j = 0; j < sides; j++)
         {
            cout << " " << board[i][j];
            if (j < sides - 1)
            cout << " |";
         }
        cout << "\n";
        if (i < sides- 1)
        cout << "---|---|---\n";
    }
    cout << "\n";
}
//check winner function
bool checkwin(char player) {

    for (int i = 0; i < sides; i++)
        {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;

       }
       //check diagonally
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

       return false;
}

//  check if the game is a draw
bool checkDraw()
{
    for (int i = 0; i < sides; i++)
    {
        for (int j = 0; j < sides; j++)
         {
            if (board[i][j] == ' ')
            return false;
         }
    }
    return true;
}

// play the Tic-Tac-Toe game
void playGame()
{
    initializeboard();
    char currentMark = 'X';
    string currentPlayer = Player1;

    while (true)
        {
        displayBoard();
        int row, column;
        cout << currentPlayer << "'s turn (" << currentMark << "). Enter row and column (1-3 each): ";
        cin >> row >> column;
        row--; column--;

        if (row >= 0 && row < sides && column >= 0 && column < sides && board[row][column] == ' ') {
            board[row][column] = currentMark;

            if (checkwin(currentMark)) {
                displayBoard();
                cout << currentPlayer << " wins!\n";
                break;
            }

            if (checkDraw())
            {
                displayBoard();
                cout << "It's a draw!\n";
                break;
            }
            currentMark = (currentMark == 'X') ? 'O' : 'X';
            currentPlayer = (currentPlayer == Player1) ? Player2 : Player1;
        }
        else
            {
            cout << "Invalid move. Try again.\n";
            }
    }
}

int main()
{
    cout<<"\t\t\t\t\t\tWelcome to Tic-Tac-Toe game!!"<<endl;

    char playAgain;
    cout << "Enter name of first player (X): ";
    cin >> Player1;
    cout << "Enter name of second player (O): ";
    cin >> Player2;

    do
        {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
       }
    while (playAgain == 'y');

    cout << "Thanks for playing!\n";
    return 0;
}
