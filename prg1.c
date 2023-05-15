#include<stdio.h>
int fact(int n){
	if(n>0){
		return n * fact(n-1);
	}
	else{
		return 1;
	}
}

	
int main(){
		
		int a;
		printf("enter a value:");
		scanf("%d",&a);
		
		printf("%d",fact(a));
	
	return 0;
	}

