Hello World EULA Program
Description

This C++ program prints "Hello, World!" multiple times based on user input, but only if the End User License Agreement (EULA) is accepted. It reads the last word of the EULA.txt file to check for acceptance (true or yes), or you can bypass the check with a command-line argument.
Features

    Validates EULA acceptance before running.

    Reads the last word of EULA.txt to determine consent.

    Allows bypassing EULA check with argument 1.

    Prompts the user to specify the number of repetitions.

    Prints "Hello, World!" with a half-second delay between each message.

Usage
    Run the program:

./helloworldprog

    To bypass the EULA check:

./helloworldprog 1

    Enter the number of repetitions when prompted (enter 0 to exit).

Requirements

    C++17 or later

    Standard C++ libraries (<iostream>, <fstream>, <sstream>, <string>, <thread>, <chrono>)

Behavior

    If the EULA is accepted (true or yes), the program runs.

    If the EULA is not accepted, the program exits with a warning message.
