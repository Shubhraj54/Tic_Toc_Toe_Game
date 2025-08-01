# Tic Tac Toe Game (C Language - Turbo C++)

This is a simple **two-player Tic Tac Toe game** built using the C programming language. It runs on Turbo C++ or other DOS-based compilers that support `conio.h` and `graphics.h`-style windowing.

## Features

- Two-player gameplay
- Graphical layout using `conio.h` for better display (Turbo C++ specific)
- Board refreshes after every move
- Checks for win/draw conditions
- Customizable player names

## Requirements

- Turbo C++ Compiler or DOSBox setup
- Windows OS (preferably)  
>  *This program may not run on modern C compilers like GCC, Clang, or online C IDEs due to use of Turbo C++ specific headers (`conio.h`, `textbackground`, `window()`, etc).*

## How to Run

1. Download or clone this repository:
   git clone https://github.com/Shubhraj54/TicTacToe-C-TurboC.git
Open Turbo C++ or any DOS-based C compiler.

Load the .c file in the IDE.

Compile and Run the code.

Known Limitations
Uses outdated conio.h and window() functions.

Not portable to GCC or modern compilers.

No AI or single-player mode.

Uses goto for flow control (not recommended in modern C standards).

Future Improvements
Rewrite using modern C (portable on GCC or Linux/Windows)

Replace goto with loops/functions

Create a single-player mode with basic AI

Add modular design with functions like drawBoard(), checkWin(), etc.

🙋 Author
Shubh Raj
📍 GitHub Profile
🎓 MCA Graduate | Passionate Coder | Backend Developer
