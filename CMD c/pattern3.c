#include<stdio.h>

int main(){
int a;

printf("Enter the number: ");
scanf("%d",&a);

for(int i=a;i>1;i--){
for(int j=0;j<i;j++){
printf("*");
}
printf("\n");
}
return 0;

}