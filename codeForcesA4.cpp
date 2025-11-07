#include <stdio.h>

void lerKg(int valorKg){
	if(valorKg >2 && valorKg % 2 ==0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

}

int main(){
	int valor = 0;
	
	scanf("%d",&valor);
	
	lerKg(valor);	

	return 0;
}