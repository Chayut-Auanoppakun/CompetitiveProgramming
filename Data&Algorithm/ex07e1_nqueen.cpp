#include <iostream>
#include <vector>
using namespace std;

class NQueens {
private:
    int n;
    int solutions;
    vector<vector<string>> allSolutions;
    
    // Helper function to check if it's safe to place a queen at (row, col)
    bool isSafe(int row, int col, vector<int>& queenPositions) {
        for (int i = 0; i < row; ++i) {
            int qCol = queenPositions[i];
            // Check if another queen is in the same column or in either diagonal
            if (qCol == col || abs(qCol - col) == row - i) {
                return false;
            }
        }
        return true;
    }
    
    // Backtracking function to place queens
    void placeQueens(int row, vector<int>& queenPositions) {
        if (row == n) {
            // All queens are placed successfully, record the solution
            vector<string> board(n, string(n, '.'));
            for (int i = 0; i < n; ++i) {
                board[i][queenPositions[i]] = 'Q';
            }
            allSolutions.push_back(board);
            solutions++;
            return;
        }
        
        for (int col = 0; col < n; ++col) {
            if (isSafe(row, col, queenPositions)) {
                queenPositions[row] = col;
                placeQueens(row + 1, queenPositions);
                // Backtrack
                queenPositions[row] = -1;
            }
        }
    }
    
public:
    NQueens(int n) : n(n), solutions(0) {}

    int solve() {
        vector<int> queenPositions(n, -1);
        placeQueens(0, queenPositions);
        return solutions;
    }
    
    void printSolutions() {
        for (const auto& board : allSolutions) {
            for (const auto& row : board) {
                cout << row << endl;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    //cout << "Enter the size of the chessboard (1 to 12): ";
    cin >> n;

    /*if (n < 1 || n > 12) {
        cout << "Invalid input. Please enter a value between 1 and 12." << endl;
        return 1;
    }*/

    NQueens solver(n);
    int totalSolutions = solver.solve();
    
    //cout << "Total number of solutions: " << totalSolutions << endl;
    //cout << "All possible configurations:" << endl;
    //solver.printSolutions();
    cout<<totalSolutions;
    return 0;
}
