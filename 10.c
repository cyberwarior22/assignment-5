#include <stdio.h>
int main()
{
    int n , a = 1 , count , table ;
    printf("Enter the number for table : ");
    scanf("%d" , &n);
    printf("Enter the number till where you want to print table of %d : " , n) ;
    scanf("%d" , &count);
    printf("\nThe table of %d is given below : \n" , n);
    while(a<=count)
    {
        table = n * a ;
        printf("%d " , table);
        a++ ;
    }
    printf("\n");
    return 0;
}
