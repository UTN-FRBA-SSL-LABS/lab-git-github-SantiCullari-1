#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
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

/* ── esPar ────────────────────────────────────────────────────────────────── */

// Se modifican a constaten porque no será modificadas
int esPar(const int n) {
    return (n % 2) == 0;
}
