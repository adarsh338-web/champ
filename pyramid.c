#include<stdio.h>
int main() {
    int rows ;
printf ("enter the number of rows for half piramid ");
scanf("%d", &rows);
for (int i=1; i<= rows;i++){
    for (int j=1;j<i; j++){
        printf("*");
    }
    printf("\n");

    }

    return 0;
}