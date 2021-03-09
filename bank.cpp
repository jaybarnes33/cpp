#include <iostream>

using namespace std;

void name()
{

char firstName[20];

char secondName[40];

cout<<"DEAR CUSTOMER PLEASE ENTER YOUR FIRST NAME"<<endl;

cin>>firstName;

cout<<"DEAR CUSTOMER PLEASE ENTER YOUR SECOND NAME"<<endl;

cin>>secondName;

}

void login()
{

int password;

cout<<"PLEASE ENTER YOUR PASSWORD(159357)"<<endl;

cin>>password;

if (password == 159357)
{
    cout<<"ACCESS GRANTED"<<endl;
}
else
{
    cout<<"ACEESS DENIED"<<endl;
}

int credentials = password;

cout<<credentials;

}

void accountbalance()
{
    double totaldeposit;

    double withdrawalAmount;

    cout<<"DEAR CUSTOMER PLEASE ENTER YOUR BALANCE"<<endl;

    cin>>totaldeposit;

    cout<<"DEAR CUSTOMER PLEASE ENTER YOUR WITHDRAWAL AMOUNT"<<endl;

    cin>>withdrawalAmount;

    double balance = totaldeposit-withdrawalAmount;

    cout<<balance;

}

void amountWithdrawn()
{
    double cashOut;

    double totaldeposit;

    cout<<"DEAR CUSTOMER ENTER THE AMOUNT YOU WANT TO TAKE"<<endl;

    cin>>cashOut;

    double withdrawalAmount = totaldeposit-cashOut;
    
    cout<<withdrawalAmount;
}

void interest()

{

    double interestAmount;

    double balance;

    cout<<"ENTER YOUR BALAnCE"<<endl;

    cin>>balance;

    interestAmount = balance*0.012;

    cout<<interestAmount;
}

void accountSettings()
{
    char nameChanger;

    int login;

    cout<<"PLEASE ENTER YOUR NEW USERNAME"<<endl;

    cin>>nameChanger;

    cout<<"PLEASE ENTER YOUR NEW USER LOGIN CREDENTIALS"<<endl;

    cin>>login;
}

void accountDetails()
{
int x;

cout<<"PRESS 1 FOR ACCOUNT BALANCE"<<endl;

cout<<"PRESS 2 FOR WITHDRAWAL"<<endl;

cout<<"PRESS 3 FOR INTERESTAND DIVIDEND"<<endl;

cout<<"PRESS 4 FOR ACCOUNT SETTINGS"<<endl;

cin>>x;

if (x == 1)
{
    accountbalance();
}

else if (x == 2)
{
    amountWithdrawn();
}

else if (x == 3)
{
    interest();
}

else if (x == 4)
{
    accountSettings();
}

else
{
    cout<<"error or invalid input"<<endl;
}

}

void menu()
{
    int a;

    cout<<"PRESS 1 FOR ACCOUNT DETAILS"<<endl;

    cout<<"PRESS 2 FOR CUSTOMERS NAME"<<endl;

    cout<<"PRESS 3 FOR BANKS CREDENTIALS AND LOGIN "<<endl;

    cin>>a;

    if (a == 1)
    {
        accountDetails();
    }
    
    else if (a == 2)
    {
        name();
    }

    else if (a == 3)
    {
        login();
    }
    
    else
    {
        cout<<"Invalid selection"<<endl;
    }
    

}

int main()

{

menu();

name();

login();

accountDetails();

}



























