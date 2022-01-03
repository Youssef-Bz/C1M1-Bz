#include <stdio.h>
#include <stdlib.h>


/* Size of the Data Set */
#define SIZE (40)

void main() {
   unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                               114, 88,   45,  76, 123,  87,  25,  23,
                               200, 122, 150, 90,   92,  87, 177, 244,
                               201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char sorted_array[SIZE];
  int maximum = 0, minimum = 0, median = 0, mean = 0;

  printf("Embedded Software HW1 \n");
  printf("Unsorted array \n");
  print_array(test);
  sort_array(test);
  printf("\nSorted array \n");
  print_array(test);
  printf("\n");
  maximum = find_maximum(test);
  minimum = find_minimum(test);
  median  = find_median(test);
  mean   = find_mean(test);
  print_statistics(median, mean, maximum, minimum);

 }

void sort_array(unsigned char test[]) {
     
}
void print_statistics(int median, int mean, int maximum, int minimum) {
 
}

void print_array(unsigned char test[]) {
       
}

int find_maximum(unsigned char test[]) {
       
}

int find_minimum(unsigned char test[]) {
       
}

int find_median(unsigned char sorted_array[]) {
       
}

int find_mean(unsigned char test[]) {
}      
