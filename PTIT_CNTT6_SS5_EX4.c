#include<stdio.h>
int main() {
float money, sum;


    printf("moi ban nhap vao muc thu nhap cua ban");
    scanf("%f",&money);

    if (money<=5000000) {
        sum=money*5/100;
    }else if (money>5000000&&money<=10000000) {
        sum=money*10/100;
    }else if (money>10000000) {
        sum=money*15/100;
    }else {
        printf("khong hop le");
    }
    printf("thue cua ban la %.0f Vnd",sum);
    return 0;
}







