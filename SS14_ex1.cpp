#include <stdio.h>
#include <string.h>

int main(){
	char sigma[50];
	
	printf("Ho va ten : ");
	fgets(sigma,50,stdin);
	printf("\nHo ten ma ban da nhap vao : ");
	fputs(sigma,stdout);
	
	return 0;
}
