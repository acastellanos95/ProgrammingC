#include <stdio.h>

int main(){
	int A[10]={10,9,8,7,6,5,4,3,2,1};
	int lenA = sizeof(A);
	int lenAi = sizeof(A[0]);
	printf("%d, %d", lenA, lenAi);
	for(int i=0;i<=10;i++){
		printf("%d", A[i]);
	}
	return 0;
}
