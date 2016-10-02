/*
 * Program sortujący przez scalanie
 */
#include <stdio.h>
#include <stdlib.h>
int * merge (int *tab1, int *tab2, int size1, int size2) {
    int     size3 = size1+size2;
    int     i=0,
            j=0,
            k=0;
    static int* table3;
    table3 = (int*) calloc(size3,sizeof(int));
    while(k < size3) {
        if (*(tab1+i) < *(tab2+j) || j == size2) {
            table3[k] = *(tab1+i);
            i++;
        } else {
            table3[k] = *(tab2+j);
            j++;
        }
        k++;
    }
    
    return table3;
}

int main (int argc, char *argv[]) {
    int tabSize = argc-1;
    int table[tabSize+1];
    int i,j,k;
    for (i=0; i<tabSize; i++)       //Wypełnienie tablicy danymi
        table[i] = atoi(argv[i+1]);
    
    int *table3;
    
    //if (tabSize % 2 == 0)
//    for (i=1; i<tabSize; i*=2) {
//        for (j=0; j==i; j+=i);
//        table3+ = merge(&table[i*2],&table[(i*2)+1], i, i);
//    }
    
    for(i = 0; i<tabSize; i++) {
        for (j = 0; j<tabSize)
    }
    
    
    int     size1 = 4,
            size2 = 2,
            size3 = size1+size2;
    int table1[] = {5,6,7,8};
    int table2[] = {2,4};
    
    
//    table3 = merge(table1, table2, 4, 2); 
//    
//    printf("\ntablica: \n");
//    for (i=0; i<size3; i++) printf("%d ", *(table3+i));
//    
    return 0;
}

