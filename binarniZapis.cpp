#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <stdio.h>

using namespace std;

// 123456 00000000000000011110001001000000 
// 16777215 00000000111111111111111111111111

void decimalanUBinaran(int n){
    int binaran[32];
    int i = 0;
    while(n > 0){
        binaran[i] = n % 2;
        n /= 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--){
        cout << binaran[j];
    }
    
}

int main(){

    int n = 123456;
    decimalanUBinaran(n);

    return 0;
}
