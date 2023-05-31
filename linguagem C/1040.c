#include <stdio.h>
#include <math.h>
//Lucas Gabriel, INF1A
	float main()
	{
		float num1, num2, num3, num4, media;
		float nota, mediaf;
		scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
		
		media = ((num1 * 2) + (num2 * 3) + (num3 * 4) + (num4 * 1)) / 10;
		printf("Media: %.1f\n", media);
		if(media > 7.0){
		printf("Aluno aprovado.\n");
		}
		if(media < 5.0){
		printf("Aluno reprovado.\n");
		}
		if(media >= 5.0 && media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &nota);
		printf("Nota do exame: %.1f\n", nota);
		mediaf = (nota + media) / 2;
		if(mediaf >= 5){
		printf("Aluno aprovado.\n");
		printf("Media final: %.1f\n", mediaf);
		}
		else
		{
		printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n", mediaf);
		}
	}

	return 0;
}