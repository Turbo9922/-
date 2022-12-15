#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
  double x, y, count;
  char name[10], ch;
  count = 0;
  srand(time(NULL));
  x = rand() % 100 + 1;
  printf("Enter ur name :");
  scanf("%s",name);
  printf("Hello %s \n",name);
  do
  {
    count++;
    printf("What is number 1-100 do you want to try :");
    scanf("%lf",&y);
    printf("\nThis is ur number : %.0f\n",y);
    if (x == y)
    {
      printf("You correct !!\n");
      printf("This is your count : %g\n",count);
      printf("Answer is %g\n",x);
      count = 0;
      x = rand() % 100 + 1;
      do
        {
          while( getchar() != '\n');
          printf("Enter y to play again or n to exit :");
          scanf("%c", &ch);
        } while (ch != 'y' && ch != 'n');
    }
    else
    {
      if (count != 10)
      {
        printf("You Wrong !!\n");
        if (y > x)
        {
          printf("Ur numbr is higher than answer\n");
        }
        else if (y < x)
        {
          printf("Ur number is lower than answer\n");
        }
        else
        {
          continue;
        }
        printf("This is ur count :%g\n", count);
        printf("-------------------------------\n");
      }
      else
      {
        count = 10;
      }
    }
    if (count == 10 && x != y)
    {
      printf("Answer is %g\n", x);
      printf("You Lose!!\n");
      count = 0;
      x = rand() % 100 + 1;
      do
        {
          while( getchar() != '\n');
          printf("Enter y to play again or n to exit");
          scanf("%c", &ch);
        } while (ch != 'n');
    }
  }while (ch != 'n');
  printf("\nEnd Program\n");
  return 0;
}
