#include <stdio.h>

int main() {
    int a, b;
    int max;

    
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d la so lon nhat\n", a);
    } else if (a < b) {
        printf("%d la so lon nhat\n", b);
    } else {
        printf("Hai so bang nhau: %d\n", a);
    }

    return 0;
}
