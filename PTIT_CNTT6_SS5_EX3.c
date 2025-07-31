#include<stdio.h>
int main() {
float a,b;
    printf("moi ban nhap so thu nhat :");
    scanf("%f",&a);
    printf("moi ban nhap so thu hai :");
    scanf("%f",&b);

    if (a==0) {
        if (b==0) {
            printf("phuong trinh vo so nghiem");
        }else {
            printf("phuong trinh vo nghiem");
        }
    }else {
        float x= -b/a;
        printf("phuong trinh co nghiem la %.2f",x);
    }
    return 0;
}