#include <iostream>
#include "ai_opponent.cpp"  // Include the new AI opponent file

void startGame() {
    AIOpponent ai;
    ai.makeMove();
}

int main() {
    std::cout << "Starting Tic Tac Toe game" << std::endl;
    startGame();
    return 0;
}

