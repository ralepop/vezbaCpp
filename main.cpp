#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    long n, i, zbirH = 0, zbirV = 0;
    cin >> n >> i;
    

    // za horizontalu
    long pocetakBrojanjaH = i * n;
    long krajBrojanjaH = pocetakBrojanjaH + (n - 1); 
    for(long a = pocetakBrojanjaH; a <= krajBrojanjaH; a++){
        zbirH += a;
    }

    // za vertikalu
    long pocetakBrojanjaV = i;
    long krajBrojanjaV = (pow(n, 2) - 1) - (n - i - 1);
    for(long a = pocetakBrojanjaV; a <= krajBrojanjaV; a += n){
        zbirV += a;

    }

    cout << zbirH << endl << zbirV;

    return 0;
}