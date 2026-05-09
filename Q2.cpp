#include <iostream>
using namespace std;
int main(){
	int max = 10000000;
    int *spf = new int[max + 1];
    for (int i = 1; i <= max; i++){
        spf[i] = i;
    }
    for (int i = 2; i * i <= max; i++){
        if (spf[i] == i){
            for (int j = i * i; j <= max; j += i) {
                if (spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        int k = 0;
        while (n > 1){
            int p = spf[n];
            k++;
            while (n % p == 0)
                n /= p;
            }
        int ans = 1;
        for (int i = 0; i < k; i++){
            ans *= 2;
        }
        cout << ans << '\n';
    }

    return 0;
}