// 2 ZADATAK TROBOJKA



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unosNiza(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){ cin >> a[i]; }
    return a;
}


void podelaNiza(vector<int>& niz, int A, int B){
    int l = 0, i = 0, d = niz.size();
    while(i < d){
        if(niz[i] < A){
            swap(niz[i++], niz[l--]);
        }else if(niz[i] <= B){
            i++;
        }else{
            swap(niz[i], niz[--d]);
        }
    }
}

void ispisNiza(const vector<int>& a, int A, int B){
    int i = 0;

    while(i < a.size() && a[i] < A){
        cout << a[i++] << " ";
    }
    cout << endl;

    while(i < a.size() && a[i] <= B){
        cout << a[i++] << " ";
    }
    cout << endl;

    while(i < a.size()){
        cout << a[i++] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = unosNiza();
    int A, B;
    cin >> A >> B;
    podelaNiza(a, A, B);
    ispisNiza(a, A, B);

    return 0;
}
