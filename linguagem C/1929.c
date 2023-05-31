#include <string.h>
#include <math.h>

int main(){
    int a, b, c, d;
    scanf("%i%i%i%i", &a, &b, &c, &d);
    if(a < b + c && b < a + c && c < a + b || a < b + d && b < a + d && d < a + b || d < b + c && b < d + c && c < d + b || d < a + c && a < d + c && c < d + a){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
}
//a b c
//a b d
//b c d
//c d a