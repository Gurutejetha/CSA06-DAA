#include <stdio.h>
int main() {
  int n;
  double arr[100];
  int i;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  for ( i = 0; i < n; ++i)
   {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
}
  for (i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %.2lf", arr[0]);
  return 0;
}
