#include "Question.h"

int main(){
     Question questions[10] = {
        Question("What is the capital of France?", "Paris", "Berlin", "Rome", "Madrid", 1),
        Question("What is the highest mountain in the world?", "Mount Everest", "K2", "Kangchenjunga", "Lhotse", 1),
        Question("What is the largest ocean in the world?", "Pacific Ocean", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean", 1),
Question("What is the currency of Japan?", "Yen", "Dollar", "Euro", "Pound", 1),
Question("What is the largest country in the world by area?", "Russia", "Canada", "China", "USA", 1),
Question("What is the main language spoken in Brazil?", "Portuguese", "Spanish", "English", "French", 1),
Question("Who invented the telephone?", "Alexander Graham Bell", "Thomas Edison", "Benjamin Franklin", "Albert Einstein", 1),
Question("What is the chemical symbol for gold?", "Au", "Ag", "Fe", "Cu", 1),
Question("What is the highest score in a game of ten-pin bowling?", "300", "200", "100", "50", 1),
Question("Who wrote the novel 'To Kill a Mockingbird'?", "Harper Lee", "William Faulkner", "Ernest Hemingway", "F. Scott Fitzgerald", 1)
};
int player1_point = 0;
int player2_point = 0;
for(int i=1; i<=5; i++){
   cout << "Question " << i << ": ";
questions[i].display();
   int user_answer;
   if(i%2 != 0){
    cout << "Player 1 - ";
   }else{
    cout << "Player 2 - ";
   }
    cout << "Enter answer(1,2,3,4): "; cin >> user_answer;
   if(questions[i].answer(user_answer) == 1){
    if(i%2 != 0){
        player1_point ++;
    }else{
        player2_point ++;
    }
   }
}
cout << "player 1 score: " << player1_point << endl;
cout << "player 2 score: " << player2_point << endl;
if(player1_point > player2_point){
    cout << "Player 1 wins !";
}else if(player2_point > player1_point){
    cout << "Player 2 wins !";
}else {
    cout << "It's a tie !";
}
    return 0;
}