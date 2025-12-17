#pragma once
#include <string>
using namespace std;

class user{ //class declaration
    string name; //private data members to hold info about the user
    char mark;

    public:
    void setData(string name, char mark); //allows user to set their data
    string getName(); //returns user's name
    char getMark(); //returns user's mark
    user(); //default constructor

};

//class implementation
void user::setData(string n, char m){
name = n;
mark = m;
}
string user::getName(){
    return name;
}
char user::getMark(){
    return mark;
}
user::user(){
    name = "Player";
    mark = 'X';
}