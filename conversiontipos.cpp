#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

float divide(string dividendo, string divisor) {

    float divid = stof(dividendo);
    float divis = stof(divisor);
    float division;

    try {

        if (divis <= 0) {
            throw 0;
        }

        if (divid <= 0) {
            throw 'e';
        }

    }

    catch (int n) {
        cout << "El divisor tiene que ser mayor a 0" << "\n";
        system("pause");
        exit(0);
    }

    catch (const char &e) {
        cout << "El dividendo tiene que ser mayor a 0" << "\n";
        system("pause");
        exit(0);
    }

    division = divid / divis;

    return division;

}

int main() {

    string dividendo, divisor;
    float resultado;

    cout << "Introduzca el dividendo: ";
    cin >> dividendo;
    cout << "Introduzca el divisor: ";
    cin >> divisor;

    resultado = divide(dividendo, divisor);
    cout << resultado << "\n";

    system("pause");

}