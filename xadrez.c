#include <stdio.h>
int main(){
  int torre=1,bispo=1, movimentocavalo=1;
  
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
  printf("\n");
  while (movimentocavalo <= 1)
  {
    movimentocavalo++;
    printf("cavalo:{\n");
    for(int movimentocavalo2=1; movimentocavalo2 <=2; movimentocavalo2++ ){
      printf("baixo\n");
    }
    printf("esquerda\n}");
  }
return 0;
}


