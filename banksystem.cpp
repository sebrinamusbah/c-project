#include <iostream>
#include <iomanip>

using namespace std;

void ShowBalance(double balance)
{
    cout<<"Your Balance is "<<std::setprecision(2)<<std::fixed<<balance<<" BIRR"<<endl;

}
double DepositMoney()
{
    cout << "Enter your Debosit Amount:" << endl;
    double amount=0;
    cin>>amount;


    if (amount>0)
    {
        return amount;
    }
    else
    {
        cout<<"Invalid amount";

    }
    }

    double WithdrawMoney(double balance)
    {

        double amount=0;

        cout << "Enter your Withdraw Amount:" << endl;

        cin>>amount;

        if(amount > balance)
        {
            cout<<"Insufficient amount"<< endl;

             return 0;

        }
        else if (amount<0)
        {
            cout<<"Invalid amount"<< endl;

               return 0;


        }
        else
        {
            return amount;
        }
    }



    int main()
    {
        double balance=0;
        int choice;

        do
        {

            cout << "***********************************************" << endl;

            cout << "1.Show Balance" << endl;
            cout << "2.Deposit Money" << endl;
            cout << "3.Withdraw Money" << endl;
            cout << "4.Exit" << endl;
            cout << "Enter your choice:" << endl;

            cin>>choice;
            cin.clear();
            switch(choice)
            {

            case 1:
                ShowBalance(balance);
                break;

            case 2:
                balance += DepositMoney();
                ShowBalance(balance);
                break;

            case 3:
                balance -= WithdrawMoney(balance);
                 ShowBalance(balance);
                break;

            case 4:
                cout<<"Thanks For Visiting"<<endl;

            default:
                cout<<"Invalid choice"<<endl;

                cout << "***********************************************" << endl;
            }
        }
        while(choice !=4 );

        return 0;

    }
