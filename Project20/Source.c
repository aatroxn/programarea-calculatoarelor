#include<stdio.h>
#include<stdlib.h>

typedef struct jocuri
{
	char titlu[30], tip[30], platforma[20];
	int dimensiune, anul;
	float pret;
}J;
void citire(J* joc, int *n)
{
	(*n)++;
	printf("Introduceti numele jocului: ");
	scanf("%s", (joc + *n)->titlu);
	printf("Introduceti tipul jocului: ");
	scanf("%s", (joc + *n)->tip);
	printf("Introduceti pretul jocului: ");
	scanf("%f", &(joc + *n)->pret);
	printf("Introduceti platforma jocului: ");
	scanf("%s", (joc + *n)->platforma);
	printf("Introduceti dimeniunea jocului: ");
	scanf("%d", &(joc + *n)->dimensiune);
	printf("Introduceti anul jocului: ");
	scanf("%d", &(joc + *n)->anul);
}
void AfisareJoc(J* joc, int n)
{
	int i;
	for ( i = 0; i <= n; i++)
	{
		printf("%s %s %f %s %d %d \n", (joc + i)->titlu, (joc + i)->tip, (joc + i)->pret, (joc + i)->platforma,(joc + i)->dimensiune,(joc + i)->anul);

	}
}
void CautareAn(J* joc, int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		
	} 
}
int main()
{	
	J joc[100];
	int opt, n = -1;
	do
	{
		printf("Alegeti optiunea: \n");
		printf("0. Iesire \n");
		printf("1. Citirea unui joc \n");
		printf("2. Afisare joc \n");
		printf("3. Cautarea unui joc dupa an \n");
		printf("4. Sortarea jocurilor dupa pret crescator \n");
		printf("5. Stergerea jocurilor de pe o anumita platforma \n");
		scanf("%d", &opt);
		switch (opt)
		{
		case 0:
			exit (0);
			break;
		case 1:
			citire(joc,&n);
			break;
		case 2:
			AfisareJoc(joc, n);
			break;
		case 3:	
			CautareAn(joc, n);
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			printf("Optiune gresita ");
			break;
		}
	} while (1);
	

	
	system("pause");
	return 0;
}