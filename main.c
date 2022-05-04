#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res,i,j,acum=0;

    for(i=1;i<=9000;i++)
    {
        acum=0;
        for(j=1;j<i;j++)
        {
            res=i%j;
            if(res==0)
            {
                acum=acum+j;
            }
        }
        if(acum==i)
        {
            printf("Numero perfecto: %d\n",acum);
        }
    }
    return 0;
}
