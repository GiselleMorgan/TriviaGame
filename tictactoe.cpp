#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include <ctime>
#include "functions.h"
 
int main(){
    srand(time(0)); //seed the random number generator
    //introduction statements
    cout << "Welcome to Trivia-Tac-Toe." << endl;
    cout << "In this Tic-Tac-Toe game, you'll have to answer a question correctly."<< endl;
    cout << "There are 5 different genres of questions: English, History, Coding, Science, and Pop Culture." << endl;
    cout << "The computer will randomize the genre each turn." << endl;
    cout << "Starting Board: " << endl;
    createBoard(); //initalize board with dashes
    printBoard(); //print the board
    bool game = false; //loop controller
    char currentPlayer = 'X'; //start with player X
    while(!game){ //while game is not true
        cout << "Player " << currentPlayer << "'s turn." << endl; //print whose turn it is
        string* q = randomizeGenre(); //call randomizeGenre, which returns a pointer to a row of strings from an array and assign it to q
        askQuestion(q); //call askQuestion, passing it the pointer from randomizeGenre

        if (checkAnswer(q)){  //call checkAnswer, passing it the pointer from randomizeGenre, if checkAnswer returns true
            placeMark(currentPlayer); //call placeMark, passing it the value of currentPlayer(X or O)
            printBoard(); //print updated board
            if (checkWin(currentPlayer)){ //call checkWin, passing it the value of currentPlayer, if it returns true
                cout << endl << "Congrats! Player " << currentPlayer << " won!"; //print that the currentPlayer won
                game = true; //breaks the condition of the loop
                continue; //skip the rest ofthe statements
            } 
            if (checkFull()){//call checkFull, if it returns true
                cout << "Board is full, nobody wins. " << endl; //print that the board is full
                game = true; //breaks the condition of the loop
                continue; //skips the rest of the statement
            }
        } else{ //if checkAnswer does not return true
            cout << endl << "You missed the question! No mark placed" << endl; //print that the answer was incorrect
        }
        //switch players at the end of the turn
        if (currentPlayer=='X'){
            currentPlayer='O';
        } else {
            currentPlayer='X';
        }
    }

    return 0;
}  

