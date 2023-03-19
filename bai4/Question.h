#include<iostream>
using namespace std;

class Question{
    private:
string question;
string answer1;
string answer2;
string answer3;
string answer4;
int correct_answer;
int questions_number = 10;
    public: 
    Question(string question, string answer1, string answer2, string answer3, string answer4, int correct_answer){
  this->question = question;
  this->answer1 = answer1;
  this->answer2 = answer2;
  this->answer3 = answer3;
  this->answer4 = answer4;
  this->correct_answer = correct_answer;      
    }
    void display();
    bool answer(int user_answer);
};