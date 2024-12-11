#include <stdio.h>

int main() {
    
    float math, literature, english, total, average;
    printf("Hay nhap diem Toan: ");
    scanf("%f", &math);
    printf("Hay nhap diem Van: ");
    scanf("%f", &literature);
    printf("Hay nhap diem Anh: ");
    scanf("%f", &english);

    
    total = math + literature + english;
    average = total / 3;

    
    printf("Tong diem la: %.2f\n", total);
    printf("Ðiem trung binh là: %.2f\n", average);

    return 0;
}


