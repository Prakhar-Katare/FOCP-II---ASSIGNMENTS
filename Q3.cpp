#include<iostream>
using namespace std;
int main(){
    int L,R;
    cin>>L>>R;
    int x=0;
    for(int i=L; i<=R; i++){
        x^=i;
    }
    if(x%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}