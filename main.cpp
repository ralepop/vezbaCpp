#include <iostream>
using namespace std;

int main(){
    
    long long k;
    cin >> k;

    long long pocetak = 1;
    long long brojElemenata = 1;

    for (int i = 1; i < k; i++){
        pocetak += brojElemenata;
        brojElemenata += 2;
    }

    long long zbirRedaTrougla = 0;
    for (long long i = pocetak; i < pocetak + brojElemenata; i++){
        zbirRedaTrougla += i;
    }
    
    cout << zbirRedaTrougla << endl;
   

    return 0;
}
