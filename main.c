#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i;
    int plusgrand , pluspetit;

    for(i = 0; i<10; i++){
        printf("Entrer un nombre\n");
        scanf("%d", &arr[i]);
        plusgrand = arr[0];
        pluspetit = arr[0];
        if(arr[i]>plusgrand){
            plusgrand = arr[i];
        }
        if (arr[i] < pluspetit){
            pluspetit = arr[i];
        }
    }
    for(i = 0; i<10;i++){
        printf(" %d,\n", arr[i]);
    }
    printf("Le plus grand est %d le plus petit est %d", plusgrand,pluspetit);
    return 0;
}
