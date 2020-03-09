// Tablicesortowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Quicksort.h"
#include "Divideandconquest.h"
#include"IntigerArr.h"
#include"Introsort.h"

int main()
{
    
    using namespace std;
    int n = 100;
    IntigerArr tab1(n);
    Mergesort mer;
    Introsort intr;
   
    
    
    int* tab; 
    int* tab_pom; 
    

       // //cout<<"Ile liczb będziesz chciał posortować? ";
       // cin >> n;
        tab = new int[n]; //przydzielenie pamięci na elementy tablicy
        tab_pom = new int[n];
        
       // wczytanie liczb
       // for (int i = 0; i < n; i++)
       //     cin >> tab[i];

        for (int i = 0; i < n; i++)
            cout << tab1.tab[i] << " ";
        cout << endl;
        cout << "start";
       
        intr.introsort_al(tab1.tab, 0, n - 1, intr.depthlimit);
        cout << "end";
        //wypisanie posortowanych elementów
   

        cin.ignore();
        cin.get();
        return 0;
 
   
}


