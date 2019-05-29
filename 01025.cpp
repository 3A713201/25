#include<stdio.h>
#include<stdlib.h>

int main(void){
	int o,p;
	int *ptr[4];
	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	
	for(o=0;o<4;o++){
		ptr[o]=array[o];
	}

	for(o=0;o<4;o++){
		for(p=0;p<3;p++){
			printf("%3d", *(ptr[o]+p));
		}
		printf("\n");
	}
	system("pause");
	return 0;
} 
