#include <stdio.h>

int main() {
  int grades[3];
    int average;
    
      grades[0] = 80;
        grades[2] = 90;
        grades[1] = 100;
               
           average = (grades[0] + grades[1] + grades[2]) / 3;
             printf("The average of the 3 grades is: %d", average);
                   
               return 0;
           }