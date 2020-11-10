#pragma once

class Checkers {
    private:
        char m_board[8][8], m_xChar, m_oChar;
    public:
        Checkers();
        void startGame();
        char generateBoard();
        void movePiece(int move);
        bool isWinnder(char p);
        void printBoard();
};