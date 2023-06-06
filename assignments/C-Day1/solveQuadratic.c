// program to solve quadratic equation
//        ax^2 + bx + c = 0
//
// soln: x = -b/2a +/- sqrt(b^2-4ac)/2a
//
// write a program to take 3 inputs and output the soln
// if two real solutions, printf("%.8f, %.8f\n", x1, x2);    
// if only one solution, just ouput a single value, i.e. printf("%.8f\n", x1);    
// if complex, output a complex number, i.e. printf("%.8f + %.8fi,%.8f - %.8fi\n", x1, im, x2,im);    

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 4) {
    printf("Usage: appName a b c\n");
    exit(-1);
  }

  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  double x1 = 0, x2 = 0;

  double tmp = b*b-4.0*a*c;
  if (tmp>0){
    tmp =sqrt(tmp);
  }
  if(tmp!=0 && tmp>0){
    x1=(-b-tmp)/(2*a);
    x2 =(-b+tmp)/(2*a);    
    printf("%.8f, %.8f\n", x1, x2);
  }
  else if(tmp==0){
    x1 = -b/(2*a);
    printf("%.8f", x1);
      }
  else{
    printf("Not Finished\n");
  }
  return 0;
}

