#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    std::cout << "*****************************************" << endl;
    std::cout << "*Bienvenido al Juego de la Adivinanza   *!" << endl;
    std::cout << "*Ingrese un Numero en el Rango : 1 a 100*!" << endl;
    std::cout << "*****************************************" << endl;

    char dificultad;
    int numero_tentativas;

    do {
        cout << endl;
        cout << "Escoja el nivel de dificultad" << endl;
        cout << "Facil (f), Medio (m) o Dificil (d)" << endl;
        cin >> dificultad;

        if (dificultad == 'f') {
            numero_tentativas = 15;
        } else if (dificultad == 'm') {
            numero_tentativas = 10;
        } else if (dificultad == 'd') {
            numero_tentativas = 5;
        } else {
            cout << "Dificultad no válida. Intente nuevamente." << endl;
        }
    } while (dificultad != 'f' && dificultad != 'm' && dificultad != 'd');

    srand(time(0));
    const int NUMERO_SECRETO = 1 + rand() % 100; // genera un número aleatorio entre 1 y 100

    int adivina;

    bool no_acerto = true;
    int intentos = 0;
    double puntos = 1000.0; // guardar los puntos ganados

    while (no_acerto && intentos < numero_tentativas) {
        intentos++;
        cout << "Tentativa " << intentos << " de " << numero_tentativas << endl;
        cout << "¿Cuál es el número?" << endl;
        cin >> adivina;

        double puntos_perdidos = abs(adivina - NUMERO_SECRETO) / 2.0;
        puntos -= puntos_perdidos;
        cout << "El valor de su número es: " << adivina << endl;

        bool acerto = adivina == NUMERO_SECRETO;
        bool mayor = adivina > NUMERO_SECRETO;

        if (acerto) {
            cout << "¡Felicidades! Adivinaste el número secreto." << endl;
            no_acerto = false;
        } else if (mayor) {
            cout << "El número ingresado es mayor que el número secreto." << endl;
        } else {
            cout << "El número ingresado es menor que el número secreto." << endl;
        }
    }

    if (!no_acerto) {
        cout << "¡Felicidades! Adivinaste el número secreto en " << intentos << " intentos." << endl;
    } else {
        cout << "Se agotaron las tentativas. El número secreto era " << NUMERO_SECRETO << "." << endl;
    }

    cout.precision(2);
    cout << fixed;
    cout << "Su puntuación fue de " << puntos << " puntos." << endl;

    return 0;
}
