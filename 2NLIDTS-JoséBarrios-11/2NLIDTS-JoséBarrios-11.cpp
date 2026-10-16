#include <iostream>
#include <cmath>

using namespace std;

// Función recursiva para obtener la suma de los dígitos de n
int sumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + (n % 10);
}

// Función iterativa para obtener la suma de los dígitos de n
int sumaIterativa(int n) {
    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

int main() {
    int cantidad;
    cout << "--- SUMA DE DIGITOS (RECURSIVA E ITERATIVA) ---" << endl;
    cout << "Cuantos numeros va a ingresar?: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; ++i) {
        int numero;
        cout << "\nIngrese el numero #" << i << ": ";
        cin >> numero;

        // Se toma el valor absoluto por si el usuario ingresa un número negativo
        int n_abs = abs(numero);

        int resRecursivo = sumaRecursiva(n_abs);
        int resIterativo = sumaIterativa(n_abs);

        cout << "  -> Suma de digitos (Solucion Recursiva): " << resRecursivo << endl;
        cout << "  -> Suma de digitos (Solucion Iterativa): " << resIterativo << endl;
    }

    return 0;
}
