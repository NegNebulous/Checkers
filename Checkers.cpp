#include "checkers.h"
#include <iostream>
#include <vector>
#include <string>

Checkers::Checkers() {
    m_board;
    m_xChar = 'x';
    m_oChar = 'o';
}

void Checkers::startGame() {
    generateBoard();
    printBoard();
}

void Checkers::generateBoard() {
    //8x8 board
    for (int i = 0; i <= 2; i++) {
        std::string row = "";
        for (int j = 0; j < 8; j++) {
            if (j %  2) {
                row += m_xChar;
            }
            else {
                row += ' ';
            }
        }
        if (!(i % 2)) {
            row = row.substr(1, row.length() - 1) + ' ';
        }
        m_board.emplace_back(row);
    }

    m_board.emplace_back("        ");
    m_board.emplace_back("        ");

    for (int i = 5; i <= 7; i++) {
        std::string row = "";
        for (int j = 0; j < 8; j++) {
            if (j %  2) {
                row += m_oChar;
            }
            else {
                row += ' ';
            }
        }
        if (!(i % 2)) {
            row = row.substr(1, row.length() - 1) + ' ';
        }
        m_board.emplace_back(row);
    }
}

void Checkers::movePiece(int move) {

}

bool Checkers::isWinnder(char p) {
    return NULL;
}

void Checkers::printBoard() {
    for (int i = 0; i < m_board.size(); i++) {
        std::cout << m_board[i] << std::endl;
    }
}