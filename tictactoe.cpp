#include <iostream>
using namespace std;
#include "functions.h"

int main(){
    cout << "Welcome to Trivia-Tac-Toe." << endl;
    cout << "In this Tic-Tac-Toe game, you'll have to answer a question correctly."<< endl;
    cout << "There are 5 different genres of questions: English, History, Coding(C++), Science, and Pop Culture." << endl;
    cout << "The computer will randomize the genre each turn." << endl;
    cout << "Starting Board" << endl;
    printBoard();
do{
    randomizeGenre();




}
    return 0;
}  
