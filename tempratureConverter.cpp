#include <iostream>

using namespace std;

int main()
{
    double temp,resulet;
    char unit;
    cout << "**************************Temprature conversiton**************************" << endl;
    cout << "F=farahnite" << endl;
    cout << "C=celciouse" << endl;
    cout << "choose F if you want to change temperature in to farahnite " << endl;
    cout << "choose C if you want to change temperature in to celciouse " << endl;

    cin>>unit;



    if(unit=='C'||unit=='c'){
        cout << "Enter the temprature in fahranite" << endl;

        cin>>temp;
        resulet=temp-32/1.8;
        cout<<"the temprature in celcious="<<resulet<<endl;

    }

    if(unit=='F'||unit=='f')
    {
        cout << "Enter the temprature in celciouse" << endl;

        cin>>temp;
        resulet=temp*1.8+32;
        cout<<"the temprature in farahnite ="<<resulet<<endl;

    }
cout << "****************************************************" << endl;
    return 0;
}
