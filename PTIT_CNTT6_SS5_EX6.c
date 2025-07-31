#include<stdio.h>

int main() {
float a,b,sum;
    char math;

    printf("moi ban nhap so thu nhat :");
    scanf("%f",&a);
    printf("moi ban nhap so thu hai :");
    scanf("%f",&b);
    printf("moi ban nhap phep toan(+,-,*,/):");
     scanf(" %c",&math);

    switch(math){
        case '+':
            sum=a+b;
            printf("ket qua cua ban la : %.0f",sum);
            break;
        case '-':
            sum=a-b;
            printf("ket qua cua ban la : %.0f",sum);
            break;
        case '*':
            sum=a*b;
            printf("ket qua cua ban la : %.0f",sum);
            break;
        case '/':
            if(a==0,b==0) {
                printf("khong the chia cho 0");
            }else if (a<b){
                printf("phep toan nay kho");
            }else {
                sum=a/b;
                printf("ket qua cua ban la : %.0f",sum);
            }
            break;
            default:
            printf("phep toan khong hop le");
    }

    return 0;
}