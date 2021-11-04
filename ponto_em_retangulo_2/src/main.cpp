#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;
#include <tuple>
using std::tie;

#include "function.h"

// analyzes two points and determines which is the lower left and which is the upper right
void verify( Ponto *P1, Ponto *P2 ) {

    Ponto aux;

    if((P1->x < P2->x) || (P1->x == P2->x && P1->y < P2->y) || (P1->y == P2->y && P1->x < P2->x)) {
        // in this case, P1 is the lower left vertex and P2 is the upper right vertex
        return;
    } else {
        // in this case, P1 is the upper right vertex and P2 is the lower left vertex
        aux = *P1;
        *P1 = *P2;
        *P2 = aux;
    } 
}
int main(void)
{ 
    Ponto P;
    Ponto IE;
    Ponto SD;

    // receives the coordinates and assumes P1 == IE and P2 == SD
    while(cin >> std::ws >> IE.x >> std::ws >> IE.y >> std::ws >> SD.x >> std::ws >> SD.y >> std::ws >> P.x >> std::ws >> P.y) {
        // prints 'invalid' if IE == R2
        if(IE.x == SD.x && IE.y == SD.y) std::cout << "invalid" << std::endl;
        else {
            // checks the relative position between the first two points received
            verify(&IE, &SD);
            // checks the position of P
            location_t result = pt_in_rect(IE, SD, P);

            // prints the result of the analysis done by pt_in_rect
            if(result == 0) std::cout << "inside" << std::endl;
            else if(result == 1) std::cout << "border" << std::endl;
            else std::cout << "outside" << std::endl;
        }
    }

    return 0;
}