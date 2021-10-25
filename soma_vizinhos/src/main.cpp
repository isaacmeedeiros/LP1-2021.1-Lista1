/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
int m,n;
int m1;
int total = 0;

while( cin >> std::ws >> m >> n) {
  m1 = m;

  if(n>0){
    for(int x = 0 ; x < n ; x++){
      if(x==0){
        total = m1;
      }
      else if(x>0){
      m1++;
      total = total + m1;
      }
    }
  }
  else if(n<0){
    for(int x = 0 ; x > n ; x--){
      if(x==0){
        total = m1;
      }
      else if(x<0){
         m1--;
        total = total + m1;
      }
  }

}
  else if(n==0){
    total = m;
  }
cout << total << endl;
}
return 0;
}
