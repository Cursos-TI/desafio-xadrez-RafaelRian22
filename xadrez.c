#include <stdio.h>
int main(){
  int torre=1,bispo=1;
  
  while(torre <= 5){
     printf("torre: direita.\n");
     torre++;
    }
  
    printf("\n");
  
  do {
    printf("bispo: cima,direita.\n");
    bispo++;
 
  } while(bispo <= 5);
  
  printf("\n");
  
  for(int rainha = 1; rainha <= 8; rainha++){
    printf("rainha: esquerda.\n");
  }
return 0;
}

