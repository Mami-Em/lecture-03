#include <cs50.h>
#include <stdio.h>
#include <string.h>

void swich(int *prem, int *sec) {
    int afa = *prem;
    *prem = *sec;
    *sec = afa;
}

void sort(int to_sort[], int s) {
    printf("Sorted version: ");
    // check which one has the lowest value
    for(int i= 0; i < s - 1; i++) {
        int to_check = i;
        for (int j = i + 1; j < s; j++)
        {
            if (to_sort[j] < to_sort[to_check]) {
                to_check = j;
            }
        }
        swich(&to_sort[to_check], &to_sort[i]);
    }
    // insert into a new table
}

int main (void) {
    int a = get_int("first number: ");
    int b = get_int("another number: ");
    int c = get_int("last number: ");
    int d = get_int("last number: ");
    int e = get_int("last number: ");
    int f = get_int("last number: ");

    int tab[] = {a,b,c,d,e,f};
    int size = sizeof(tab) / sizeof(tab[0]);
    printf("Array of number: ");
    for (int i = 0; i< size; i++) {
        printf("%i ", tab[i]);
    }
    printf("\n");
    
    sort(tab, size);
    for (int i = 0; i< size; i++) {
        printf("%i ", tab[i]);
    }
    printf("\n");
}