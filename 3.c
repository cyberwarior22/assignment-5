#include <stdio.h>
int main()
{
    int n ;
    printf("\nEnter the number till where you want to print natural numbers in reverse order : \n");
    scanf("%d" ,&n);
    printf("\nThe first %d natural numbers in reverse order are : \n" , n);
    while(n>=1)
    {
        printf("%d " , n);
        n--;
    }
    printf("\n");
    return 0;
}
