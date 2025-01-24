# Number_Guessing_Game
https://roadmap.sh/projects/number-guessing-game

## Overview

The Number Guessing Game is a simple console-based game written in C++. The objective of the game is to guess a randomly generated number within a limited number of attempts based on the selected difficulty level. The program provides real-time feedback and measures the time taken to guess the number correctly.

## Features
- Three difficulty levels:
  - **Easy**: 10 attempts
  - **Medium**: 5 attempts
  - **Hard**: 3 attempts
- Random number generation between 1 and 100.
- Feedback after each guess (e.g., "The number is greater than..." or "The number is less than...").
- Timer to measure the time taken to guess the correct number.
- Replay option to play the game multiple times.

## How to Play
1. Run the program in a C++-supported environment.
2. Select a difficulty level by entering the corresponding number:
   - 1 for Easy
   - 2 for Medium
   - 3 for Hard
3. Enter your guesses when prompted. The program will provide feedback to guide you.
4. Continue guessing until you find the correct number or run out of attempts.
5. At the end of the game, you will see the time taken and have the option to play again.

## Compilation and Execution
1. Save the code to a file (e.g., `num_guessing_game.cpp`).
2. Open a terminal or command prompt.
3. Compile the program using a C++ compiler:
   ```
   g++ -o num_guessing_game num_guessing_game.cpp
   ```
4. Run the compiled program:
   ```
   ./num_guessing_game
   ```
