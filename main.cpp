
#include <iostream>
using namespace std;
//Cristopher Lanse Castellanos Perez 
//0909-24-12593

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}


bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}


void fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Serie Fibonacci: ";
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << endl;
}


void tablaMultiplicar(int num) {
    cout << "Tabla del: " << num << ":" << endl << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int num;


    cout << "===||Tabla de multiplicar||===" << endl;
    tablaMultiplicar(4);
    cout << "===||Tabla de multiplicar||===" << endl;
    tablaMultiplicar(6);


    cout << "Ingrese un numero para calcular su factorial: " << endl;
    cin >> num;
    cout << "El factorial de " << num << " es: " << factorial(num) << endl;


    cout << "Ingrese el numero de la serie Fibonacci: " << endl;
    cin >> num;
    fibonacci(num);


    cout << "Ingrese un numero para saber si es primo: ";
    cin >> num;
    if (esPrimo(num)) {
        cout << num << " es primo." << endl;
    } else {
        cout << num << " no es primo." << endl;
    }


    cout << "Ingrese un numero para saber si es par: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " es par." << endl;
    } else {
        cout << num << " es impar." << endl;
    }


    cout << "Ingrese un numero para mostrar su tabla: ";
    cin >> num;
    tablaMultiplicar(num);

    return 0;
}
