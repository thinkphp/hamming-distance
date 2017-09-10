/**
 *  The Hamming Distance between two strings of equal length is the number of positions 
 *  at which the corresponding symbols are different.
 */
#include <stdio.h>

unsigned hamdist(unsigned a, unsigned b) {

         unsigned dist = 0, 
                  val = a ^ b; //XOR

         while( val ) {
       
               dist++;

               val &= val - 1; 
         }

     return dist;
};
 
int main() {

    printf("Hamming distance between %d and %d is %d\n", 7, 2, hamdist(7, 2));
    printf("Hamming distance between %d and %d is %d\n", 127, 256, hamdist(127, 256));
    printf("Hamming distance between %d and %d is %d\n", 4, 3, hamdist(4, 3));

 return(0);
};