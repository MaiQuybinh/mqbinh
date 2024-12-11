#include <stdio.h>

int main() {
    
    float base, height, area;
    printf("Hay nhap do dai canh cua tam giac: ");
    scanf("%f", &base);
    printf("Hay nhap chieu cao cua tam giac: ");
    scanf("%f", &height);

    
    area = 0.5 * base * height;

    
    printf("Dien tich cua tam giac la: %.2f\n", area);

    return 0;
}
