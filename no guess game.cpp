#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "********** Number Guesing Game **********" << endl;
    int num;#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "********** Number Guesing Game **********" << endl;
    int num;
    int guess;
    int tries;


    srand(time(NULL));
    num=(rand()%100)+1;
    cout << "Guess No Between 1 & 100 If You Gate Correct Answer in 3 tries You Win Else You Loos" << endl;

    do
    {

        cout << "Enter Your Guess" << endl;

        cin>>guess;
        tries++;

        if(guess>num)
        {
            cout<<"high"<<endl;
        }
        else if(guess<num)
        {
            cout<<"low"<<endl;
        }

        else
        {
            cout<<"You Found Correct Answer in "<<tries<<" tries"<<endl;

        }


    }
    while(guess!=num);
if (tries<=10){
    cout<<"You win"<<endl;
}
else{
cout<<"You loose because tries "<<tries<<endl;
}
cout << "************************************************************" << endl;
    return 0;
}

    int guess;
    int tries;


    srand(time(NULL));
    num=(rand()%100)+1;
    cout << "Guess No Between 1 & 100 If You Gate Correct Answer in 3 tries You Win Else You Loos" << endl;

    do
    {

        cout << "Enter Your Guess" << endl;

        cin>>guess;
        tries++;

        if(guess>num)
        {
            cout<<"high"<<endl;
        }
        else if(guess<num)
        {
            cout<<"low"<<endl;
        }

        else
        {
            cout<<"You Found Correct Answer in "<<tries<<" tries"<<endl;
           
        }


    }
    while(guess!=num);
if (tries<=10){
    cout<<"You win"<<endl;
}
else{
cout<<"You loose because triues "<<tries<<endl;
}

    return 0;
}
