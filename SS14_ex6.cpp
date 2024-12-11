#include <stdio.h>
#include <string.h>

int main(){
	char sigma[50];
	int number = 0;
	int all;
	
	printf("Moi ban nhap chuoi ki tu : ");
	fgets(sigma , 50 , stdin);
	
	for(int i = 0 ; i < strlen(sigma) ; i++){
		for(int j=0 ; j <= 9 ; j++){
			if(sigma[i] == j){
				number++;
			}
		}
	}
	all = strlen(sigma) - 2 - number ;
	printf("So luong la chu cai trong chuoi la %d", all);
	return 0;
}
