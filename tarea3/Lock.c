#include <stdio.h>

/*
Alejandro Posada Noreña
8972339
Ejercicio 3
*/

int marks(){
	
	int marks[40];
	
	int i , j , k , l , m , ans;
	
	scanf("%d%d%d%d", &j , &k , &l , &m);
	
	printf("%d %d %d %d", j , k , l , m);
	printf("\n");
		
	for (i = 0 ; i < 40 ; i++){
		marks[i] = i;
	}
	
	ans = 720;
	
	while(j <= k){
		marks[j];
		j++;
		
	}
	
	ans = 360;
		
	while(k >= l){
		marks[k];
		k--;
	}
	
	ans = 540;
	
	while(l <= m){
		marks[l];
		l++;
	}
	
	return ans;
}

int main(){
	marks();
	return 0;
}