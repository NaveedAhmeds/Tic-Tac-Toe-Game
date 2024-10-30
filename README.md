**Tic Tac Toe Game**

A command-line Tic Tac Toe game implemented in C++ using Object-Oriented Programming principles. This project demonstrates a clear understanding of classes, object management, and control flow, showcasing proficiency in foundational C++ concepts.

**Table of Contents**

Overview
Features
Class Structure
How to Run
Example Gameplay
Technologies Used
Future Improvements
Contributing
License
Overview

This project is a simple Tic Tac Toe game played on a 3x3 grid. Players alternate turns, attempting to place three of their marks (X or O) in a row horizontally, vertically, or diagonally. This project was created to demonstrate C++ programming skills, particularly in the usage of classes and object-oriented design.

**Features**

Player vs. Player Mode: Two players can play against each other.
Error Handling: Prevents players from placing a mark on an already occupied cell.
Victory Detection: Checks for winning combinations after each turn and declares the winner.
Draw Detection: Detects and displays a draw when all cells are filled with no winner.
Class Structure

The game is structured using a few key classes to separate logic and improve readability:

Game: Manages the game flow, including player turns and win conditions.
Board: Handles the 3x3 grid and updates the state after each turn.
Player: Defines player attributes, including mark (X or O) and turn management.
Class Descriptions
Game

Attributes: Player instances, Board instance
Methods:
startGame(): Initiates the game loop.
checkWin(): Checks if a player has won after each move.
checkDraw(): Checks if the board is full with no winner.
**Board**

Attributes: 2D array for the board grid
Methods:
displayBoard(): Prints the board to the console.
updateBoard(row, col, mark): Places a player's mark on the board.
Player

Attributes: Player mark (X or O)
Methods:
makeMove(board): Allows player to input a move.
How to Run

**Clone the Repository:**
bash
Copy code
git clone https://github.com/yourusername/tic-tac-toe.git
Compile the Code: Navigate to the project directory and compile the code using g++ or any C++ compiler.
bash
Copy code
g++ main.cpp -o TicTacToe
Run the Executable:
bash
Copy code
./TicTacToe
Example Gameplay

Below is an example of what gameplay might look like in the terminal:

plaintext
**Copy code**
Player 1 (X), enter your move (row and column): 1 1
 X |   |  
-----------
   |   |  
-----------
   |   |  

Player 2 (O), enter your move (row and column): 0 0
 O |   |  
-----------
   | X |  
-----------
   |   |  
**Technologies Used**

Programming Language: C++
IDE/Compiler: Any C++ compatible compiler (e.g., g++, MSVC)
Future Improvements

Single-Player Mode: Add AI to enable a player to play against the computer.
GUI Version: Use a library like SFML to create a graphical version of the game.
Enhanced Error Handling: Further improve input validation.
Contributing

Feel free to open issues or submit pull requests for improvements and additional features. All contributions are welcome!

**License**

**MIT License**

**Copyright (c) 2024 Naveed Ahmed Syed**

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, subject to the following conditions:

Attribution: You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
Source Code Sharing: If you modify the Software, you must retain this license and attribution information in your distribution.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES, OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT, OR OTHERWISE, ARISING FROM, OUT OF, OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
