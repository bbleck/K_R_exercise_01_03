//
//  main.c
//  K_R_exercise_01_03
//
//  Created by Brian Bleck on 2/6/19.
//  Copyright © 2019 Brian Bleck. All rights reserved.
//

#include <stdio.h>

/*
 print F - C table for fahr = 0, 20, ... , 300; floating point version
 */

void printHeading(char* typeBegin, char* typeConvert, int lower, int upper, int step);

int main(int argc, const char * argv[]) {
  float fahr, celsius;
  int lower, upper, step;
  char* typeBegin;
  char* typeConvert;
  
  typeBegin = "fahrenheit";
  typeConvert = "celsius";
  lower = 0;
  upper = 300;
  step = 20;
  
  
  fahr = lower;
  
  printHeading(typeBegin, typeConvert, lower, upper, step);
  
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr+=step;
  }
  printHeading(typeConvert, typeBegin, lower, upper, step);
  
  celsius = lower;
  
  while (celsius <= upper){
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius+=step;
  }
  
  
  return 0;
}

void printHeading(char* typeBegin, char* typeConvert, int lower, int upper, int step){
  printf("Conversion chart for degrees %s to degrees %s\nStarting with %d and continuing to %d, in increments of %d\n", typeBegin, typeConvert, lower, upper, step);
}
