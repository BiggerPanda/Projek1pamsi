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
    
    Mergesort mer;
    Introsort intr;
   
    
   
    Arrofarr arr(n,0);
  

      
        cout << "start";
        arr.Quicks();
        cout << "end";
        //wypisanie posortowanych elementów
   

        cin.ignore();
        cin.get();
        return 0;
 
   
}


