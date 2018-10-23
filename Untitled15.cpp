#include<conio.h>
#include<stdio.h>
void nhapmang(int array[100],int n){
	for(int i=0;i<n;i++){
	printf("\narray[%d]=",i);
	scanf("%d",&array[i]);
}
}
int giaithua(int m,int gt){
for(int i=1;i<=m;i++){
	gt=gt*i;
}
printf("giai thua cua so nguyen m la %d",gt);
}
int main(){
	int mang[100];
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	nhapmang(mang,n);
	int m;
	int gt=1;
	printf("nhap so nguyen m=");
	scanf("%d",&m);
	giaithua(m,gt);
}
