#include <stdio.h>
#include <math.h>
//Lucas Gabriel, INF1A
int main()
{
    int a,b,c,d,e,f,g,h,i, x=1,sl,p=0,q=0,r;
    while(1)
    {
        scanf("%d", &sl);
        if(sl==0) break;
        else
        {
            x=1;p=0;q=0;
            int m[sl][sl];
            i=sl;
            if(sl%2==0)
                r=sl/2;
            else if(sl%2==1)
                r=(sl/2)+1;
            for(c=1; c<=r; c++)
            {
                for(a=p; a<i; a++)
                {
                    for(b=q; b<i; b++)
                        m[a][b]=x;
                }
                x++;
                p++; q++; i--;
            }
            for(g=0; g<sl; g++)
            {
                for(h=0; h<sl; h++)
                {
                    if(h==0)
                        printf("%3d",m[g][h]);
                    else printf(" %3d",m[g][h]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}