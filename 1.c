#include <stdio.h>
#include <stdlib.h>

int main()
{
	float p1, p2, at, media;
	printf ("Informe a nota da p1;");
	scanf("%f", &p1);
	printf("Informe a nota da p2:");
	scanf("%f", &p2);
	printf("Informe a pontução das atividades:");
	scanf ("%f", &at);
	
	media = p1 * 0.35 + p2 * 0.35 + at;
	printf ("A média é:%.2f", media);
	if (media>=6){
		printf ("Aluni aprovado direto com média: %.2f", media);
	}else{
		printf("Informe novamente a nota da p1: ");
		scanf("%f", &p1);
	}
	media = p1 * 0.35 + p2 * 0.35 + at;
	system("pause");
	return 0;
}                 
