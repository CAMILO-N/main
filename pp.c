#include <stdio.h>

double calcularTasaInteresMensual(double tasa_interes, double monto_mensual);

int main() {
    double monto_mensual, total_meses, tasa_interes, tasa_interes_mes, monto_acumulado = 0.0, interes_acumulado = 0.0;
    int i;

    printf("Ingresar Monto Mensual: \n");
    scanf("%lf", &monto_mensual);

    while (monto_mensual <= 0) {
        printf("Reingresar Monto Mensual: \n");
        scanf("%lf", &monto_mensual);
    }

    printf("Meses Totales: \n");
    scanf("%lf", &total_meses);

    while (total_meses <= 0) {
        printf("Reingresar Meses Totales: \n");
        scanf("%lf", &total_meses);
    }

    printf("Tasa de Interes: \n");
    scanf("%lf", &tasa_interes);

    while (tasa_interes <= 0) {
        printf("Reingresar Tasa de Interes: \n");
        scanf("%lf", &tasa_interes);
    }

    for (i = 1; i <= total_meses; i++) {
        tasa_interes_mes = calcularTasaInteresMensual(tasa_interes, monto_mensual);
        monto_acumulado += monto_mensual; 
        interes_acumulado += tasa_interes_mes; 
        printf("Mes: %d, Ahorro: %.2lf, Interes Acumulado: %.2lf, Ahorro + Interes: %.2lf\n", i, monto_acumulado, interes_acumulado, monto_acumulado + interes_acumulado);
    }

    return 0;
}

double calcularTasaInteresMensual(double tasa_interes, double monto_mensual) {
    double tasa_interes_mes = (((tasa_interes / 12) / 100) * monto_mensual);
    return tasa_interes_mes;
}
