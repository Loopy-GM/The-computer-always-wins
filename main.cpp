#include <iostream>
using namespace std;

int math(int number);

int main() {
int total = 1;
int Pnum;
int computerGuess;

cout<<"Lets play a little game :)"<<endl<<endl;
cout<<"The game is called 100 the first to get to 100 wins."<<endl;
cout<<"The rules of the game are we can only say numbers 1-10 nothing bigger or less and we  each take a turn going."<<endl<<endl;
cout<<"Okay ill go first. 1"<<endl;

while (total != 100){
  cout<<"Total number: "<<total<<endl;
  cin>>Pnum;
  total+=Pnum;
  computerGuess = math(Pnum);//call
  cout<<"ok, my guess is: "<<computerGuess<<endl;
  total += computerGuess;

  }
cout<<endl;
cout<<endl;
cout<<"Computer Wins!!!!!"<<endl;
}

int math(int number){
  int comptotal;

  comptotal= 11-number;

  return comptotal;
}
