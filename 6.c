#include <stdio.h>
int main()
{
    int a = 2 , n ;
    printf("Enter the number till where you want to print even natural numbers : ") ;
    scanf("%d" , &n) ;
    printf("\nThe first %d even natural numbers are : \n" , n);
    while(a<=(2*n))
    {
        printf("%d " , a);
        a = a + 2 ;
    }
    printf("\n");
    return 0;
}
