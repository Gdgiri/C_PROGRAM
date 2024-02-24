#include<stdio.h>

int main(){
int a;

printf("Enter the number: ");
scanf("%d",&a);

for(int i=0;i<a;i++){
for(int space=0;space<a-i;space++){
printf(" ");
}
for(int j=0;j<i;j++){
printf("*");
}
printf("\n");
}
return 0;
}