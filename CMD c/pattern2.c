#include<stdio.h>

int main(){
int a;

printf("Enter the number: ");
scnaf("%d",&a);

for(int i=0;i<a;i++){
for(int space=0;space<a-i;space++){
printf(" ");
}
for(int j=0;j<i;j++){
printf("* ");
}
print("\n");
}
return 0;
}