#include <stdio.h>
#include <string.h>

int main(){
	char sigma[50];
	
	printf("Moi ban nhap chuoi ki tu bat ky : ");
	scanf("%s", &sigma);
	
	printf("Dao chuoi ky tu : ");
	for(int i = strlen(sigma) ; i >= 0 ; i--){
		printf("%c", sigma[i]);
	}
	return 0;
}
