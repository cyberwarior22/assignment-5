#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number till where you want to print odd natural numbers in reverse order : ") ;
    scanf("%d" , &n) ;
    printf("\nThe first %d odd natural numbers in reverse order are : \n" , n);
    while((2*n - 1)>=1)
    {
        printf("%d " , (2*n - 1) );
        n = n - 1 ;
    }
    printf("\n");
    return 0;
}
