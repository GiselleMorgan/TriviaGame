//function definitions
void printBoard(){//this function prinnts the board using nested for loops and a 2d array
    char board[3][3]; //declare board char array with 3x3
    cout << "  0 1 2" << endl; //shows index of columns
    for (int i = 0; i < 3; i++){//outer loop for rows
        cout << i << " ";//should print the index for each row
        for (int j = 0; j<3; j++){//inner loop for columns
            board[i][j]='-'; //fills the board with dashes, indicating there is no mark
            cout << board[i][j] << ' '; //print the dash and a space
        }
        cout << endl; //ends each row with a new line
    }
}

void randomizeGenre(){
int randNum =  rand() % 5 + 1; //this SHOULD generate a random number between 1 and 5
if (randNum == 1){ //if random number is 1, call englishq() and so on...
    englishq();
} else if (randNum == 2){
    historyq();
} else if (randNum == 3){
    codingq();
} else if (randNum == 4){
    scienceq();
} else {
    popq();
}
}

//format to write it in: {"Question", "A", "B", "C", "D", "Correct Answer"}
void englishq(){
string englishques[5][6] =
{},
{},
{},
{},
{};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
cout << englishques[randNum][0]; //SHOULD print the randNum row's question


};
void historyq(){
string historyques[5][6]=
{},
{},
{},
{},
{};
};
void codingq(){
string codingques[5][6]=
{},
{},
{},
{},
{};
};
void scienceq(){
string scienceques[5][6]=
{},
{},
{},
{},
{};
};
void popq(){
string popques[5][6]=
{},
{},
{},
{},
{};
};