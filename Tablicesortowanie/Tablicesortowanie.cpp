// Tablicesortowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Quicksort.h"

int main()
{
    
    using namespace std;


        int* tab, n;

        //cout<<"Ile liczb będziesz chciał posortować? ";
        cin >> n;
        tab = new int[n]; //przydzielenie pamięci na elementy tablicy

        
        //wczytanie liczb
        for (int i = 0; i < n; i++)
            cin >> tab[i];

        for (int i = 0; i < n; i++)
            cout << tab[i] << " ";
        cout << endl;

        quicksort_al(tab, 0, n - 1);

        //wypisanie posortowanych elementów
        for (int i = 0; i < n; i++)
            cout << tab[i] << " ";

        cin.ignore();
        
        return 0;
    
}


