#include <stdio.h>

int parking(){
	
	int h , g = 0 , f , w;
	
	printf("Cases");
	
	scanf("%d", &h);
	
	printf("\nint: ");
	scanf("%d", &f);
		
	for(w; w < f; w++){
		w = f;
		printf("%d",w);
	}
	
	
}

int main(){
	parking();
	return 0;
}