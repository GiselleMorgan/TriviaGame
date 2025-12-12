//function definitions
char board[3][3];
void createBoard(){
    for (int i = 0; i < 3; i++){//outer loop for rows
        cout << i << " ";//should print the index for each row
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
string englishq(){
string englishques[5][6] =
{"Do you have any idea what she ___ at this time tomorrow?", "A. has done" , "B. Will be doing",  "C. Was doing",  "D. Is doing", "B"},
{"What is the opposite of big?", "A. Loose",  "B. Little" "C. Long", "D. Large", "B"},
{"What does a sentence end with?", "A. Capital Letter", "B. Adverb", "C. Subject", "D. Subject", "D"},
{"Which kind of sentence is the following? \nThe students are laughing at the video.", "A. Statement", "B. Command", "C. Question", "D. Exclamation", "A"},
{"What is a verb?", "A. Person, place, or thing", "B. Word that replaces a noun", "C. Action word", "D. Connects different parts of a sentence", "C"};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return englishques[randNum]; 


};
string historyq(){
string historyques[5][6]=
{"Who, at age 17, became the youngest person to win a Nobel Peace Prize in 2014?", "A. Lawrence Bragg", "B. Malala Yousafzai", "C. Werner Heisenberg", "D. Paul Dirac", "B"},
{"What was the name of the ancient trade route that connected the East with the West?", "A. The Spice Routes", "B. The Amber Road", "C. The Silk Road", "D. The Incense Route", "C"},
{"Which ancient civilization built Machu Picchu?", "A. Aztec", "B. Inca", "C. Maya", "D. Olmec", "B"}, ,
{"Historians believe the Bubonic Plague started in Europe in which year?", "A. 1347", "B. 1350", "C. 1353", "D. 1348", "A"},
{"What was the name of the battle in the Pacific fought between the U.S. Navy and the Imperial Japanese Navy in June 1942?", ""},
{"How old was Queen Elizabeth II when she became the queen of England?", "A. 31", "B. 25", "C. 28", "D. 30", "B"};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return historyques[randNum]; //SHOULD print the randNum row's question
};
void codingq(){
string codingques[5][6]=
{"What is a correct syntax to output (Hello World)" ,"A. Console.WriteLine(Hello World)", "B.System.out.printIn(Hello World)"," C. print (Hello World), " "D. cout << (Hello World);","D")},,
{"Which of the following operators hasd the highest precedence?", "A. !", "B. *", "C. %", "D. =", "A"},
{"To use the predefined function fmod, the program must include the header file ___.", "A. <cctype>", "B. <iostream>", "C. <cmath>", "D. <cstdlib>", "C"},
{"The output of the staements: cout<<pow(2.0,pow(3.0,1.0)); is ____.", "A. 6.0", "B. 7.0", "C. 8.0", "D. 9.0", "C"},
{"Which executed first in a do...while loop?", "A. The body of the loop", "B. The increment statement", "C. "};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return codingques[randNum]; //SHOULD print the randNum row's question
};
void scienceq(){
string scienceques[5][6]=
{"What two mammals lay eggs?", "A. Bats and Squirrels", "B. Platypus and Bats", "C. Squirrels and Enchida", "D. Platpus and Enchidna", "D"},
{"What is the largest ocean on Earth?", "A. The Atlantic Ocean", "B.The Indian Ocean", "C. The Pacific Ocean", "D. The Southern Ocean", "C"},
{"What is the largest desert on Earth?","A. Arabia", "B.Sahara", "C. Kalahari", "D.Antartica","D" },
{"What gives human hair, skin, and nails their color?","A. Keratin", "B. Melatonin", "C. Glucose", "D. Melanin","D"},
{"What is the largest organ in the human body?","A. Skin", "B, Heart", "C. Stomach", "D. Lungs", "A"};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return scienceques[randNum]; //SHOULD print the randNum row's question
};
void popq(){
string popques[5][6]=
{"Which actor voiced Mufasa in The Lion King and Darth Vader in the original Star Wars trilogy?", "A. James Earl Jones", "B. Eddie Murphy", "C. Jesse McCartney", "D. Christopher Borger","A"},
{"What is Taylor Swift’s most popular album?", "A.. Evermore", "B. Red"},
{"What high school subject did Walter White teach in Breaking Bad?","A. Math", "B. History", "C. Chemistry", "D. English", "C"},
{"What musical features the characters Elphaba, Galinda, and Fiyero?", "A. Hamilton", "B. Chicago","C. Wicked","D. The Phantom of the Opera","C"},
{"Which Netflix series follows a group of teenagers that takes place in the 80s?","A. You", "B. Ginny & Georgia", "C. Outer Banks", "D. Stranger Things","D"};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
return popques[randNum]; //SHOULD print the randNum row's question
};

void askQuestion(string question){
    cout << question[0];
    cout << question[1];
    cout << question[2];
    cout << question[3];
    cout << question[4];
    cout << endl;
    cout << "Enter your answer(A, B, C, D): " << endl;
}
void checkAnswer(){
    char answer;
    cin >> answer;
if (answer == question[5]){
    cout << "Correct!";
    placeMark();
}
else {
    cout << "Incorrect."
}}

void placeMark(){
    int row, col;
    char mark;
    cout << "Enter the coordinates you'd like to place your mark on. Example: 0 0" << endl;
    cin >> row >> col;
    while ((row>2 || row<0)||(col>2 || col<0)){ //input validation for coordinates
        cout << "Please input valid coordinates: " << endl;
        cin  >> row >> col;
    }
    cout << "Enter what mark you'd like to place (X or O): ";
    cout << endl;
    cin >> mark;
    while (mark !='O' && mark !='X'){ //input validation for mark
    cout << "Please input a valid mark: " << endl;
    cin >> mark;
}
    board[row][col]=mark;
    printBoard();
}

void checkWin(){
    bool win;
    if ((board[0][0] == 'X')&& (board[1][1] == 'X')  && (board[2][2] == 'X')||(board[0][0] == 'X')&& (board[1][0] == 'X')  && (board[2][0] == 'X')|| (board[0][1] == 'X')&& (board[1][1] == 'X')  && (board[2][1] == 'X') || (board[0][2] == 'X')&& (board[1][2] == 'X')  && (board[2][2] == 'X') || (board[0][0] == 'X')&& (board[0][1] == 'X')  && (board[0][2] == 'X') || (board[1][0] == 'X')&& (board[1][1] == 'X')  && (board[1][2] == 'X') || (board[2][0] == 'X')&& (board[2][1] == 'X')  && (board[2][2] == 'X') ){
        win = true;
    }
    else if ((board[0][0] == 'O')&& (board[1][1] == 'O')  && (board[2][2] == 'O')||(board[0][0] == 'O')&& (board[1][0] == 'O')  && (board[2][0] == 'O')|| (board[0][1] == 'O')&& (board[1][1] == 'O')  && (board[2][1] == 'O') || (board[0][2] == 'O')&& (board[1][2] == 'O')  && (board[2][2] == 'O') || (board[0][0] == 'O')&& (board[0][1] == 'O')  && (board[0][2] == 'O') || (board[1][0] == 'O')&& (board[1][1] == 'O')  && (board[1][2] == 'O') || (board[2][0] == 'O')&& (board[2][1] == 'O')  && (board[2][2] == 'O')){
        win = true;
    }
    else {
        win = false;
    }
}


