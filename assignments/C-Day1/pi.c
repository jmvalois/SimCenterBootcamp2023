#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(int argc, char **argv) {

<<<<<<< HEAD
    if (argc != 2) {
=======
  if (argc != 2) {
>>>>>>> upstream/master
    printf("Usage: appName numSteps\n");
    exit(-1);
  }

<<<<<<< HEAD
  double numSteps = atof(argv[1]);
=======
  int numSteps = atoi(argv[1]);
  
>>>>>>> upstream/master
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
