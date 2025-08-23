#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char player);
void chooseWinner(char player,char computer);

int main()
{
    char computer;
    char player;
    player=getUserChoice();
    cout<<"YOUR CHOICE: ";
    showChoice(player);

    computer=getComputerChoice();
     cout<<"COMPUTER CHOICE: ";

     showChoice(computer);
    chooseWinner(player,computer);
    chooseWinner(player,computer);


    return 0;
}
char getUserChoice(){

    char player;
    cout << "          ROCK PAPER SCISSOR GAME " << endl;
    do{
    cout << "*********************************************" << endl;
    cout << "CHOOSE ONE OF THE FOLLOWING" << endl;
    cout << "'r'=FOR ROCK" << endl;
    cout << "'P'=FOR PAPER" << endl;
    cout << "'S'=FOR SCISSOR" << endl;

    cin>>player;

    }while(player !='r' && player !='p' && player !='s');

return player;
}
void showChoice(char player){

    switch(player){
    case 'r':cout<<"ROCK"<<endl;
    break;

     case 'p':cout<<"PAPRER"<<endl;
    break;

     case 's':cout<<"SCISSOR"<<endl;
    break;

    }
}

char  getComputerChoice(){
    srand(time(0));
    int num =rand()%3+1;

    switch (num){
    case 1:return'r';
    case 2:return'p';
    case 3:return's';

    }

}

void chooseWinner(char player,char computer){
    switch(player){
        case 'r':if(computer=='r'){
                    cout<<"It's a tie!"<<endl;
                    }
                    else if(computer=='p'){
                    cout<<"You lose!"<<endl;
                    }
                    else {
                    cout<<"You win!"<<endl;
                    }
                    break;
         case 'p':if(computer=='r'){
                    cout<<"You win!"<<endl;
                    }
                    else if(computer=='p'){
                    cout<<"It's a tie"<<endl;
                    }
                    else {
                    cout<<"You lose!"<<endl;
                    }
                    break;
        case 's':if(computer=='r'){
                    cout<<"You lose!"<<endl;
                    }
                    else if(computer=='p'){
                     cout<<"You win!"<<endl;
                    }
                    else {
                    cout<<"It's a tie"<<endl;
                    }

                    break;

    }
}
void chooseWinner(char player,char computer)
