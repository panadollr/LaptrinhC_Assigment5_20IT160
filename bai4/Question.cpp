#include "Question.h"

void Question::display(){
    cout << this->question << endl;
    cout << this->answer1 << endl;
    cout << this->answer2 << endl;
    cout << this->answer3 << endl;
    cout << this->answer4 << endl;
}

bool Question::answer(int user_answer){
    if(user_answer == this->correct_answer){
        cout << "Correct" << endl;
        return true;
    }else {
        cout << "Incorrect" << endl;
        return false;
    }
}