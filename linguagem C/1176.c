#include<stdio.h>
int main()
{
   long long int n, primeiro = 0, segundo = 1, prox, c;
   int i,j;
   scanf("%d", &j);
   for(i=1; i<=j; i++, primeiro = 0, segundo = 1)
   {
       scanf("%lld",&n);
       n=n+1;
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) prox = c;
          else
          {
             prox = primeiro + segundo;
             primeiro = segundo;
             segundo = prox;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,prox);
   }
   return 0;
}
/*
Outra resolução

#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int c; 
	long long int cdt, ent, v[61];
	v[0] = 0;
	v[1] = 1;
	scanf("%lli", &cdt);
	for(c = 2; c <= 60; c++){
		v[c] = v[c - 1] + v[c - 2];
	}
	for(c = 0; c < cdt; c++){
	scanf("%lli", &ent);
	printf("Fib(%lli) = %lli\n", ent, v[ent]);
}

	return 0;
}
*/