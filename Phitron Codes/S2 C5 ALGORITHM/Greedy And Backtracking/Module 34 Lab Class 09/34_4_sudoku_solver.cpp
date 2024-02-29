


/*  
Algo week 09 : Greedy and Backtracking 
Mod 34 : 34-4 - 37. Sudoku Solver (LC) 
Mod date : 150223, Wednesday

Watch date : 240523, Wednesday 
*/


#include <bits/stdc++.h>
using namespace std;


// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;

/* ================================================================ */

// backtrack basic logic 
/*
backtrack(state)
{
        // base case 
        if solution_found(state)
        {
                ans.push_back(state)
                return 
        }

        // loop over all the possible candidates 
        for all possible candidates 
        {
                - add the candidate to the state 
                - backtrack(state)
                - remove the candidate 
        }

}


*/

const int N = 9;

vector<vector<char>>solution_board(N);

// retruns true is sudoku_board doesn't have any empty cell 
bool solution_found(vector<vector<char>>sudoku_board)
{
        for(int i = 0; i < N ; i++)
        {
                for(int j = 0; j < N ; j++)
                {
                        // this means the sudoku_board still have empty cells as dot ( . ) represents an empty cell in the board  
                        if(sudoku_board[i][j] == '.')
                        {
                                return false;
                        }
                }
        }

        // return ture as if control comes here, it means false has not been returned meaning the board doesn't have any empty cell 
        return true;
}


/*
        reutrns the first occurance of free cell in the sudoku board in pair. 
*/
pair<int, int>get_first_free_cell(vector<vector<char>>sudoku_board)
{
        for(int i = 0; i < N ; i++)
        {
                for(int j = 0; j < N ; j++)
                {
                        // this is the first free cell, return the indexes as pair 
                        if(sudoku_board[i][j] == '.')
                        {
                                return { i,  j };
                        }
                }
        }

        // the control of this code won't reach here as solution_found(state) code always runs first in the backtrack problem
        // and if no empty cell is found then it reutrns ture , but just to avoid compiler warning returning the below 
        return {-1, -1};  
}

/*
        returns the valid candidates ex: [digits that can be placed in the empty cell] 
*/
vector<char>get_candidate(vector<vector<char>>sudoku_board, pair<int, int>free_cell)
{
        int row = free_cell.f;
        int col = free_cell.s;

        vector<char>valid_candidate;

        // 1. Run loop over the candidates 
        for(char digit = '1'; digit <= '9'; digit++)
        {
                bool is_candidate = true;

                // 1.2 Check the row if any digit is common 
                for(int j = 0; j < N ; j++)
                {
                        if(sudoku_board[row][j] == digit)
                        {
                                is_candidate = false;
                                break;
                        }
                }

                // // this is kind of optimization like if in first nested loop where we are checking the row, 
                // and if in the row the current digit already exist, then we can not take this digit as a valid candidate 
                // so, then checking the column and sub 3 x 3 matrix is of no use 
                if(is_candidate)  
                {

                        // 1.3 Check the col if any digit is common 
                        for(int i = 0; i < N ; i++)
                        {
                                if(sudoku_board[i][col] == digit)
                                {
                                        is_candidate = false;
                                        break;
                                }
                        }
                
                }

                if(is_candidate)
                {
                        // 1.4 Check the sub 3 x 3 matrix if any of the digit is true 
                        int new_row = (row / 3) * 3;
                        int new_col = (col / 3) * 3;

                        for(int i = new_row; i < new_row + 3; i++)
                        {
                                for(int j = new_col; j < new_col + 3; j++)
                                {
                                        if(sudoku_board[i][j] == digit)
                                        {
                                                is_candidate = false;
                                                break;
                                        }
                                }
                        }
                }

                if(is_candidate)
                {
                        valid_candidate.push_back(digit);
                }
        }

        return valid_candidate;
}

bool backtrack(vector<vector<char>>sudoku_board)
{
        // if solution found, add to answer 
        if(solution_found(sudoku_board))
        {
                // solution_board.push_back(sudoku_board);
                solution_board = sudoku_board;   // As sudoku_board and solution_board both are matrix, so only assign do not pushback 
                
                return true;
        }

        // 2. Loop over all the valid candidates
        pair<int, int> free_cell = get_first_free_cell(sudoku_board);

        vector<char>candidates = get_candidate(sudoku_board, free_cell);

        for(char candidate : candidates)
        {
                int row = free_cell.f;
                int col = free_cell.s;

                // 2.1 : Add candidate to to the state 
                sudoku_board[row][col] = candidate;

                // 2.2 : backtrack(state)
                bool curr_solution = backtrack(sudoku_board);

                // If current solution is true, then no need to remove the candidate, we have found a valid solution. 
                if(curr_solution)
                {
                        return true;
                }
                // 2.3: remove candidate from state 
                sudoku_board[row][col] = '.';
        }

        // if no call is able to return true, then there must be no solution 
        return false;

}


/*

Leetcode Input : 


5 3 . . 7 . . . . 
6 . . 1 9 5 . . . 
. 9 8 . . . . 6 . 
8 . . . 6 . . . 3 
4 . . 8 . 3 . . 1 
7 . . . 2 . . . 6 
. 6 . . . . 2 8 . 
. . . 4 1 9 . . 5 
. . . . 8 . . 7 9 


out put : 

5 3 4 6 7 8 9 1 2 
6 7 2 1 9 5 3 4 8 
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9 

*/

int main(){

	vector<vector<char>>sudoku_board(N, vector<char>(N));
        for(int i = 0; i < N ; i++)
        {
                for(int j = 0; j < N ; j++)
                {
                        cin >> sudoku_board[i][j];
                }
        }

        backtrack(sudoku_board);

        cout << endl << endl;
        for(int i = 0; i < N ; i++)
        {
                for(int j = 0; j < N ; j++)
                {
                        cout << solution_board[i][j] << " ";
                }
                cout << endl;
        }


        
        return 0;
}
