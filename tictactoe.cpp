#include <iostream>
#include <string>
using namespace std;
#include "functions.h"

int main(){
    cout << "Welcome to Trivia-Tac-Toe." << endl;
    cout << "In this Tic-Tac-Toe game, you'll have to answer a question correctly."<< endl;
    cout << "There are 5 different genres of questions: English, History, Coding(C++), Science, and Pop Culture." << endl;
    cout << "The computer will randomize the genre each turn." << endl;
    cout << "Starting Board" << endl;
    createBoard(); //initalize board with dashes
    printBoard(); //print the board

do { //do while
    askQuestion(); //ask question, randomize genre, randomize number for question, print question and answers
    checkAnswer(); //
    if (checkAnswer()==1){
    placeMark();
    }
    do{
    string cont;  
        cout<< "Do you want to continue? \n[Y/N]"<<endl;
        cin>> cont;
        };
    while (cont != "Y"||"N")
    if (cont == "N"){
        break;
    else if (cont == )
    }
    }
  
 
    return 0;
}  

