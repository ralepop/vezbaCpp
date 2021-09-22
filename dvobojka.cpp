#include <iostream>
#include <algorithm>
using namespace std;
 
 
void parNepar(int niz[], int velicina)
{
    int levo = 0, desno = velicina-1;
    while (levo < desno)
    {
        while (niz[levo] % 2 == 0 && levo < desno)
            levo++;
 
        while (niz[desno] % 2 == 1 && levo < desno)
            desno--;
 
        if (levo < desno)
        {
            swap(niz[levo], niz[desno]);
            levo++;
            desno--;
        }
    }
}
 
/* Driver code */
int main()
{   
    int n;
    cin >> n;
    int niz[n];
    for(int i = 0; i < n; i++){
        cin >> niz[i];
    }
    int velicinaNiza = sizeof(niz)/sizeof(niz[0]); 
    int i = 0;
    cout <<"Niz pre promene ";
    for (i = 0; i < velicinaNiza; i++)
        cout << niz[i] << " ";
 
    parNepar(niz, velicinaNiza);
    
    cout << endl;

    cout <<"Niz nakon promene ";
    for (i = 0; i < velicinaNiza; i++)
        cout << niz[i] << " ";
 
    return 0;
}