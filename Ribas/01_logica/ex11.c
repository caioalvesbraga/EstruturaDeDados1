#include <stdio.h>
#include <string.h>

int main(void)
{
  int i = 0;
  int lines;
  scanf("%i", &lines);
  char text[lines][1001];
  int A, B;

  for (int i = 0; i < lines; i++)
  {
    scanf(" %10000[^\n]", text[i]);
  }

  scanf("%i %i", &A, &B);

  char action;
  while (scanf(" %c", &action) > 0)
  {
    if (action == 'j')
    {
      if (A < lines)
      {
        A++;
      }
    }
    else if (action == 'k')
    {
      if (A > 1)
      {
        A--;
      }
    }
    int sizeL = strlen(text[A - 1]);

    if (sizeL < B)
    {
      printf("%i %i %c\n", A, sizeL, text[A - 1][sizeL - 1]);
    }
    else
      printf("%i %i %c\n", A, B, text[A - 1][B - 1]);
  }
  return 0;
}
