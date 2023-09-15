#include <stdio.h>
int main(){
	int n1,n2;
	printf("\bnNhap 2 so:");
	scanf("%d %d ,&n1,&n2");
	findMaxNumber(n1,n2);
	findMinNumber(n1,n2);
}
void findMaxNumber(int a,int b){
	//coding here
	if(a<b){
		printf("Max: %d,a");
	}
else{
	printf("Max: %d",b);
}
else{
	printf("Max: %d")
}
}
void findMinNumber(int a,int b){
	if (a<b){
		printf("Min: %d",a);
	}
else{
	printf ("Min: %d",b);
}
