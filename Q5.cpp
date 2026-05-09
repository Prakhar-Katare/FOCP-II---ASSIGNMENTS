#include<iostream>
using namespace std;
class MovieTicket{
    int X=0; //customer ID
    int Y; //movie ID
    public:
    int AvailableSeats1 = 100;  //there are two movies in the theatre: 1 and 2
    int AvailableSeats2 = 100;
    void Action(){
    string action;//what does the customer want to do?
    abc:
    cout<<"Enter action(book/cancel/check/available):";
    cin>>action;
    cin>>X;//0,1,2,12
    if(action =="book"){
        cout<<"enter movie ID (1 or 2):";
        cin>>Y;
        if(Y==1){
            if(X==1 || X==12 || AvailableSeats1==0){
                cout<<"false";
            }
            else{
                AvailableSeats1--;
                if(X==2)X=12;
                else X=1;
                cout<<"true";
            }
        }
        else if(Y==2){
            if(X==2 || X==12 || AvailableSeats2==0){
                cout<<"false";
            }
            else{
                AvailableSeats2--;
                if(X==1)X=12;
                else X=2;
                cout<<"true";
            }
        }
    }
    else if(action == "cancel"){
            cout << "Enter movie ID to cancel: ";
            cin >> Y;

            if(Y == 1){
                if(X == 1){
                    AvailableSeats1++;
                    X = 0;
                    cout << "true";
                }
                else if(X == 12){
                    AvailableSeats1++;
                    X = 2;
                    cout << "true";
                }
                else{
                    cout << "false";
                }
            }
            else if(Y == 2){
                if(X == 2){
                    AvailableSeats2++;
                    X = 0;
                    cout << "true";
                }
                else if(X == 12){
                    AvailableSeats2++;
                    X = 1;
                    cout << "true";
                }
                else{
                    cout << "false";
                }
            }
        }

        else if(action == "check"){
            cout << "Booked movie ID(s): " << X;
        }

        else if(action == "available"){
            cout << "Enter movie ID: ";
            cin >> Y;

            if(Y == 1){
                cout << "Available seats: " << AvailableSeats1;
            }
            else if(Y == 2){
                cout << "Available seats: " << AvailableSeats2;
            }
        }

        else{
            cout << "Invalid action";
        }

        int terminate;
        cout << endl << "Enter 1 to exit, 0 to continue: ";
        cin >> terminate;

        if(terminate == 0){
            goto abc;
        }
    }
};

int main(){
    MovieTicket mt;
    mt.Action();
    return 0;

}       