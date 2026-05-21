#include <stdio.h>
int main() {
    float peso, altura, bmi;
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);
    
    bmi = peso / (altura * altura);
    
    printf("Su BMI es: %.2f\n", bmi);
    
    if (bmi < 18.5) {
        printf("Bajo peso\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Peso normal\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }
    
    return 0;
}