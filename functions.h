//function prototypes
string* englishq();
string* scienceq();
string* codingq();
string* popq();
string* historyq();
//function definitions
char board[3][3]; //declare board array
void createBoard(){
    for (int i = 0; i < 3; i++){//outer loop for rows
        for (int j = 0; j<3; j++){//inner loop for columns
            board[i][j]='-'; //fills the board with dashes, indicating there is no mark
        }
        cout << endl; //ends each row with a new line
    }
}
void printBoard(){//this function prinnts the board using nested for loops and a 2d array
     //declare board char array with 3x3
    cout << "  0 1 2" << endl; //shows index of columns
    for (int i = 0; i < 3; i++){//outer loop for rows
        cout << i << " ";//should print the index for each row
        for (int j = 0; j<3; j++){//inner loop for columns
            cout << board[i][j] << ' '; //print the dash and a space
        }
        cout << endl; //ends each row with a new line
    }
}

string* randomizeGenre(){ //returns a pointer to the pointer returned from the functions called 
int randNum =  rand() % 5 + 1; //this SHOULD generate a random number between 1 and 5
if (randNum == 1){ //if random number is 1, return englishq() and so on...
    return englishq();
} else if (randNum == 2){
    return historyq();
} else if (randNum == 3){
    return codingq();
} else if (randNum == 4){
    return scienceq();
} else {
    return popq();
}
}

//format to write it in: {"Question", "A", "B", "C", "D", "Correct Answer"}
string* englishq(){ //returns a pointer to the whole row of strings
static string englishques[5][6] ={ //making the array static only initializes it once, and keeps the memory location for the array
{"Do you have any idea what she ___ at this time tomorrow?", "A. has done" , "B. Will be doing",  "C. Was doing",  "D. Is doing", "B"},
{"What is the opposite of big?", "A. Loose",  "B. Little", "C. Long", "D. Large", "B"},
{"What does a sentence end with?", "A. Capital Letter", "B. Adverb", "C. Subject", "D. Punctuation", "D"},
{"Which kind of sentence is the following? \nThe students are laughing at the video.", "A. Statement", "B. Command", "C. Question", "D. Exclamation", "A"},
{"What is a verb?", "A. Person, place, or thing", "B. Word that replaces a noun", "C. Action word", "D. Connects different parts of a sentence", "C"}};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return englishques[randNum]; //return a pointer to the whole row of randNum

};
string* historyq(){
static string historyques[5][6]={
{"Who, at age 17, became the youngest person to win a Nobel Peace Prize in 2014?", "A. Lawrence Bragg", "B. Malala Yousafzai", "C. Werner Heisenberg", "D. Paul Dirac", "B"},
{"What was the name of the ancient trade route that connected the East with the West?", "A. The Spice Routes", "B. The Amber Road", "C. The Silk Road", "D. The Incense Route", "C"},
{"Which ancient civilization built Machu Picchu?", "A. Aztec", "B. Inca", "C. Maya", "D. Olmec", "B"},
{"Historians believe the Bubonic Plague started in Europe in which year?", "A. 1347", "B. 1350", "C. 1353", "D. 1348", "A"},
{"How old was Queen Elizabeth II when she became the queen of England?", "A. 31", "B. 25", "C. 28", "D. 30", "B"}};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return historyques[randNum]; //return the whole row of randNum
};
string* codingq(){
static string codingques[5][6]={
{"What is a correct syntax to output (Hello World)" ,"A. Console.WriteLine(Hello World)", "B.System.out.printIn(Hello World)"," C. print (Hello World)", "D. cout << \"Hello World\";","D"},
{"Which of the following operators has the highest precedence?", "A. !", "B. *", "C. %", "D. =", "A"},
{"To use the predefined function fmod, the program must include the header file ___.", "A. <cctype>", "B. <iostream>", "C. <cmath>", "D. <cstdlib>", "C"},
{"The output of the statements: cout<<pow(2.0,pow(3.0,1.0)); is ____.", "A. 6.0", "B. 7.0", "C. 8.0", "D. 9.0", "C"},
{"Which executed first in a do...while loop?", "A. The body of the loop", "B. The increment statement", "C. the evaluation of the expression controlling the loop", "D.the update statement", "A"}};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return codingques[randNum]; //return the whole row of randNum
};
string* scienceq(){
static string scienceques[5][6]={
{"What two mammals lay eggs?", "A. Bats and Squirrels", "B. Platypus and Bats", "C. Squirrels and Echidna", "D. Platypus and Echidna", "D"},
{"What is the largest ocean on Earth?", "A. The Atlantic Ocean", "B.The Indian Ocean", "C. The Pacific Ocean", "D. The Southern Ocean", "C"},
{"What is the largest desert on Earth?","A. Arabia", "B.Sahara", "C. Kalahari", "D.Antartica","D" },
{"What gives human hair, skin, and nails their color?","A. Keratin", "B. Melatonin", "C. Glucose", "D. Melanin","D"},
{"What is the largest organ in the human body?","A. Skin", "B. Heart", "C. Stomach", "D. Lungs", "A"}};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return scienceques[randNum]; //return the whole row of randNum
};
string* popq(){
static string popques[5][6]={
{"Which actor voiced Mufasa in The Lion King and Darth Vader in the original Star Wars trilogy?", "A. James Earl Jones", "B. Eddie Murphy", "C. Jesse McCartney", "D. Christopher Borger","A"},
{"What is Taylor Swift’s most popular album?", "A. Evermore", "B. Red", "C. Speak Now", "D. 1989", "D"},
{"What high school subject did Walter White teach in Breaking Bad?","A. Math", "B. History", "C. Chemistry", "D. English", "C"},
{"What musical features the characters Elphaba, Galinda, and Fiyero?", "A. Hamilton", "B. Chicago","C. Wicked","D. The Phantom of the Opera","C"},
{"Which Netflix series follows a group of teenagers that takes place in the 80s?","A. You", "B. Ginny & Georgia", "C. Outer Banks", "D. Stranger Things","D"}};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return popques[randNum]; //return the whole row of randNum
};

void askQuestion(string* question){ //recieves the pointer from the question functions
    cout << question[0] << endl; //prints the question
    cout << question[1]<< endl; //prints answer choices
    cout << question[2]<< endl;
    cout << question[3]<< endl;
    cout << question[4]<< endl;
    cout << endl;
    cout << "Enter your answer(A, B, C, D): " << endl; //prompts user to enter answer choice by just the letter
}
bool checkAnswer(string* question){//receives the pointer from the question functions
    string answer; //declare string variable to compare it to the string element in the row
    cin >> answer; //get answer from user and store it
if (answer==question[5]){//check if the answer entered is the same as the 6th column of the row returned
    cout << "Correct!";
    return true; 
}
else {
    cout << "Incorrect.";
    return false;
}}

void placeMark(char mark){//receives the char value of the current player
    int row, col;
    cout << "Enter the coordinates you'd like to place your mark on. Example: 0 0" << endl; //ask for coordinates
    cin >> row >> col; //store coordinates
    while ((row>2 || row<0)||(col>2 || col<0)){ //input validation for coordinates
        cout << "Please input valid coordinates: " << endl;
        cin  >> row >> col;
    }
    board[row][col]=mark;//change the board at the specified coordinates to the current player's mark
}

bool checkWin(char currentPlayer){ //receives current player's value
    bool win;
    //if 3 in a row are equal to the currentplayer, win is true
    if ((board[0][0] == currentPlayer)&& (board[1][1] == currentPlayer)  && (board[2][2] == currentPlayer)||(board[0][0] == currentPlayer)&& (board[1][0] == currentPlayer)  && (board[2][0] == currentPlayer)|| (board[0][1] == currentPlayer)&& (board[1][1] == currentPlayer)  && (board[2][1] == currentPlayer) || (board[0][2] == currentPlayer)&& (board[1][2] == currentPlayer)  && (board[2][2] == currentPlayer) || (board[0][0] == currentPlayer)&& (board[0][1] == currentPlayer)  && (board[0][2] == currentPlayer) || (board[1][0] == currentPlayer)&& (board[1][1] == currentPlayer)  && (board[1][2] == currentPlayer) || (board[2][0] == currentPlayer)&& (board[2][1] == currentPlayer)  && (board[2][2] == currentPlayer) ){
        win = true;
    }
    else {
        win = false;
    }
    return win;
}
bool checkFull(){
    bool full = false;
    //if none of the board's elements are equal to =, then the board is full
    if (board[0][0] != '-' && board[0][1] != '-' && board[0][2] != '-' && board[1][0] != '-' && board[1][1] != '-' && board[1][2] != '-' && board[2][0] != '-' && board[2][1] != '-' && board[2][2] != '-'){
        full = true;
    }
    return full;
}


