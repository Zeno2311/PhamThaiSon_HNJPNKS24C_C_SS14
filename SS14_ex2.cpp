#include <stdio.h>
#include <string.h>

int main(){
	char sigma[50];
	printf("Moi ban nhap bat ki ki tu nao : ");
	scanf("%s", &sigma);
	
	for(int i=0;i < strlen(sigma); i++){
		printf("%3c",sigma[i]);
	}
	return 0;
}
