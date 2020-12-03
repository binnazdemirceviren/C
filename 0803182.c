/*
#include <stdio.h>
//ikinci dereceden denklemin köklerini kontol et 

int main()
{
    int a,b,c;
    printf ("a*x**2+b*x+c denkelminin sırasıyla katsayılarını giriniz. \n");
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    if (b*b - 4*a*c>=0 )
        printf ("reel kökü olan bir denklemdir");
    else
        printf ("reel kökü yoktur");
        return 0;
}
*/

//hocanın yaptığı

#include <stdio.h>
int main()
{
    int a,b,c,delta;
    printf ("a*x**2+b*x+c denkelminin sırasıyla katsayılarını giriniz.");
    printf ("a:");
    scanf ("%d", &a);
    printf ("b:");
    scanf ("%d", &b);
    printf ("c:");
    scanf ("%d", &c);
    delta = (b*b - 4*a*c);
    {
    if (delta>=0 )
        printf ("reel kökü olan bir denklemdir");
    else
        printf ("reel kökü yoktur");
        return 0;
    }
}
