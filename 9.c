#include <stdio.h>
int main()
{
    int n , a = 1 , b ;
    printf("Enter the number till where you want to print cubes of natural numbers : ") ;
    scanf("%d" , &n) ;
    printf("\nThe cubes of first %d natural numbers are : \n" , n);
    while(a<=n)
    {
        b = a * a * a ;
        printf("%d " , b);
        a++ ;
    }
    printf("\n");
    return 0;
}
