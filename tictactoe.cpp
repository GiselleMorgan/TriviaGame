#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include <ctime>
#include "functions.h"
 
int main(){
    srand(time(0));
    cout << "Welcome to Trivia-Tac-Toe." << endl;
    cout << "In this Tic-Tac-Toe game, you'll have to answer a question correctly."<< endl;
    cout << "There are 5 different genres of questions: English, History, Coding, Science, and Pop Culture." << endl;
    cout << "The computer will randomize the genre each turn." << endl;
    cout << "Starting Board: " << endl;
    char cont;  
    do {
    createBoard(); //initalize board with dashes
    printBoard(); //print the board
    bool game = false;
    char currentPlayer = 'X';
    while(!game){
        cout << "Player " << currentPlayer << "'s turn." << endl;
        string* q = randomizeGenre();
        askQuestion(q);

        if (checkAnswer(q)){
            placeMark(currentPlayer);
            printBoard();
            if (checkWin()){
                game = true; //breaks out of loop
            }
        } else{
            cout << "You missed the question! No mark placed" << endl;
        }
        if (currentPlayer=='X'){
            currentPlayer='O';
        } else {
            currentPlayer='X';
        }
    }
    do{
    
        cout << "Do you want to continue? \n[Y/N]"<<endl;
        cin >> cont;
        } while (cont != 'Y'||'N');
    if (cont == 'N'){
        break;
    }
}while (cont=='Y');

    return 0;
}  

