#include <iostream>

using namespace std;

int main()
{
    cout <<"***************** CALCULATORE*****************" << endl;
    cout <<"Enter (+ -  * / )" <<  endl;

   char op;
    double num1;
    double num2;

    cin>>op;
     cout <<"Enter num 1" <<  endl;
     cin>>num1;
     cout <<"Enter num 2" <<  endl;
    cin>>num2;

    switch(op){
    case '+':
    cout<<num1+num2<<endl;
    break;

    case '-':
    cout<<num1-num2<<endl;
    break;

     case '*':
    cout<<num1*num2<<endl;
    break;

     case '/':
    cout<<num1/num2<<endl;
    break;

    default:
    cout<<" plese enter the correct operatore (+ -  * / )"<<endl;

    }


    return 0;
}
