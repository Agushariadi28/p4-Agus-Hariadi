#include<stdio.h>

main(){
	char nama [8][10][30];
	int i,j;
	for(i=0;i<8;i++){
		for(j=1;j<10;j++){
			printf("sahabat[%d][%d]=",i,j);
			scanf("%s",&nama[i][j]);
		}
	}
}
