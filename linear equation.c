#include <stdio.h>

int main() {
  int xNumerator, yNumerator, slopeNumerator = 0;
  int xDenominator, yDenominator, slopeDenominator = 0;
  int aConst, bConst, cConst = 0;
  
printf("Insert all constants as Fractions! For non fraction constants, make it a fraction with denominator equals to 1. For example if the point on the line is (2, 1/2) with slope of 1 you can insert your inputs in this way:\n Insert x coodrinate numerator: 2\n Insert x coodrinate denominator: 1\n Insert y coodrinate numerator: 1\n Insert y coodrinate denominator: 2\n Insert slope numerator: 1\n Insert slope denominator: 1");


  printf("Insert x coodrinate numerator: ");
  scanf("%d", &xNumerator);
  printf("Insert x coodrinate denominator: ");
  scanf("%d", &xDenominator);
  printf("Insert y coodrinate numerator: ");
  scanf("%d", &yNumerator);
  printf("Insert y coodrinate denominator: ");
  scanf("%d", &yDenominator);
  printf("Insert slope numerator: ");
  scanf("%d", &slopeNumerator);
  printf("Insert slope denominator: ");
  scanf("%d", &slopeDenominator);

  if (xDenominator != 1) {
    xNumerator *= xDenominator;
    yNumerator *= xDenominator;
    slopeNumerator *= xDenominator;
  }

  if (yDenominator != 1) {
    xNumerator *= yDenominator;
    yNumerator *= yDenominator;
    slopeNumerator *= yDenominator;
  }

  if (slopeDenominator != 1) {
    xNumerator *= slopeDenominator;
    yNumerator *= slopeDenominator;
    slopeNumerator *= slopeDenominator;
  }

  if (slopeNumerator == 0) {
    if (yDenominator != 1) {
      printf("Line Equation in general form: y = %d/%d", yNumerator/yDenominator);
    } else {
      printf("Line Equation in general form: y = %d", cConst);
    }    
  
  } else {
    aConst = -1 * slopeNumerator;
    bConst = 1;
    cConst = slopeNumerator * (-1 * xNumerator) + yNumerator;

    if (aConst < 1) {
      aConst = -1 * aConst;
      bConst = -1 * bConst;
      cConst = -1 * cConst; 
    }

    printf("(%d) x + (%d) y = %d", aConst, bConst, cConst);
  }
    
    return 0;
}