#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	char v[] = "vertebrado", ave[] = "ave", car[] = "carnivoro", on[]= "onivoro", mamifero[] = "mamifero", herb[] = "herbivoro";
	char i[] = "invertebrado", inseto[] = "inseto", hem[] = "hematofago", anelideo[] = "anelideo";
	char a[22], b[22], c[22];
	scanf("%s%s%s", &a,&b,&c);

	if(strcmp(a, v) == 0){
		if(strcmp(b, ave) == 0){
			if(strcmp(c, car) == 0){
				printf("aguia\n");
			}
			if(strcmp(c, on) == 0){
				printf("pomba\n");
			}
		}
		if(strcmp(b, mamifero) == 0){
			if(strcmp(c, on) == 0){
				printf("homem\n");
			}
		}
			if(strcmp(c, herb) == 0){
				printf("vaca\n");
		}
	}

	if(strcmp(a, i) == 0){
		if(strcmp(b, inseto) == 0){
			if(strcmp(c, hem) == 0){
				printf("pulga\n");
			}
			if(strcmp(c, herb) == 0){
				printf("lagarta\n");
			}
		}
		if(strcmp(b, anelideo) == 0){
			if(strcmp(c, hem) == 0){
				printf("sanguessuga\n");
		}
			if(strcmp(c, on) == 0){
				printf("minhoca\n");
		}
	}
}

	return 0;