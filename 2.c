#include <stdio.h>
int main()
{
    int n , a = 1 ;
    printf("\nEnter the number till where you want to print natural numbers : \n");
    scanf("%d" ,&n);
    printf("\nThe first %d natural numbers are : \n" , n);
    while(a<=n)
    {
        printf("%d " , a);
        a++;
    }
    printf("\n");
    return 0;
}
