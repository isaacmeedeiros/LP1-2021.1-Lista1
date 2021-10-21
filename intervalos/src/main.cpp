/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
int x;
char N;
double contador = 0;
double intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0, intervalo5 = 0;


while( cin >> std::ws >> x) {
  if(x == N){
    break;
  }
  else if(x>= 0 && x<= 24){
    intervalo1++; 
  }
  else if(x>= 25 && x< 50){
    intervalo2++; 
  }
  else if(x>= 50 && x< 75){
    intervalo3++; 
  }
  else if(x>= 75 && x< 100){
    intervalo4++; 
  }
  else{
    intervalo5++;
  }

contador++;
}
double resultado1 = (intervalo1/contador) *100;
double resultado2 = (intervalo2/contador) *100;
double resultado3 = (intervalo3/contador) *100;
double resultado4 = (intervalo4/contador) *100;
double resultado5 = (intervalo5/contador) *100;

std::cout << std::setprecision(4) << resultado1 << '\n';
std::cout << std::setprecision(4) << resultado2 << '\n';
std::cout << std::setprecision(4) << resultado3 << '\n';
std::cout << std::setprecision(4) << resultado4 << '\n';
std::cout << std::setprecision(4) << resultado5 << '\n';
return 0;
}
///contador * 100;