#include <iostream>
//Neste código o objetivo é praticar a escrita de funções.
//Serão feitas duas funções: uma que calcula o fatorial,  outra que conta a quantidade de inteiros em um intervalo.
//Fatorial --> A função fatorial recebe um número inteiro. Caso esse número seja negativo, o valor 1 deve ser retornado
//Intervalo --> A função intervalo conta a quantidade de inteiros entre dois números de ponto flutuante. A contagem é inclusiva. 
//Isso é, caso o número de ponto flutuante também seja um inteiro, ele deve ser contado.

int main(){
  int entrada = 0;
  std::cout << "Selecione uma função:" << std::endl << " 1 - fatorial." << std::endl << "2 - intervalo." << std::endl;
  std::cin >> entrada;

  if(entrada == 1){
    int fator = 0;
    std::cout << "Insira um número para o cálculo do fatorial:" << std::endl;
    std::cin >> fator;
    fatorial(fator);
  }else{
    double int_1 = 0.0; double int_2 = 0.0;
    std::cout << "Insira os intervalos" << std::endl;
    std::cin >> int_1, int_2;
    intervalo(int_1, int_2);
  }
  return 0;
}

int fatorial(int num){
  int fator = 1;
  if (num > 0){
    for (int i = num; i != 1; i--){
      fator *= i;
    }
    return fator;
  }else{
    return fator;
  }
}

int intervalo(double num1, double num2){
  int intervalo = num2 - num1;
  if (intervalo < 0){
    intervalo *= -1; 
  }
  
  return intervalo;
}