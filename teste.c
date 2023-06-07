#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "coracao-1.h"
#include "coracao-2.h"
#include "coracao-3.h"
#include "coracao-4.h"
#include "coracao-5.h"

int main() {
	int i;
	char nome[20];
	textcolor(10);
	printf("Digite um nome: ");
	scanf("%s", &nome);
	
	for(i=1; i<999; i++){
	printf("%s", nome); textcolor(1);
	printf("%s", nome); textcolor(10);
	printf("%s", nome); textcolor(4);
	printf("%s", nome); textcolor(12);
	printf("%s", nome); textcolor(14);
	}


    openCoracao01Rosa();
    openCoracao02Rosa();
    openCoracao03Rosa();
    openCoracao04Rosa();
    openCoracao05Rosa();

    openCoracao01Verde();
    openCoracao02Verde();
    openCoracao03Verde();
    openCoracao04Verde();
    openCoracao05Verde();

    openCoracao01Roxo();
    openCoracao02Roxo();
    openCoracao03Roxo();
    openCoracao04Roxo();
    openCoracao05Roxo();

    openCoracao01Branco();
    openCoracao02Branco();
    openCoracao03Branco();
    openCoracao04Branco();
    openCoracao05Branco();

    openCoracao01Azul();
    openCoracao02Azul();
    openCoracao03Azul();
    openCoracao04Azul();
    openCoracao05Azul();

    openCoracao01Vermelho();
    openCoracao02Vermelho();
    openCoracao03Vermelho();
    openCoracao04Vermelho();
    openCoracao05Vermelho();




			gotoxy(25,17); textcolor(6);
	printf("I LOVE U ", 3);
			gotoxy(50,17); textcolor(6);
	printf("I LOVE U ", 3);
			gotoxy(15,7); textcolor(6);
	printf("I LOVE U ", 3);
			gotoxy(40,7); textcolor(6);
	printf("I LOVE U ", 3);	
			gotoxy(65,7); textcolor(6);
	printf("I LOVE U ", 3);
	
	
	
	getch(); 

}