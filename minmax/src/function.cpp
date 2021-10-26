#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
int min,max;
int mi,ma;
  for(int x = 0; x<n; x++){
    if(x==0){
      min = V[0];
      max = V[0];
      mi = x;
      ma = x;

    }
    else if(x>0){
      if(V[x]< min){
        min = V[x];
        mi = x;  
      }
      else if(V[x]>= max){
        max = V[x];
        ma = x;
      }
    }
  }
  if(n==0){
    mi = -1;
    ma = -1;
  }
return {mi,ma};
}
