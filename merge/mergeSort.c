/*
 Program sortujący poprzez scalanie
 */
#include <stdio.h>
#include <stdlib.h>

void sortMerge(int *_tab1, int *_tab2, int _size1, int _size2) {
    int temp[_size1+_size2];
    int i=0,
        j=0,
        k=0;
        while( i < (_size1) && j < (_size2)) {
            if (*(_tab1+i) < *(_tab2+j)) {
                temp[k++] = *(_tab1+i++);
            } else {
                temp[k++] = *(_tab2+j++);
            }
        }
        while(i < (_size1))
            temp[k++] = *(_tab1+i++);
	while(j < (_size2))
            temp[k++] = *(_tab2+j++);
    for (i = 0; i<_size1+_size2; i++)
        *(_tab1+i) = temp[i];
}

void merge (int *table, int size) {
    if (size > 2) {    
        int size1 = size-(size/2),
            size2 = size/2;
        int *tab1 = table,
            *tab2 = table + size1;
        
        merge(tab1, size1); //Left side
        merge(tab2, size2); //Right side
        
        sortMerge(tab1, tab2, size1, size2);
    }
}

int main(int argc, char** argv) {
    int tabSize = argc-1;
    int table[tabSize+1];
    int i;
    
    for (i=0; i<tabSize; i++)       //Filling table with data
        table[i] = atoi(argv[i+1]);
        
    merge(table, tabSize);          //Merge table
    
    for (i=0; i<tabSize; i++)       //Print out
        printf("%d ", table[i]);    
    return (EXIT_SUCCESS);
}
