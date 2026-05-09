#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int freq[1001] = {0};
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            freq[x]++;
        }
        int alex = 0, bob = 0;
        for(int val = 1000; val >= 1; val--){
            if(freq[val] >= 1){
                alex += val;
            }
            if(freq[val] >= 2){
                bob += val;
            }
        }
        if(alex > bob){
            cout << "Alex\n";
        }
        else{
            cout << "Bob\n";
        }
    }
    return 0;
}