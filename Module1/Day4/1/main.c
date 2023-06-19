#include <stdio.h>

int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int n = sizeof(arr) / sizeof(arr[0]);
   int sum = 0;

   // Calculate sum
   for (int i = 0; i < n; i++) {
      sum += arr[i];
   }

   // Calculate average
   float average = (float)sum / n;

   // Output sum and average
   printf("Sum: %d\n", sum);
   printf("Average: %.2f\n", average);

   return 0;
}
