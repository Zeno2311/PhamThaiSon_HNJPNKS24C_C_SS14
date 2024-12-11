#include <stdio.h>
#include <string.h>

int main(){
	char sigma[50];
	char checkkitu;
	int could;
	printf("Moi ban nhap chuoi ki tu bat ki : ");
	fgets(sigma , 50 , stdin);
	printf("\nBan muon tim ki tu nao trong mang : ");
	scanf("%c", &checkkitu);
	
	for(int i = 0 ; i < strlen(sigma) ; i++){
		if(sigma[i] == checkkitu){
			could++;
		}
	}
	printf("\nKi tu %c ban tim xuat hien %d lan trong chuoi ki tu.", checkkitu, could);
	
	return 0;
}
