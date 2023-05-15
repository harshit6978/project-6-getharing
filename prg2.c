#include<stdio.h>

int sum(int a[], int size) {
	
    int sum = 0,i;
    for(i = 0; i <size; i++){
        sum += a[i];
    }
    
    return sum;
}


int main(){
	
    int size,i,totalSum;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    
	}

    totalSum = sum(a, size);

    printf("Sum of array elements: %d\n", totalSum);

    return 0;
}

