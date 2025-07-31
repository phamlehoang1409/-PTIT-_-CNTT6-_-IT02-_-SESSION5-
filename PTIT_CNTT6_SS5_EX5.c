#include<stdio.h>
int main() {
float money=20000;
    int age;

    printf("moi ban nhap vao tuoi :");
    scanf("%d",&age);

   if (age<=0) {
       printf("tuoi khong hop le");
   }else {
       if (age<6) {
           money=money-money;
       }else if (age>=6&&age<=18) {
           money=money*0.5;
       }else if (age>=19&&age<=60) {
           money=money;
       }else if (age<60) {
           money = money*0.7;
       }else{
           printf("tuoi khong hop le");
       }
       printf("tien cua ban la : %.0f VND",money);

   }









    return 0;
}