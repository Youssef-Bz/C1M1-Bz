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
       int i = 0, j = 0;
       unsigned char temp = 0;
       for (j = 0; j < SIZE; j++) {
               for (i = 0; i < SIZE; i++) {
                       if (test[j] > test[i]) {
                               temp = test[j];
                               test[j] = test[i];
                               test[i] = temp;

                       }
               }

       }
}
void print_statistics(int median, int mean, int maximum, int minimum) {
       printf("Median = %i; \t Mean = %i; \t Maximum = %i; \t Minimum = %i\n", median, mean, maximum, minimum);
}

void print_array(unsigned char test[]) {
       int i = 0;
       for (i = 0; i < SIZE; i++) {
               printf("%i\t%i\n", test[i], i);
       }
}

int find_maximum(unsigned char test[]) {
       int i = 0, maximum = 0;
       for(i = 0; i < SIZE; i++) {
               if(maximum < test[i]) {
                       maximum = test[i];
               }
       }
}

int find_minimum(unsigned char test[]) {
       int i = 0, minimum = 0;
       for(i = 0; i < SIZE; i++) {
               if(minimum < test[i]) {
                       minimum = test[i];
               }
       }
       return minimum;
}

int find_median(unsigned char sorted_array[]) {
       int i = 0, median = 0;
       if (SIZE % 2 == 0) {
               median = sorted_array[SIZE/2] + sorted_array[SIZE/2 - 1];
       } else {
               median = sorted_array[(SIZE - 2) / 2];
       }
       return median;
}

int find_mean(unsigned char test[]) {
       int i = 0, mean = 0;
       for(i = 0; i < SIZE; i++) {
               mean = mean + test[i];
       }
       mean = mean / (SIZE + 1);
       return mean;
 }
