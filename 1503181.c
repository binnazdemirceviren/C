#include <stdio.h>

int main()
{
    int decimal= 0, binary, say, us=1;
    printf ("binary: ");
    scanf("%d", &binary);
        while(binary>0)
        {
            say = binary%10;
            decimal =decimal + say*us;
            us*=2;
            binary/= 10;
        }
        printf("decimal:%d", decimal);
        return 0;
}