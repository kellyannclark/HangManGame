# Overview


The software is a text-based implementation of the classic Hangman game, written in C++. It's a word guessing game where the player attempts to uncover a hidden word by guessing one letter at a time.  A vector of strings (std::vector<std::string>) is used to store a list of possible words that can be used in the game. These words encompass various themes like programming, technology, and general vocabulary.  Each game randomly selects a word from this list. This selection is done using the rand() function, which chooses an index within the vector's range.  The player guesses one letter at a time. If the guessed letter is in the word, it's revealed in the correct position(s).  The game tracks and displays incorrect guesses and updates the Hangman drawing accordingly.  ASCII art is used to represent the Hangman figure and its progressive construction with each incorrect guess. The game ends when either the player correctly guesses all letters in the word or the Hangman is fully drawn (indicating too many incorrect guesses).  The game incorporates a time limit for each round, enhancing the challenge. This is implemented using the <chrono> library to track the elapsed time.  After a game round ends, the player is prompted to play again. This loop allows for continuous play until the player decides to stop.  The program demonstrates the use of dynamic memory allocation by creating the word list vector on the heap using new, and properly releasing the memory with delete at the end of each game round.  The game is played in the console, where the player interacts through standard input and output. Instructions and game status are clearly displayed, providing an intuitive user experience.


The purpose of writing the Hangman game software in C++ is multi-fold:

Educational:
To demonstrate fundamental programming concepts in C++, such as control structures (loops and conditionals), data structures (vectors), dynamic memory management (using new and delete), and basic input/output operations.
To provide a practical example of how to implement a simple game logic, including random word selection, tracking user guesses, and updating game state.

Skill Development:
To practice and improve coding skills in C++, particularly in areas such as efficient memory usage, code organization, and implementing standard library features.
To gain experience in designing user interactions in a console-based application.

Portfolio Building:
To have a demonstrable project that showcases the ability to write well-structured and functional C++ code, which can be useful for professional portfolios.


Software Demo Video https://youtu.be/RwV5nWEUFPQ

# Development Environment

Integrated Development Environment: Visual Studio Code
Complier: GCC(GNU Compiler Collection)
Version Control System: Git
Programming Language: C++
Library: Standard Template Library
Library: Chrono
Dynamic Memory Management: Use of "new" and "delete"

# Useful Websites

{Make a list of websites that you found helpful in this project}

- YouTube   https://www.youtube.com/watch?v=cnn86DfAylA
- W3Schools https://www.w3schools.com/cpp/

# Future Work


- Add GUI for better animation
- Use GUI to create a visual countdown
- Track score and leaderboard