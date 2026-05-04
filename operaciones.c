#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
//Devuelve el resultado de multiplicar ambos parámetros
int multiplicar(const int a,const int b) {
    return a * b; /* TODO: implementar */
}
//Se utiliza el operador interno * que suma a veces b
/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /*version main*/
} /*ver. main*/

/*dividir*/
int dividir (int a, int b){
    return a - b; /*bug intencional*/
}
