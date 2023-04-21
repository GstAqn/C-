//O programa a seguir receberá uma única palavra e contará seu número de vogais
#include <iostream>
#include <string>

int main(){
  std::string palavra;
  char vetorVogal[5] = {'a','e','i','o','u'};

  std::cin >> palavra;
  std::string::iterator it;

  for(int i = 0; i < 5; i++){
    int count = 0;
    for(it = palavra.begin(); it != palavra.end(); it++){
      if (*it == vetorVogal[i]){
        count++;
      }
    }
    std::cout << "Para a palavra '" << palavra << "' " << "existem " << count << " vogais '" <<  vetorVogal[i] << "' " <<  " repetidas." << std::endl;
  }

  return 0;
}