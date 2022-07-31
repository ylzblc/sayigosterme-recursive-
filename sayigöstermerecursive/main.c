#include <stdio.h>
#include <stdlib.h>

int show(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
    {
        printf("%d ", n);
        return show(n-1);
    }

}
 int main(void)
 {
     int sayi;

     printf("Bir sayi giriniz: ");
     scanf("%d", &sayi);

     printf("%d", show(sayi));

     return 0;
 }
