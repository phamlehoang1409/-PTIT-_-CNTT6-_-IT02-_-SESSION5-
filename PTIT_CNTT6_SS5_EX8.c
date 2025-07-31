#include<stdio.h>
int main() {
float waterNumber;

    printf(" Enter plase waterNumber:");
    scanf("%f",&waterNumber);

    if (waterNumber>0&&waterNumber<=10) {
       waterNumber=waterNumber*6000;
    }else if (waterNumber<=11&&waterNumber<=20) {
        waterNumber=waterNumber*7000;
    }else if (waterNumber>=21&&waterNumber<=30) {
        waterNumber=waterNumber*8500;
    }else if (waterNumber>30) {
        waterNumber=waterNumber*1000;
    }else {
        printf("waterNumber is invalid");
    }
printf("so tien nuoc cua ban la : %.0f VND",waterNumber);


    return 0;
}