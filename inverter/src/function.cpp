#include <iostream>
#include <array>
#include <algorithm>    // std::swap
/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{

if((SIZE % 2) == 0){ //SIZE PAR
  for(int x = 0; x<(SIZE/2);x++){ 
    std::swap (arr[x],arr[SIZE-x-1]);
  
  }
}
else if((SIZE % 2)!= 0){
  int aux = SIZE;
  for(int x = 0; x<((SIZE-1)/2); x++){
    std::swap (arr[x],arr[SIZE-x-1]);
  }
}
}

