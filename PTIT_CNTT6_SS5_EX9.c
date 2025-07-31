#include <stdio.h>

int main() {
    float salaryNumber, salary, reward = 0;
    int workingDay, position;
    int allowance = 0;


    printf("Nhap he so luong: ");
    scanf("%f", &salaryNumber);

    printf("Nhap so ngay cong trong thang: ");
    scanf("%d", &workingDay);

    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &position);

    switch (position) {
        case 1:
            allowance = 500000;
            break;
        case 2:
            allowance = 1000000;
            break;
        case 3:
            allowance = 2000000;
            break;
        default:
            printf("Chuc vu khong hop le\n");
            allowance = 500000;
    }

    if (workingDay > 26) {
        reward = (workingDay - 26) * 200000;
    }


    salary = workingDay * 160000 * salaryNumber + allowance + reward;


    printf("He so luong: %.2f\n", salaryNumber);
    printf("So ngay cong: %d\n", workingDay);
    printf("Phu cap: %d VND\n", allowance);
    printf("Thuong: %.0f VND\n", reward);
    printf("Luong tong cong: %.0f VND\n", salary);

    return 0;
}
