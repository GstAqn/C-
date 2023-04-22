//Neste código o objetivo é praticar a escrita de funções.
//Serão feitas duas funções: uma que calcula o fatorial,  outra que conta a quantidade de inteiros em um intervalo.
//Fatorial --> A função fatorial recebe um número inteiro. Caso esse número seja negativo, o valor 1 deve ser retornado
//Intervalo --> A função intervalo conta a quantidade de inteiros entre dois números de ponto flutuante. A contagem é inclusiva. 
//Isso é, caso o número de ponto flutuante também seja um inteiro, ele deve ser contado.

int main(){

  return 0;
}

int fatorial(int num){
  if (num > 0){
    int fator = 1;
    for (int i = num; i != 0; i--){
      fator *= i;
    }
    return fator;
  }else{
    return 1;
  }
}

int intervalo(double num1, double num2){
  int intervalo = num2 - num1;
  if (intervalo < 0){
    intervalo *= -1; 
  }
  
  return intervalo;
}