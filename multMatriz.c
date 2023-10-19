#include <stdio.h>

int main(void) {
  int linhas1, colunas1,i,j, aux, h;
  int linhas2, colunas2, contador = 0;

  //leitura da qnt de linhas e colunas da matriz1
  printf("Digite o tamanho da primeira matriz:\n");
  scanf("%d %d", &linhas1, &colunas1);
	
	int matriz1[linhas1][colunas1];
  int matrizaux1[colunas1][linhas1];
  
  for(i = 0; i <linhas1; i++){
    for(j = 0; j <colunas1; j++){
      printf("Leitura da linha %d coluna %d\n", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }
  //calcular a matriz1T
  for(i = 0; i <linhas1; i++){
    for(j = 0; j <colunas1; j++){  
      matrizaux1[j][i] = matriz1[i][j];
    }
  }


  //leitura da qnt de linhas e colunas da matriz2
  printf("Digite o tamanho da segunda matriz:\n");
  scanf("%d %d", &linhas2, &colunas2);
	
	int matriz2[linhas2][colunas2];
  int matrizaux2[colunas2][linhas2];
  
  for(i = 0; i <linhas2; i++){
    for(j = 0; j <colunas2; j++){
      printf("Leitura da linha %d coluna %d\n", i, j);
      scanf("%d", &matriz2[i][j]);
    }
  }
  //calcular a matriz2T
  for(i = 0; i <linhas2; i++){
    for(j = 0; j <colunas2; j++){  
      matrizaux2[j][i] = matriz2[i][j];
    }
  }

  if(linhas1 != colunas2){
    printf("Dimensoes das matrizes sao incompativeis para o produto.\n");
    return 0;
  }else{
    int matrizFinal[200][200] = {0};
    // colunas1 = linhas2
    int linhasM, colunasM,n, h;
    linhasM = colunas1;
    colunasM = linhas2;
    
    for(i = 0; i < linhasM; i++){
      for(j = 0; j < colunasM; j++){  
        for(n = 0; n < linhas1; n++){  
          matrizFinal[i][j] += (matrizaux1[i][n] * matrizaux2[n][j]);
        }  
    }
  }
  //imprimir a matrizFinal
  printf("A matriz final é:\n");
  for(i = 0; i <linhasM; i++){
    for(j = 0; j <colunasM; j++){  
      printf("%d ", matrizFinal[i][j]);
    }
    printf("\n");
  }
  
    //matrizaux1 é a transposta da matriz1
    //matrizaux2 é a transposta da matriz2
    //A.B = linha a por coluna b
    //primeira
    // a b c      x y 
    // d e f   .  h i   2x3 . 3x2 = 2x2
    //            z j
    
  }
  
  return 0;
}


