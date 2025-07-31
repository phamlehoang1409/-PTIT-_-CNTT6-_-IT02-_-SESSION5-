#include<stdio.h>
int main() {
char c;

    printf("moi ban nhap chu cai :");
    scanf("%c",&c);

    if (c>='a'&&c<='z') {
        printf("%c\n",c-32);
    }else if (c>='A'&&c<='Z') {
        printf("%c\n",c+32);
    }else {
        printf("day khong phai chu cai");
    }
    return 0;
}