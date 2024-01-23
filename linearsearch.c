#include <stdio.h>

int main()
{
  int array[100],  ar_search, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d Elements in the aray \n", n);
  for (i = 0; i < n; i++)
  scanf("%d", &array[i]);
  
printf("Enter a number to search from the array \n");
scanf("%d",&ar_search);
  for (i = 0; i < n; i++)
   if (array[i] == ar_search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n",ar_search,i+1);
      break;
    }
    if (i == n)
    printf("%d isn't present in the array.\n",ar_search);

  return 0;
}
