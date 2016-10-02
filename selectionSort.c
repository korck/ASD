#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tabSize = argc-1;
    int table[tabSize+1];
    int i,j, *min;

    for (i=0; i<tabSize; i++)       //Wypełnienie tablicy danymi
        table[i] = atoi(argv[i+1]);
    
    for (i=0; i<tabSize; i++) {     //Przelot przez tablicę
        min = table+tabSize;
        *min = table[i];
        for(j=i; j<tabSize; j++) {  //Szukanie minimum
            if (table[j] < *min)
                min = &table[j];
        }
        *(table+tabSize) = table[i]; //Podmiana komórek 
        table[i] = *min;
        *min = *(table+tabSize);
    }                               
    for (i=0; i<tabSize; i++) printf("%d ", table[i]);  //Wylot posortowanych danych
    return 0;
}