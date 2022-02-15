#include <stdio.h>
#include <math.h>
int main(){
  int a;
  printf("Enter the number you want to check the conditions\n");
  scanf("%d",&a);
  if (a%6==0 && a%4!=0 && 0<a && a<100) {
    printf("Your number matches all the conditions");
  }
  else{
    printf("Your number doesn't matches all the conditions");
  }

}