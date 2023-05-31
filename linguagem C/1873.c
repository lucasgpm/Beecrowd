#include<stdio.h>
#include<string.h>
//Lucas Gabriel, 20192004820
int main(){
	int cdt, aux;
	char rajesh[10], sheldon[10];
	scanf("%i", &cdt);
	for(aux = 0; aux < cdt; aux++){
		scanf("%s%s", rajesh, sheldon);
		if(strcmp(rajesh, sheldon) == 0){
			printf("empate\n");
		}
		if(strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "tesoura") == 0 && strcmp(rajesh, "papel") == 0){
		if(strcmp(rajesh, "tesoura") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "papel") == 0 && strcmp(rajesh, "pedra") == 0){
		if(strcmp(rajesh, "papel") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "lagarto") == 0 || strcmp(sheldon, "pedra") == 0 && strcmp(rajesh, "lagarto") == 0){
		if(strcmp(rajesh, "pedra") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "spock") == 0 || strcmp(sheldon, "lagarto") == 0 && strcmp(rajesh, "spock") == 0){
		if(strcmp(rajesh, "lagarto") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "spock") == 0 && strcmp(rajesh, "tesoura") == 0){
		if(strcmp(rajesh, "spock") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "lagarto") == 0 || strcmp(sheldon, "tesoura") == 0 && strcmp(rajesh, "lagarto") == 0){
		if(strcmp(rajesh, "tesoura") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "lagarto") == 0 && strcmp(rajesh, "papel") == 0){
		if(strcmp(rajesh, "lagarto") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "spock") == 0 || strcmp(sheldon, "papel") == 0 && strcmp(rajesh, "spock") == 0){
		if(strcmp(rajesh, "papel") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "spock") == 0 && strcmp(rajesh, "pedra") == 0){
		if(strcmp(rajesh, "spock") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
		if(strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "pedra") == 0 && strcmp(rajesh, "tesoura") == 0){
		if(strcmp(rajesh, "pedra") == 0){
			printf("rajesh\n");
		}
		else{
			printf("sheldon\n");
		}
		}
	}
    return 0;
}