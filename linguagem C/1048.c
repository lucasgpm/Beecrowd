float main(){
	float salario, salarioN, percentual = 0;
	scanf("%f", &salario);
	if(salario <= 400.00){
		percentual = 0.15;
		salarioN = salario * percentual;
	}
	if(salario <= 800.00 && salario >= 400.01 ){
		percentual = 0.12;
		salarioN = salario * percentual;
	}
	if(salario <= 1200.00 && salario >= 800.01 ){
		percentual = 0.10;
		salarioN = salario * percentual;
	}
	if(salario <= 2000.00 && salario >= 1200.01 ){
		percentual = 0.07;
		salarioN = salario * percentual;
	}
	if(salario > 2000.00){
		percentual = 0.04;
		salarioN = salario * percentual;
	}
	printf("Novo salario: %.2f\n", salarioN + salario);
	printf("Reajuste ganho: %.2f\n", salarioN);
	printf("Em percentual: %.0f %%\n", percentual * 100);
	
	return 0;
}