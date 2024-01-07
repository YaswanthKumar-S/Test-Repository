/*The Knight's Tour problem is a classic chess 
puzzle that involves finding a sequence of moves
for a knight to visit every square on a chessboard
exactly once. The knight is allowed to make
its typical L-shaped moves, which consist of moving two
squares in one direction (either horizontally or vertically) 
and then one square perpendicular to the first direction. */
#include <iostream>
#include <vector>
using namespace std;
const int N = 8; // Size of the chessboard
const int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
const int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isSafe(int x, int y, int board[N][N]) {
    return (x >= 0 && y >= 0 && x < N && y < N && board[x][y] == -1);
}

void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool solveKnightTour(int x, int y, int move, int board[N][N]) {
    if (move == N * N)
        return true;

    for (int i = 0; i < 8; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];

        if (isSafe(nextX, nextY, board)) {
            board[nextX][nextY] = move;
            if (solveKnightTour(nextX, nextY, move + 1, board))
                return true;
            board[nextX][nextY] = -1; // Backtrack
        }
    }

    return false;
}

int main() {
    
    int board[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j]=-1;
        }
        
    }
    
    int startRow = 0; // Starting position
    int startCol = 0;
    board[startRow][startCol] = 0;

    if (solveKnightTour(startRow, startCol, 1, board)) {
        cout << "Solution exists:\n";
        printSolution(board);
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
