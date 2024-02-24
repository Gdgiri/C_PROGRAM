#include<stdio.h>

int main(){
int a;

printf("Enter the number: ");
scanf("%d",&a);

for(int i=a;i>1;i--){
for(int space=a;space>a-1;space--){
printf(" ");
}
for(int j=1;j<i;j++){
printf("*");

}
printf("\n");
}
return 0;
}