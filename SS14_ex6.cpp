#include <stdio.h>
#include <string.h>

int main(){
	char sigma[50];
	int all;
	
	printf("Moi ban nhap chuoi ki tu : ");
	fgets(sigma , 50 , stdin);
	for(int i = 0 ; i < strlen(sigma) ; i++){
		if(sigma[i] >= 'a' && 'z' <= sigma[i] || sigma[i] >= 'A' && 'Z' <= sigma[i]){
			all++;	
		}
	}
	
	printf("So luong la chu cai trong chuoi la %d", all);
	return 0;
}
