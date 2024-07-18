#include "tabla.h"

void armar_tabla(float inicio, float fin, float incremento){
    assert(incremento > 0 && inicio <= fin);

    fprintf(stdout, "|%6s| %5s|\n", "Nudos", "Km/h");
    for (float i = inicio; i <= fin; i += incremento) {
        fprintf(stdout, "| %-6g| %5.4f|\n", i, convertir_a_km(i));
    }
}
