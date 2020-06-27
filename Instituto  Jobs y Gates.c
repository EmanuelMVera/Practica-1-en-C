#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
 int i, j, suma, numeroMayor, numeroMenor, iMayor, iMenor, jMayor, jMenor, numeroSede;
 char *sectores[] = {"Estudiantes","Profesores", "Administrativos", "Obreros"};
 char *sedes[] = {"Sede Central", "Sede 2", "Sede 3", "Sede 4", "Sede 5", "Sede 6", "Sede 7"};
 int matrizPersonas[7][4];
 srand(time(NULL));
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //Relleno Matriz Persona
 for(i=0;i<7;i++){matrizPersonas[i][0]=500+rand()%(800-500);}//Genero la columna  que sera para estudiantes
 for(i=0;i<7;i++){matrizPersonas[i][1]=25+rand()%(50-25);}//Genero la columna  que sera para profesores
 for(i=0;i<7;i++){matrizPersonas[i][2]=20+rand()%(40-20);}//Genero la columna  que sera para administrativos
 for(i=0;i<7;i++){matrizPersonas[i][3]=15+rand()%(40-15);}//Genero la columna  que sera para obreros
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //Dibujo fila 1 de la tabla
 printf("             ");
 for(i=0;i<4;i++){
 	printf(" %s ",sectores[i]);}printf("\n");
 
 //Dibujar fila 2 de la tabla
 printf("%s:",sedes[0]);
 for(i=0; i<4; i++){
 	printf("     %i      ", matrizPersonas [0][i]);}printf("\n");
 
 //Dibujar Fila 3 a 7
 for(i=1; i<7; i++){
 	printf("%s:",sedes[i]);printf("     ");
 	for(j=0; j<4; j++)
 		{printf("      %i     ", matrizPersonas [i][j]);}printf("\n");}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("////////////////////////////////////////////////////////////////////////////////\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 2 El total de personas por cada una de las categorias///////////////////////////////////////////
 printf("2)Total de personas por cada una de las categorias\n");
 for(j=0;j<4;j++){
		suma = 0;
		for(i=0;i<7;i++){
			suma += matrizPersonas[i][j];}
		printf("%s: %i\n", sectores[j], suma);}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("////////////////////////////////////////////////////////////////////////////////\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 3 El numero mayor y menor de personas, en que sede se encuentra y a que categoria pertenecen////
 printf("3)Ubicacion de la mayor y menor cantidad de personas\n");
 numeroMayor = 0;
 numeroMenor = 999;
 for(i=0;i<7;i++){
 	for(j=0;j<4;j++){
		if(numeroMayor<matrizPersonas[i][j]){
			numeroMayor = matrizPersonas[i][j];
			iMayor = i;
			jMayor = j;}
		if(numeroMenor>matrizPersonas[i][j]){
		 	numeroMenor = matrizPersonas[i][j];
			iMenor = i;
			jMenor = j;}}}
			
 printf("La mayor cantidad de personas es de %i en %s del sector %s\n", numeroMayor, sedes[iMayor], sectores[jMayor]);
 printf("La menor cantidad de personas es de %i en %s del sector %s\n", numeroMenor, sedes[iMenor], sectores[jMenor]);
////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("////////////////////////////////////////////////////////////////////////////////\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 4 El total de cada una de las categorías de una sede seleccionada///////////////////////////////
 printf("4)Total de cada una de las categorias de una sede seleccionada\n");
 suma = 0;
 do{
 	printf("Escriba el numero de la Sede siendo la Central la sede 1, ej(1/2/3/4/5/6/7): ");scanf("%i", &numeroSede);
	switch(numeroSede){
		case 1:
		 	printf("%s\n", sedes[0]);
	 		for(i=0;i<5;i++){
				printf("    %s: %i\n", sectores[i], matrizPersonas[0][i]);};break;
	 	case 2:
		 	printf("%s\n", sedes[1]);
	 		for(i=0;i<5;i++){
				printf("    %s: %i\n", sectores[i], matrizPersonas[1][i]);};break;
	 	case 3:
		 	printf("%s\n", sedes[2]);
	 		for(i=0;i<5;i++){
				printf("%s: %i\n", sectores[i], matrizPersonas[2][i]);};break;
	 	case 4:
		 	printf("%s\n", sedes[3]);
	 		for(i=0;i<5;i++){
				printf("    %s: %i\n", sectores[i], matrizPersonas[3][i]);};break;
	 	case 5:
		 	printf("%s\n", sedes[4]);
	 		for(i=0;i<5;i++){
				printf("    %s: %i\n", sectores[i], matrizPersonas[4][i]);};break;
	 	case 6:
		 	printf("%s\n", sedes[5]);
	 		for(i=0;i<5;i++){
				printf("    %s: %i\n", sectores[i], matrizPersonas[5][i]);};break;
	 	case 7:
		 	printf("%s\n", sedes[6]);
	 		for(i=0;i<5;i++){
				printf("    %s: %i\n", sectores[i], matrizPersonas[6][i]);};break;
	 	default: 
		 	printf("Eror numero incorrecto\n");}
   }while(numeroSede<1 || numeroSede>7);
////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("////////////////////////////////////////////////////////////////////////////////\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 5 El total de estudiantes de todas las sedes////////////////////////////////////////////////////
 printf("5)Total de estudiantes de todas las sedes\n");
 suma = 0;
 for(i=1;i<8;i++){
 	suma += matrizPersonas[i][0];}
 printf("Total de estudiantes:: %i\n", suma);
////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("////////////////////////////////////////////////////////////////////////////////\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Ejercicio 6 El total de personas que conforman el Instituto Jobs & Gates//////////////////////////////////
 printf("6)Total de personas que conforman el Instituto Jobs & Gates\n");
 suma = 0;
 for(i=0;i<7;i++){
 	for(j=0;j<4;j++){
		suma += matrizPersonas[i][j];}}
 printf("El Instituto Jobs & Gates esta confomado por: %i personas\n", suma);
 
 return 0;
}

    
