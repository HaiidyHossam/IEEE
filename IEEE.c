#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,bitnum;
    printf("Enter Number \n");
    scanf("%d",&num);
    printf("Enter Bit Number ,please\n");
    scanf("%d",&bitnum);
    int s=(num>>bitnum)&1;
    printf("Bit is set to %d",s);

    return 0;
}
