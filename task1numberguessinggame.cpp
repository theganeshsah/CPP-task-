#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main()
{
srand(time(0));

int computerchoice = 1 + rand() % 10;
int guess;
int attemp = 0;
cout<<"Welcome to the number Guessing Game! "<<endl;
cout<<"Try to guess the computer choice between 1 to 10 "<<endl;
do{
    cout<<"Enter your guess: ";
    cin>> guess;
    if (guess>10 || guess<0){
        cout<<"invalid number . please enter a valid number"<<endl;
        continue;
    }
    attemp++;
    if (guess == computerchoice){
        cout<<"Congratulations! You guess the correct number in "<<attemp<<" attemps"<<endl;

    }
    else if(guess<computerchoice){
        cout<<"Too low! Try again."<< endl;
    }
    else{
        cout<<"Too high! Try again. "<<endl;
    }
}
while(guess != computerchoice);

}