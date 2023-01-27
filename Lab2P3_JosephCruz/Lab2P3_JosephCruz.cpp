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
			int sueldoEnero = 0;
			int sueldoFebrero = 0;
			int sueldoMarzo = 0;
			int sueldoAbril = 0;
			int sueldoMayo = 0;
			int sueldoJunio = 0;
			int sueldoJulio = 0;
			int sueldoAgosto = 0;
			int sueldoSeptiembre = 0;
			int sueldoOctubre = 0;
			int sueldoNoviembre = 0;
			int sueldoDiciembre = 0;
			int diasEnero = 0;
			int diasFebrero = 0;
			int diasMarzo = 0;
			int diasAbril = 0;
			int diasMayo = 0;
			int diasJunio = 0;
			int diasJulio = 0;
			int diasAgosto = 0;
			int diasSeptiembre = 0;
			int diasOctubre = 0;
			int diasNoviembre = 0;
			int diasDiciembre = 0;
			cout << "Bienvenido al calculo de aguinaldo" << endl;
			cout << "Ingrese su sueldo bruto del mes de Enero "; cin >> sueldoEnero;
			cout << "Ingrese total de dias faltados del mes de Enero "; cin >> diasEnero;
			cout << "Ingrese su sueldo bruto del mes de Febrero "; cin >> sueldoFebrero;
			cout << "Ingrese total de dias faltados del mes de Febrero "; cin >> diasFebrero;
			cout << "Ingrese su sueldo bruto del mes de Marzo "; cin >> sueldoMarzo;
			cout << "Ingrese total de dias faltados del mes de Marzo "; cin >> diasMarzo;
			cout << "Ingrese su sueldo bruto del mes de Abril "; cin >> sueldoAbril;
			cout << "Ingrese total de dias faltados del mes de Abril "; cin >> diasAbril;
			cout << "Ingrese su sueldo bruto del mes de Mayo "; cin >> sueldoMayo;
			cout << "Ingrese total de dias faltados del mes de Mayo "; cin >> diasMayo;
			cout << "Ingrese su sueldo bruto del mes de Junio "; cin >> sueldoJunio;
			cout << "Ingrese su sueldo bruto del mes de Julio "; cin >> sueldoJulio;
			cout << "Ingrese su sueldo bruto del mes de Agosto "; cin >> sueldoAgosto;
			cout << "Ingrese su sueldo bruto del mes de Septiembre "; cin >> sueldoSeptiembre;
			cout << "Ingrese su sueldo bruto del mes de Octubre "; cin >> sueldoOctubre;
			cout << "Ingrese su sueldo bruto del mes de Noviembre "; cin >> sueldoNoviembre;
			cout << "Ingrese su sueldo bruto del mes de Diciembre "; cin >> sueldoDiciembre;
			cout << "Ingrese la cantidad de dias trabajados "; cin >> dias;
			cout << "Ingrese total de dias faltados por mes: "; cin >> dias;
			aguinaldo = sueldo * dias;
			cout << "El aguinaldo es: " << aguinaldo << endl;
			break;
		}
				
		}
    } while (menu!= 4);
}

