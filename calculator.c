#include <stdio.h>
// Here is the calculator Code:
// Please include: subtraction, multiplication, and division.
// If you are confused with the code, do not be afraid to google
// the functions, data types, the int main(void), format specifiers etc.

int main(void) {
  int x; // instead of indenting after every line, you must use ; to end the
         // line
  int y;
  int i = 0;
  int j = 0;
  char operation;


while (i < 10)
{
 
  printf("Enter a number between 1 and 10: ");
  scanf("%i", &x);

  if(x >=1 && x<=10) {
    printf("The first number is between 1 and 10\n");
    break;
  } else {
    printf("The first number is not between 1 and 10\n");
  }

}

while (j < 10)
{
  printf("\nType in an even number: ");
  scanf("%i", &y);

  if(y%2 == 0) {
    printf("The second number is even\n");
    break;
  } else {
    printf("The second number is odd\n");
  }
  
}

printf("\nThe first number is %i and the second number is %i", x, y);

  printf("\nType in the operation you want to perform (a, s, d, m): ");
  scanf(" %c", &operation);

  if (operation == 'a') {
    
  } else if (operation == 's') {
    int sum = x + y;
  printf("\n\nThe sum of the numbers is %i", sum);
  } else if (operation == 'd') {
    int quotient = x / y;
  printf("\n\nThe quotient of the numbers is %i", quotient);
  } else if (operation == 'm')
  {
    int product = x * y;
    printf("\n\nThe product of the numbers is %i", product);
  }
  

  

  

  // TODO: add the rest of the math operations here (make sure to follow the
  // same coding structure as above to make it easier to read!):

  // always return 0; at the end of the main function
  return 0;
}