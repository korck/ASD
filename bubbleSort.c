#include <stdio.h>
#include <stdlib.h>

void swap (int *val1) {
    int *temp;
    temp = *val1;
    *val1 = *(val1+1);
    *(val1+1) = temp;
}

int main(int argc, char *argv[])
{
    int i, j, tabSize = argc-1;
    int table[tabSize];

    //Wypełnienie tablicy intami
    for (i=0; i<tabSize; i++) {
        table[i] = atoi(argv[i+1]);
    }

    //Posortowanie tablicy
    for (j=0; j<tabSize; j++)
        for (i=0; i<tabSize-j-1; i++) {
            if (table[i]>table[i+1]) swap(&table[i]);
        }

    //Wyświetlenie wyników
    for (i=0;i<tabSize;i++) {
        printf("%d ",table[i]);
    }
    printf("\n");
    return 0;
}
