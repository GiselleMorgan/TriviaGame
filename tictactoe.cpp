#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include <ctime>
#include "functions.h"
#include "userClass.h"
 
int main(){
    srand(time(0)); //seed the random number generator
    //object/class usage
    string name;
    char mark;
    user u1; //create user object for user 1
    user u2; //create user object for user 2
    //introduction statements
    cout << "Welcome to Trivia-Tac-Toe." << endl;
    cout << "Player 1, please enter your first name and the mark you'll use (X or O)" << endl;
    cin >> name >> mark; //stores the input in name and mark
    u1.setData(name, mark); //sets data for user 1/player 1
    if (mark == 'X'){ //if u1, chose X
        mark == 'O'; // mark will be assigned O for user 2 to use
    } else { //and vis versa
        mark = 'X';
    }
    cout << endl << "Player 2, please enter your name and the mark you'll use will be the mark " << u1.getName() << " didn't choose" << endl;
    cin >> name; //stores input in name and mark again
    u2.setData(name, mark); //sets data for user 2/player 2
//prints user 1 and 2's names and gives introduction statements
    cout << u1.getName() << " and " << u2.getName() <<", in this Tic-Tac-Toe game, you'll have to answer a question correctly."<< endl;
    cout << "There are 5 different genres of questions: English, History, Coding, Science, and Pop Culture." << endl;
    cout << "The computer will randomize the genre each turn." << endl;
    cout << "Starting Board: " << endl;
    createBoard(); //initalize board with dashes
    printBoard(); //print the board
    bool game = false; //loop controller
    char currentPlayer = u1.getMark(); //start with user 1, assigns currentPlayer char the value returned by u1.getMark
    while(!game){ //while game is not true
        if (currentPlayer==u1.getMark()){ //if currentplayer is equal to the value returned by u1.getMark
            cout <<  u1.getName() << "'s turn." << endl; //print whose turn it is, calling u1.getName
        } else { //if currentPlayer is not equal to u1.getMark(), it's u2's turn
        cout <<  u2.getName() << "'s turn." << endl; }//print whose turn it is, calling 
        string* q = randomizeGenre(); //call randomizeGenre, which returns a pointer to a row of strings from an array and assign it to q
        askQuestion(q); //call askQuestion, passing it the pointer from randomizeGenre

        if (checkAnswer(q)){  //call checkAnswer, passing it the pointer from randomizeGenre, if checkAnswer returns true
            placeMark(currentPlayer); //call placeMark, passing it the value of currentPlayer(X or O)
            printBoard(); //print updated board
            if (checkWin(currentPlayer)){ //call checkWin, passing it the value of currentPlayer, if it returns true
                if (currentPlayer==u1.getMark()){ //if currentplayer is equal to the value returned by u1.getMark
                    cout << endl << "Congrats! " << u1.getName() << " won!"; //print that the currentPlayer(user1) won
            } else { //if currentPlayer is not equal to u1.getMark()
                    cout << endl << "Congrats! " << u2.getName() << " won!"; } //print that the currentPlayer(user2) won
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

