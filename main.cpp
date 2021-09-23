// 4 ZADATAK PRVI KOJI NIJE DELJIV

#include <iostream>
#include <vector>

using namespace std;


int main(){

    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long k;

    while(cin >> k){
        int l = 0, d = n - 1;
        while(l <= d){ // svi neispitani elementi
            int s = l + (d - l) / 2;
            if(a[s] % k != 0)
                d = s - 1;
            else
                l = s + 1;
        }
        cout << l << '\n';
    }

    return 0;
}
