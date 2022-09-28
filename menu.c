#include <stdio.h>

int menu(void);
int somar(void);

int main(){
  int opc = 0;

  while (opc != 6){
    opc = menu();
    switch (opc)
    {
    case 1:/* constant-expression */
      printf("O valor da soma: %d.\n\n", somar());
      /* code */
      break;
    case 2:/* constant-expression */
      printf("Vai subtrair.\n\n");
      /* code */
      break;
    default:
      printf("Valor inválido\n\n");
      break;
    }
  }
  return 0;
}

int menu(){
  int opcao = 0;

  printf("Selecione uma operação:\n");
  printf("1 - Soma\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");
  printf("5 - Ao quadrado\n");
  printf("6 - Sair\n");

  scanf("%d", &opcao);

  return opcao;
}

int somar(){
  int a=0;
  int b=0;
  printf("Digite o primeiro valor:");
  scanf("%d", &a);
  printf("Digite o segundo valor:");
  scanf("%d", &b);

  return a+b;
}