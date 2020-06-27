#include <stdio.h>
#include <stdlib.h>
#include <string.h> //libreria para poder usar cadenas de texto
#include <time.h>

int main(int argc, char *argv[]) {
	
 char sede;
 int i,j; //Declaro los indices para el for
 int suma, numeroMayor, numeroMenor, numero, iMayor, iMenor, jMayor, jMenor, numeroSede;
 int vertical[8];

//Crear y Dibujar Matriz
 printf("============================Instituto Jobs & Gates===============================\n");//Dibujamos la parte superior
//Crear Matriz:
 char *institutos[8][5]={{"=============", " Estudiantes ", " Profesores ", " Administrativos ", " Obreros "},
                        {"Sede Central", "      311     ", "     33    ", "         22       ", "    19  "},
                        {"Sede 2", "            315     ", "     36    ", "         24       ", "    10  "},
                        {"Sede 3", "            312     ", "     39    ", "         19       ", "    13  "},
                        {"Sede 4", "            350     ", "     35    ", "         30       ", "    11  "},
                        {"Sede 5", "            311     ", "     30    ", "         18       ", "    12  "},
                        {"Sede 6", "            409     ", "     50    ", "         43       ", "    25  "},
                        {"Sede 7", "            417     ", "     54    ", "         52       ", "    31  "}};
//el primer for recorre las filas y el segundo las columnas, muestra cada elemento uno por uno
 for(i=0;i<8;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%s ", institutos[i][j]);
		}
		printf("\n");		
	}
 printf("||=============================================================================||\n");//Dibujamos la parte inferior

//Ejercicio 1 El total de personas en cada una de las sedes/////////////////////////////////////////////////////////////////////
  printf("||=================1)Total de Personas en cada una de las sedes================||\n");
  for(i=1;i<8;i++)
	{
		suma = 0;
		for(j=1;j<5;j++)
		{
			suma += atoi(institutos[i][j]);
		}
		printf("%s:  %i\n", institutos[i][0], suma);	
	}
printf("||=============================================================================||\n");

//Ejercicio 2 El total de personas por cada una de las categorias////////////////////////////////////////////////////////////////
 printf("||===============2)Total de personas por cada una de las categorias============||\n");
 for(j=1;j<5;j++)
	{
		suma = 0;
		for(i=1;i<8;i++)
		{
			suma += atoi(institutos[i][j]);
		}
		printf("%s: %i\n", institutos[0][j], suma);	
	}
 printf("||=============================================================================||\n");

//Ejercicio 3 El numero mayor y menor de personas, en que sede se encuentra y a que categoria pertenecen/////////////////////////
 printf("||============3)Ubicacion de la mayor y menor cantidad de personas=============||\n");
 numeroMayor = 0;
 numeroMenor = 999;
 for(i=1;i<8;i++)
 	 {

		for(j=1;j<5;j++)
		 {	
			numero = atoi(institutos[i][j]);
			if(numeroMayor<numero)
			 {
			 	numeroMayor = numero;
    iMayor = i;
    jMayor = j;
			 }
			if(numeroMenor>numero)
			 {
		 		numeroMenor = numero;
    iMenor = i;
    jMenor = j;
		 	}
		}
	}
 printf("La mayor cantidad de personas es de %i en %s del sector %s\n", numeroMayor, institutos[iMayor][0], institutos[0][jMayor]);
 printf("La menor cantidad de personas es de %i en %s del sector %s\n", numeroMenor, institutos[iMenor][0], institutos[0][jMenor]);
 printf("||=============================================================================||\n");
 
//Ejercicio 4 El total de cada una de las categorías de una sede seleccionada///////////////////////////////////////////////////////////////////// 
 printf("||========4)Total de cada una de las categorias de una sede seleccionada=======||\n");
 
 suma = 0;
 do
 {
 	printf("Escriba el numero de la Sede siendo la Central la sede 1, ej(1/2/3/4/5/6/7): "); scanf("%i", &numeroSede);
	 switch(numeroSede)
	 {
	 	case 1:
		 	printf("%s\n", institutos[1][0]);
	 		for(i=1;i<5;i++)
				 {
				 numero = atoi(institutos[1][i]);
				 printf("%s: %i\n", institutos[0][i], numero);
				 };break;
	 	case 2:
		 	printf("%s\n", institutos[2][0]);
	 		for(i=1;i<5;i++)
				 {
				 numero = atoi(institutos[2][i]);
				 printf("%s: %i\n", institutos[0][i], numero);
				 };break;
	 	case 3:
		 	printf("%s\n", institutos[3][0]);
	 		for(i=1;i<5;i++)
				 {
				 numero = atoi(institutos[3][i]);
				 printf("%s: %i\n", institutos[0][i], numero);
				 };break;
	 	case 4:
		 	printf("%s\n", institutos[4][0]);
	 		for(i=1;i<5;i++)
				 {
				 numero = atoi(institutos[4][i]);
				 printf("%s: %i\n", institutos[0][i], numero);
				 };break;
	 	case 5:
		 	printf("%s\n", institutos[5][0]);
	 		for(i=1;i<5;i++)
				 {
				 numero = atoi(institutos[5][i]);
				 printf("%s: %i\n", institutos[0][i], numero);
				 };break;
	 	case 6:
		 	printf("%s\n", institutos[6][0]);
	 		for(i=1;i<5;i++)
				 {
				 numero = atoi(institutos[6][i]);
				 printf("%s: %i\n", institutos[0][i], numero);
				 };break;
	 	case 7:
		 	printf("%s\n", institutos[7][0]);
	 		for(i=1;i<5;i++)
				 {
				 numero = atoi(institutos[7][i]);
				 printf("%s: %i\n", institutos[0][i], numero);
				 };break;
	 	default: 
		 	printf("Eror numero incorrecto\n");
	 }
 }while(numeroSede<1 || numeroSede>7);
 printf("||=============================================================================||\n");
//Ejercicio 5 El total de estudiantes de todas las sedes///////////////////////////////////////////////////////////////////////////////////// 
 printf("||===================5)Total de estudiantes de todas las sedes=================||\n");
 suma = 0;
	for(i=1;i<8;i++)
		{
			suma += atoi(institutos[i][1]);
		}
		printf("Total de estudiantes:: %i\n", suma);	
 printf("||=============================================================================||\n");
//Ejercicio 6 El total de personas que conforman el Instituto Jobs & Gates///////////////////////////////////////////////////////////////////// 
 printf("||=======6)Total de personas que conforman el Instituto Jobs & Gates===========||\n");
 suma = 0;
for(i=1;i<8;i++)
	{
		for(j=1;j<5;j++)
		{
			suma += atoi(institutos[i][j]);
		}		
	}
 printf("El Instituto Jobs & Gates esta confomado por: %i personas\n", suma);
 printf("||=============================================================================||\n");
 return 0;
}

    
