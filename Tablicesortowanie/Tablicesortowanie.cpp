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

    IntigerArr tab1(1000000);
    Mergesort mer;
    Introsort intr;
   
    
    
    int* tab; 
    int* tab_pom; 
    int n;

       // //cout<<"Ile liczb będziesz chciał posortować? ";
       // cin >> n;
        tab = new int[1000000]; //przydzielenie pamięci na elementy tablicy
        tab_pom = new int[1000000];
        
       // wczytanie liczb
       // for (int i = 0; i < n; i++)
       //     cin >> tab[i];

       // for (int i = 0; i < n; i++)
       //     cout << tab[i] << " ";
       // cout << endl;
        cout << "start";
       
        mer.divideandsort(tab1.tab, 0, 1000000- 1,tab_pom);
        cout << "end";
        //wypisanie posortowanych elementów
   

        cin.ignore();
        cin.get();
        return 0;
 
   
}


