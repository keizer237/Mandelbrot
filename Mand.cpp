#include <iostream>

using namespace std; // permet de verifier si un nombre appartient a l'ensemble de Mandelbrot

bool mandelbrot(double real, double imaginaire, int max_iter = 1000) {
    double zreel = 0, zimag = 0; // partie reel et imaginaire initialise a 0
    for (int i = 0; i < max_iter; i++) {
        double zreel_temp = zreel * zreel - zimag * zimag + real;
        zimag = 2 * zreel * zimag + imaginaire;
        zreel = zreel_temp;
        if ((zreel * zreel + zimag * zimag) > 4) {

            return false;  // le point diverge
        }
            
    }

    return true; // le point ne diverge pas  
    
}
int main() {
    double real, imaginaire; // demande a l'utilisateur d'entrer la partie reelle et la partie imaginaire 
    cout << "entrer la partie reelle du nombre complexe: ";
    cin >> real;
    cout << "entrer l parti imaginaire du nombre complexe: ";
    cin >> imaginaire;

    // verifions l'appartenance a l'ensemble de Mandbrot
    if (mandelbrot(real, imaginaire)) {
        cout << "le nombre appartient a l'ensemble." << endl;

    } else {
        cout << "le nombre n'appartient pas a l'ensemble." << endl;
    }

    return 0;
} //g++ Mand.cpp -o Mandelbrot
