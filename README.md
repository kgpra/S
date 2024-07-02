# Sudoku Solver
This project implements a Sudoku Solver using a backtracking algorithm in C++. The solver reads a Sudoku puzzle from standard input, attempts to solve it, and prints the solved puzzle if a solution exists.


Features:
Solves 9x9 Sudoku Puzzles: Handles standard 9x9 Sudoku grids.

1. Input Handling: Reads Sudoku puzzles from standard input, allowing users to input their own puzzles.

2. Validation: Ensures that numbers are placed according to Sudoku rules (unique in rows, columns, and 3x3 sub-grids).

3. Backtracking Algorithm: Uses backtracking to efficiently explore all possible solutions.

4. Output: Prints the solved Sudoku puzzle if a solution exists; otherwise, indicates that no solution was found.

5. User Interaction: Provides clear prompts for users to input Sudoku puzzles and displays the solution or a message if no solution exists.

6. Modularity: The solver functions are organized into separate functions (isValid, SudokuSolver) for clarity and maintainability.

7. Clear Comments and Documentation: Includes comments that explain key sections of the code and the logic behind the algorithm.

8. Error Handling: Handles edge cases gracefully, such as invalid inputs or unsolvable puzzles, with appropriate messages.

Usage :-

1. Enter the Sudoko puzzle(use 0 for empty cells)

      5 3 0 0 7 0 0 0 0

      6 0 0 1 9 5 0 0 0

      0 9 8 0 0 0 0 6 0

      8 0 0 0 6 0 0 0 3

      4 0 0 8 0 3 0 0 1

      7 0 0 0 2 0 0 0 6

      0 6 0 0 0 0 2 8 0

      0 0 0 4 1 9 0 0 5

      0 0 0 0 8 0 0 7 9


2. The solved Sudoku puzzle will be printed if a solution exists:

      5 3 4 6 7 8 9 1 2

      6 7 2 1 9 5 3 4 8

      1 9 8 3 4 2 5 6 7

      8 5 9 7 6 1 4 2 3

      4 2 6 8 5 3 7 9 1

      7 1 3 9 2 4 8 5 6

      9 6 1 5 3 7 2 8 4

      2 8 7 4 1 9 6 3 5

      3 4 5 2 8 6 1 7 9


3. If no solution exists, the following message will be displayed:

   No solution exists for the given sudoko puzzle.


   
   
