#include <stdio.h>

float inputAmount[] = {0.49, 1.27, 0.75, 1.31, 0.83};
float coins[] = {0.25, 0.10, 0.05, 0.01};

//Compare dollar amount to elements of coins
//if larger, divide by coin and get modulus, if smaller, check against next coin
//Take modulus and feed into same function

void CalcChange(float dollarAmount){
  int quarters=0, dimes=0, nickels=0, pennies = 0;

  while (dollarAmount > 0.25){
    dollarAmount -= 0.25;
    quarters++;
  }

  while (dollarAmount > 0.10){
    dollarAmount -= 0.10;
    dimes++;
  }

  while (dollarAmount > 0.05){
    dollarAmount -= 0.05;
    nickels++;
  }

  while (dollarAmount > 0.01){
    dollarAmount -= 0.01;
    pennies++;
  }

  printf("Quarters:%d\nDimes:%d\nNickles:%d\nPennis:%d\n\n",quarters,dimes,nickels,pennies);
}

int main() {
  CalcChange(0.83);
  return 0;
}