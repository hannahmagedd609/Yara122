#include "gamewindow1.h"
#include "ui_gamewindow1.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListWidget>
#include <QDialog>
#include <limits>
#include <unordered_map>
#include <QTextStream>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QMessageBox>
#include <QtSql/QSql>
#include <unordered_map>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTextEdit>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "GameManager.h"

gameWindow1::gameWindow1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gameWindow1)
    , currentPlayer("X")
{
    ui->setupUi(this);
    resetGame();
}

gameWindow1::~gameWindow1()
{
    delete ui;
}


void gameWindow1::resetGame() {
    // Reset all buttons to default state
    ui->pushButton1->setText("");
    ui->pushButton2->setText("");
    ui->pushButton3->setText("");
    ui->pushButton4->setText("");
    ui->pushButton5->setText("");
    ui->pushButton6->setText("");
    ui->pushButton7->setText("");
    ui->pushButton8->setText("");
    ui->pushButton9->setText("");

    // Reset the game board and the current player (X starts)
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
    currentPlayer = "X";
}

void gameWindow1::makeMove(QPushButton *button, int row, int col) {

    if (button->text() == "") {  // Only allow moves on empty buttons
        button->setText(currentPlayer);
        board[row][col] = currentPlayer.toStdString()[0];

        if (checkWin(currentPlayer.toStdString()[0])) {
            QMessageBox::information(this, "Game Over", QString("%1 wins!").arg(currentPlayer));
            QStringList aiStringList;
            aiStringList << (currentPlayer+"Wins!");
            logGameResult(aiStringList);
            resetGame();
            return;
        } else if (checkTie()) {
            QMessageBox::information(this, "Game Over", "It's a tie!");
            QStringList aiStringList;
            aiStringList <<"It's a tie!" ;
            logGameResult(aiStringList);
            resetGame();
            return;
        }

        // Switch player
        currentPlayer = (currentPlayer == "X") ? "O" : "X";
    }
}

bool gameWindow1::checkWin(char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true; // Row win
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true; // Column win
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true; // Diagonal win
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true; // Diagonal win
    return false;
}

bool gameWindow1::checkTie() {
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            if (board[row][col] == ' ')
                return false; // There are still empty cells, game is not a tie
        }
    }
    return true; // All cells are filled, game is a tie
}
void gameWindow1::logGameResult(QStringList result ) {


    gameManager.totalhistory<<result; // Assuming GameManager has a method to add to history
}


void gameWindow1::on_pushButton1_clicked()
{
    makeMove(ui->pushButton1, 0, 0);
}

void gameWindow1::on_pushButton2_clicked()
{
    makeMove(ui->pushButton2, 0, 1);
}

void gameWindow1::on_pushButton3_clicked()
{
    makeMove(ui->pushButton3, 0, 2);
}

void gameWindow1::on_pushButton4_clicked()
{
    makeMove(ui->pushButton4, 1, 0);
}

void gameWindow1::on_pushButton5_clicked()
{
    makeMove(ui->pushButton5, 1, 1);
}

void gameWindow1::on_pushButton6_clicked()
{
    makeMove(ui->pushButton6, 1, 2);
}

void gameWindow1::on_pushButton7_clicked()
{
    makeMove(ui->pushButton7, 2, 0);
}

void gameWindow1::on_pushButton8_clicked()
{
    makeMove(ui->pushButton8, 2, 1);
}

void gameWindow1::on_pushButton9_clicked()
{
    makeMove(ui->pushButton9, 2, 2);
}
