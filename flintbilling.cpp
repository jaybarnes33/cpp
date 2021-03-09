#include <iostream>

#include <string>

using namespace std;

void customer()
{
     char firstName[30];

     char secondName[50];

    cout<<"PLEASE WHAT IS YOUR FIRST NAME"<<endl;

    cin>>firstName;

    cout<<"PLEASE WHAT IS YOUR SURNAME "<<endl;

    cin>>secondName;

    
}

void bill()

{

double itemPrice;

double numberofItems;

double amountPaid;

cout<<"PLEASE ENTER THE UNIT PRICE OF THE GOODS"<<endl;

cin>>itemPrice;

cout<<"PLEASE ENTER THE NUMBER OF ITEMS PURCHASED "<<endl;

cin>>numberofItems;


double totalCost = itemPrice*numberofItems;

cout<<totalCost;

}

double balance()
{

double amountPaid;

double totalCost;

cout<<"PLEASE ENTER THE AMOUNT PAID BY THE CUSTOMER"<<endl;

cin>>amountPaid;

double totalBalance= amountPaid-totalCost;

cout<<totalBalance;

}

void VAT()
{

double totalCost;

double tax =totalCost*0.5;

cout<<tax;

}

void discount()
{
double totalCost;

double freebie = totalCost*0.01;

cout<<freebie;

}


void billingMenu()
{
int x;

cout<<"PRESS 1 FOR THE GOODS BILL"<<endl;

cout<<"PRESS 2 FOR YOUR BALANCE"<<endl;

cout<<"PRESS 3 FOR THE TAX ON YOUR PURCHASED GOODS"<<endl;

cout<<"PRESS 4 TO CHECK YOUR DISCOUNT"<<endl;

cout<<"PRESS 5 TO VALIDATES YOUR CREDENTIALS"<<endl;

cin>>x;

if (x == 1)
{
    bill();
}
else if (x == 2)
{
    balance();
}
else if (x == 3)
{
    VAT();
}
else if (x == 4)
{
    discount();
}
else if (x == 5)
{
    customer();
}
else if (x != 1,2,3,4,5)
{
    cout<<"INVALID SELECTION"<<endl;
}

}

int main()

{

billingMenu();

bill();

balance();

VAT();

discount();

customer();


}
