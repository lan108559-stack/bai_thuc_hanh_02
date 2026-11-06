#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0!\n");
        return 1;
    }

    float *arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    printf("\nNHAP MANG 1 CHIEU\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d] = ", i);
        scanf("%f", arr + i);
    }
    printf("\n--- MANG 1 CHIEU VUA NHAP ---\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\t", *(arr + i));
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}