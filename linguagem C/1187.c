#include <stdio.h>
//Lucas Gabriel, INF1A
int main()
{
    double aux=0.0, m[12][12];
    char o[2];
    int c,x,y,z,a=10,b=1;
    scanf("%s", &o);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &m[x][y]);
    }
    for(z=0; z<=4;z++)
    {
        for(c=b; c<=a;c++) aux+=m[z][c];
            a--;
            b++;
    }
    if(o[0]=='S')
        printf("%.1lf\n",aux);
    else if(o[0]=='M')
    {
        aux=aux/30.0;
        printf("%.1lf\n",aux);
    }
    return 0;
}