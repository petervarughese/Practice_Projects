#include <stdlib.h>
#include <iostream>

/*
Rock Paper Scissors Lizard Spock (The Big Bang Theory)
*/
int main(){
  // Live long and prosper
  srand (time(NULL));
  int computer = std::rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot!\n";

  std::cin >> user;

  if (user == 1){
    std::cout << "You chose ✊!\n";
  }
  else if (user == 2){
    std::cout << "You chose ✋\n";
  }
  else if (user == 3){
    std::cout << "You chose ✌️\n";
  }
  else{
    std::cout <<"Invalid answer!\n";
  }

  if (computer == 1){
    std::cout << "Computer chose ✊!\n";
  }
  else if (computer == 2){
    std::cout << "Computer chose ✋\n";
  }
  else if (computer == 3){
    std::cout << "Computer chose ✌️\n";
  }
  else{
    std::cout <<"Invalid answer!\n";
  }
if (user == computer){
  std::cout << "It is a tie!\n";
}
else if (user == 1 and computer == 3 or user == 2 and computer == 1){
  std::cout << "User wins!\n";
}
else{
  std::cout << "Computer wins!\n";
}
}

