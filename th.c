

#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  int count;
  int i;

  // Create an array of character arrays. Each row of the 2D array
  //will store a sequence of characters (i.e., a string)
  char string[50][100]; //  Can store up to 50 strings of 99 characters
  printf("Enter the value of n\n");
  scanf("%d",&n);
  if(n > 50) {
    fprintf(stderr, "Error. I can't store that many strings\n");
    exit(-1);
  }
  //printf("Enter the words\n");

  // Initialize count here.
  //count = 0;
  //while(count<n)
   for(count = 0; count< n; count++)  {
    // Only the first dimension of the array is referenced in the
    // next statement. scanf fills up the referenced row with the
    // string that's read in
    scanf("%s", string[count]);
   // count++;
  }
  printf("The strings that you entered are\n");
  //I want to print all the strings that i took as input from scanf
  for(count = 0; count< n; count++) {
    printf("Word #%02d is : %s\n", count, string[count]);
  }
 }