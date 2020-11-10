#pragma once
#include <vector>
#include <string>

class Checkers {
    private:
        std::vector<std::string> m_board;
        char m_xChar, m_oChar;
    public:
        Checkers();
        void startGame();
        void generateBoard();
        void movePiece(int move);
        bool isWinnder(char p);
        void printBoard();
};