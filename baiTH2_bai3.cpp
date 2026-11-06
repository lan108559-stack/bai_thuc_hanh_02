#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    char ma[20];
    char ten[50];
    float d1, d2, d3;
};

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    
    struct SinhVien *ds = (struct SinhVien *)malloc(n * sizeof(struct SinhVien));
    if (ds == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    // Nhap du lieu
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        
        printf("Nhap ma sinh vien: ");
        scanf("%s", ds[i].ma);
        
        fflush(stdin); // Xoa bo nho dem de nhap ho ten
        printf("Nhap ho ten: ");
        gets(ds[i].ten);

        printf("Nhap diem 1: ");
        scanf("%f", &ds[i].d1);

        printf("Nhap diem 2: ");
        scanf("%f", &ds[i].d2);

        printf("Nhap diem 3: ");
        scanf("%f", &ds[i].d3);
    }

    // In ra danh sach sinh vien
    printf("\nDanh sach sinh vien vua tao:\n");
    printf("%-5s %-15s %-25s %-8s %-8s %-8s\n", "STT", "Ma SV", "Ho ten", "Diem 1", "Diem 2", "Diem 3");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-25s %-8.2f %-8.2f %-8.2f\n", 
                i + 1, ds[i].ma, ds[i].ten, ds[i].d1, ds[i].d2, ds[i].d3);
    }

    // Giai phong bo nho
    free(ds);

    return 0;
}