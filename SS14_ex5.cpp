#include <stdio.h>
#include <string.h>

int main(){
	char sigma[50];
	int check;
	printf("Moi ban nhap chuoi ki tu bat ki : ");
	fgets(sigma , 50 , stdin);
	printf("Chuoi ki tu cua ban : ");
	fputs(sigma , stdout);
	
	for(int i = 0; i < strlen(sigma) ; i++){
		if(sigma[i] == ' '){
			check++;
		}
		if(check == 1){
			check++;
		}
	}
	printf("Chuoi ki tu cua ban gom %d tu ", check);
}
