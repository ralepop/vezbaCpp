#include <iostream>
using namespace std;

int main(){
    
    int zbir = 0;
    int brojevi[] = {3, 5, 6, 7, 1, 2};
    for (int i = 0; i < *(&brojevi + 1) - brojevi; i++)
    {
        zbir += brojevi[i];
    }
    cout << zbir;
    

    
    return 0;
}
