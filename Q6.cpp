#include<iostream>
using namespace std;
class Bank{
    int X=0; //user ID
    int balance=0; //initial balance
    public:
    void Action(){
        string action;
        abc:
        cout<<"Enter action(create/debit/credit/balance):";
        cin>>action;
        cout<<"Enter user ID";
        cin>>X;
        if(action== "create"){
            int Y;
            cout<<"Enter amount:";
            cin>>Y;
            if(balance==0){
                balance=Y;
                cout<<"true";
            }
            else{
                balance+=Y;
                cout<<"false";
            }
        }
        else if(action=="debit"){
            int Y;
            cout<<"Enter amount to debit:";
            cin>>Y;
            if(balance>=Y){
                balance-=Y;
                cout<<"true";
            }
            else{
                cout<<"false";
            }
        }
        else if(action=="credit"){
            int Y;
            cout<<"Enter the amount to credit:";
            cin>>Y;
            if(balance>0){
                balance+=Y;
                cout<<"true";
            }
            else{
                cout<<"false";
            }
        }
        else if(action=="balance"){
            if(balance==0){
                cout<<-1;
            }
            else{
                cout<<"Current balance:"<<balance;
            }
        }
        else{
            cout<<"Invalid action";
        }
        int terminate;
        cout<<"Enter 1 to exit, 0 to continue:"<<endl;
        cin>>terminate;
        if(terminate==0){
            goto abc;
        }
    }

};
int main(){
    Bank b1;
    b1.Action();
    return 0;
}