#include <stdio.h>

int main(){ 
   //Nhap vao mot so va kiem tra so do la so chan hay so le
   int number;
   printf("Nhap vao mot so nguyen: ");
   scanf("%d", &number);
   if(number%2==0){
   printf("So nhap vao la so chan");
   }else {
   printf("So nhap vao la so le");
   }
   return 0;
}

