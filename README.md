<h1><strong>Tic Tac Toe Game</strong></h1>

<p>A command-line Tic Tac Toe game implemented in C++ using Object-Oriented Programming principles. This project demonstrates a clear understanding of classes, object management, and control flow, showcasing proficiency in foundational C++ concepts.</p>

<h2><strong>Table of Contents</strong></h2>
<ul>
  <li><a href="#overview">Overview</a></li>
  <li><a href="#features">Features</a></li>
  <li><a href="#class-structure">Class Structure</a></li>
  <li><a href="#how-to-run">How to Run</a></li>
  <li><a href="#example-gameplay">Example Gameplay</a></li>
  <li><a href="#technologies-used">Technologies Used</a></li>
  <li><a href="#future-improvements">Future Improvements</a></li>
  <li><a href="#contributing">Contributing</a></li>
  <li><a href="#license">License</a></li>
</ul>

<h2 id="overview"><strong>Overview</strong></h2>
<p>This project is a simple Tic Tac Toe game played on a 3x3 grid. Players alternate turns, attempting to place three of their marks (X or O) in a row horizontally, vertically, or diagonally. This project was created to demonstrate C++ programming skills, particularly in the usage of classes and object-oriented design.</p>

<h2 id="features"><strong>Features</strong></h2>
<ul>
  <li><strong>Player vs. Player Mode</strong>: Two players can play against each other.</li>
  <li><strong>Error Handling</strong>: Prevents players from placing a mark on an already occupied cell.</li>
  <li><strong>Victory Detection</strong>: Checks for winning combinations after each turn and declares the winner.</li>
  <li><strong>Draw Detection</strong>: Detects and displays a draw when all cells are filled with no winner.</li>
</ul>

<h2 id="class-structure"><strong>Class Structure</strong></h2>
<p>The game is structured using a few key classes to separate logic and improve readability:</p>
<ul>
  <li><strong>Game</strong>: Manages the game flow, including player turns and win conditions.</li>
  <li><strong>Board</strong>: Handles the 3x3 grid and updates the state after each turn.</li>
  <li><strong>Player</strong>: Defines player attributes, including mark (X or O) and turn management.</li>
</ul>

<h3><strong>Class Descriptions</strong></h3>

<h4><strong>Game</strong></h4>
<ul>
  <li><strong>Attributes</strong>: Player instances, Board instance</li>
  <li><strong>Methods</strong>:
    <ul>
      <li><code>startGame()</code>: Initiates the game loop.</li>
      <li><code>checkWin()</code>: Checks if a player has won after each move.</li>
      <li><code>checkDraw()</code>: Checks if the board is full with no winner.</li>
    </ul>
  </li>
</ul>

<h4><strong>Board</strong></h4>
<ul>
  <li><strong>Attributes</strong>: 2D array for the board grid</li>
  <li><strong>Methods</strong>:
    <ul>
      <li><code>displayBoard()</code>: Prints the board to the console.</li>
      <li><code>updateBoard(row, col, mark)</code>: Places a player's mark on the board.</li>
    </ul>
  </li>
</ul>

<h4><strong>Player</strong></h4>
<ul>
  <li><strong>Attributes</strong>: Player mark (X or O)</li>
  <li><strong>Methods</strong>:
    <ul>
      <li><code>makeMove(board)</code>: Allows player to input a move.</li>
    </ul>
  </li>
</ul>

<h2 id="how-to-run"><strong>How to Run</strong></h2>

<ol>
  <li><strong>Clone the Repository:</strong>
    <pre><code>git clone https://github.com/yourusername/tic-tac-toe.git</code></pre>
  </li>
  <li><strong>Compile the Code</strong>: Navigate to the project directory and compile the code using g++ or any C++ compiler.
    <pre><code>g++ main.cpp -o TicTacToe</code></pre>
  </li>
  <li><strong>Run the Executable:</strong>
    <pre><code>./TicTacToe</code></pre>
  </li>
</ol>

<h2 id="example-gameplay"><strong>Example Gameplay</strong></h2>
<p>Below is an example of what gameplay might look like in the terminal:</p>

<pre><code>Player 1 (X), enter your move (row and column): 1 1
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
</code></pre>

<h2 id="technologies-used"><strong>Technologies Used</strong></h2>
<ul>
  <li><strong>Programming Language</strong>: C++</li>
  <li><strong>IDE/Compiler</strong>: Any C++ compatible compiler (e.g., g++, MSVC)</li>
</ul>

<h2 id="future-improvements"><strong>Future Improvements</strong></h2>
<ul>
  <li><strong>Single-Player Mode</strong>: Add AI to enable a player to play against the computer.</li>
  <li><strong>GUI Version</strong>: Use a library like SFML to create a graphical version of the game.</li>
  <li><strong>Enhanced Error Handling</strong>: Further improve input validation.</li>
</ul>

<h2 id="contributing"><strong>Contributing</strong></h2>
<p>Feel free to open issues or submit pull requests for improvements and additional features. All contributions are welcome!</p>

<h2 id="license"><strong>License</strong></h2>

<p><strong>MIT License</strong></p>

<p><strong>Copyright (c) 2024 Naveed Ahmed Syed</strong></p>

<p>Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, subject to the following conditions:</p>

<ol>
  <li><strong>Attribution</strong>: You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.</li>
  <li><strong>Source Code Sharing</strong>: If you modify the Software, you must retain this license and attribution information in your distribution.</li>
</ol>

<p>THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES, OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT, OR OTHERWISE, ARISING FROM, OUT OF, OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.</p>
