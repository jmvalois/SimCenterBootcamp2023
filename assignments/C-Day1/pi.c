#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    if (argc != 2) {
    printf("Usage: appName numSteps\n");
    exit(-1);
  }

  double numSteps = atof(argv[1]);
  double pi   = 0;
  /*  printf("%.4f\n",numSteps);*/
  double delta_x = 1/numSteps;
  double sum = 0;
  for(double i=0;i<numSteps;i++){
    
    double x = i*delta_x+delta_x/2;
    double fun = 4.0/(1+x*x);
    sum = sum + fun*delta_x;
    /* printf("%.4f\n",x);*/
  }
  pi = sum;

  printf("PI = %16.14f, diff(%16.14f)\n",pi, fabs(pi-M_PI));
  return 0;
}
