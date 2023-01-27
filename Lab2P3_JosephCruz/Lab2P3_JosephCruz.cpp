// Lab2P3_JosephCruz.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Joseph Cruz 22151086
#include <iostream>
using namespace std;
int menu = 0;
int main()
{
    do {
		cout << "1. Ejercicio practico 1 - Calculo de Aguinaldo" << endl;
		cout << "2. Ejercicio practico 2 - Construir linea calculada mediante una pendiente" << endl;
		cout << "3. Ejercicio practico 3 - Diferencia entre fechas" << endl;
		cout << "4. Salir." << endl;
		cout << "Ingrese la opcion que desea: ";  cin >> menu;
		switch (menu) 
			{
		case 1:
		{
			int aguinaldo = 0;
			int sueldo = 0;
			int dias = 0;
			cout << "Bienvenido al calculo de aguinaldo" << endl;
			cout << "Ingrese su sueldo bruto por cada mes del anio: "; cin >> sueldo;
			cout << "Ingrese total de dias faltados por mes: "; cin >> dias;
			aguinaldo = sueldo * dias;
			cout << "El aguinaldo es: " << aguinaldo << endl;
			break;
		}
				
		}
    } while (menu!= 4);
}

