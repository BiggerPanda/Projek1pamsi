// Tablicesortowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Quicksort.h"
#include "Divideandconquest.h"
#include"IntigerArr.h"

int main()
{
    
    using namespace std;

    IntigerArr tab1(10000);
    IntigerArr tab2(50000);
    tab1.~IntigerArr();
    tab2.~IntigerArr();
    int* tab; 
    int* tab_pom; 
    int n;

        //cout<<"Ile liczb będziesz chciał posortować? ";
        cin >> n;
        tab = new int[n]; //przydzielenie pamięci na elementy tablicy
        tab_pom = new int[n];
        
       // wczytanie liczb
        for (int i = 0; i < n; i++)
            cin >> tab[i];

        for (int i = 0; i < n; i++)
            cout << tab[i] << " ";
        cout << endl;

        divideandsort(tab, 0, n - 1,tab_pom);

        //wypisanie posortowanych elementów
        for (int i = 0; i < n; i++)
            cout << tab[i] << " ";

        cin.ignore();
        cin.get();
        return 0;
 
   
}


