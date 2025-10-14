#include <stdio.h>
#define MAX 25
void main()
{
  int frag[MAX], b[MAX], f[MAX], i, j, nb, nf, temp, highest;
  int bf[MAX] = {0}, ff[MAX] = {0};
  printf("\n\tMemory Management Scheme - Worst Fit");
  printf("\nEnter the number of blocks: ");
  scanf("%d", &nb);
  printf("Enter the number of files: ");
  scanf("%d", &nf);
  printf("\nEnter the size of the blocks:-\n");
  for (i = 1; i <= nb; i++)
  {
    printf("Block %d: ", i);
    scanf("%d", &b[i]);
  }
  printf("Enter the size of the files :-\n");
  for (i = 1; i <= nf; i++)
  {
    printf("File %d: ", i);
    scanf("%d", &f[i]);
  }
  for (i = 1; i <= nf; i++)
  {
    highest = -1;
    for (j = 1; j <= nb; j++)
    {
      if (bf[j] == 0)
      { // if block is not allocated
        temp = b[j] - f[i];
        if (temp >= 0 && temp > highest)
        {
          ff[i] = j;
          highest = temp;
        }
      }
    }

    frag[i] = highest;
    bf[ff[i]] = 1; // mark block as allocated
  }
  printf("\nFile_no:\tFile_size:\tBlock_no:\tBlock_size:\tFragment");
  for (i = 1; i <= nf; i++)
  {
    if (ff[i] != 0)
    {
      printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i, f[i], ff[i], b[ff[i]], frag[i]);
    }
    else
    {
      printf("\n%d\t\t%d\t\tNot Allocated", i, f[i]);
    }
  }
}