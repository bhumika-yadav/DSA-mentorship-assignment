#include <stdio.h>

int main() {
   int low, high, i, result;
   printf("Enter the lower limit: ");
   scanf("%d", &low);
   printf("Enter the upper limit: ");
   scanf("%d", &high);

   while (low < high) {
      result = 0;
      
      if (low <= 1) {
         ++low;
         continue;
      }
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            result = 1;
            break;
         }
      }

      if (result == 0)
         printf("%d ", low);

      ++low;
   }
   printf(" are the prime numbers  ", low, high);
    
   return 0;
}
