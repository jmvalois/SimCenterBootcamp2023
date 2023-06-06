// program to transform stress:
//
// sigmaX' = sigmaX * cos^2(theta) + sigmaY * sin^2(theta) + 2 * tauXY Sin(theta)Cos(theta)
// sigmaY' = sigmaX * sin^2(theta) + sigmaY * cos^2(theta) - 2 * tauXY Sin(theta)Cos(theta)
// tauXY' = (sigmaY-sigmaX) * sin(theta)cos(theta) + tauXY(cos^2(theta) - sin^2(theta))
//
// write a program to take:
// 1: 4 inputs: sigmaX, sigmaY, tauXY, theta and output transformed stresses: sigmaX', sigmaY', tauXY'
// 2: 3  inputs: sigmaX, sigmaY, tauXY and output transformed stresses: sigmaX', sigmaY', tauXY' for every 10 degrees
//
// NOTE: perform the transformation inside a function that cannot be named main
//
// Extend to possibly include all outputs for a Mohr circle, were the theta now provided is a deltaTheta

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void transformStress(float *stressIN, float theta, float *stressTransformed);

int main(int argc, char **argv) {

  double sigmaX=atof(argv[1]); 
  double sigmaY=atof(argv[2]);
  double tauXY=atof(argv[3]);
  float theta=atof(argv[4]);

  float ArrayStressIn[3], stressTransformed[3];
  ArrayStressIn[0]=sigmaX;
  ArrayStressIn[1]=sigmaY;
  ArrayStressIn[2]=tauXY;

  transformStress(ArrayStressIn, theta, stressTransformed);

  printf("%.4f, %.4f, %.4f\n", stressTransformed[0], stressTransformed[1], stressTransformed[2]);
  return 0;
}

void transformStress(float *stressIN, float theta, float *stressTransformed){
  float sigmaX = stressIN[0];
  float sigmaY = stressIN[1];
  float tauXY = stressIN[2];

  float theta_rad = theta*M_PI/180;

  float sigmaX_prime = sigmaX*pow((cos(theta_rad)),2) + sigmaY*pow((sin(theta_rad)),2) +2*tauXY*(sin(theta_rad))*(cos(theta_rad));
  float sigmaY_prime = sigmaX*pow((sin(theta_rad)),2) + sigmaY*pow((cos(theta_rad)),2) - 2*tauXY*(sin(theta_rad))*(cos(theta_rad));
  float tauXY_prime = (sigmaY-sigmaX)*sin(theta_rad)*cos(theta_rad) + tauXY*pow((cos(theta_rad)),2)-pow((sin(theta_rad)),2);

  stressTransformed[0] = sigmaX_prime;
  stressTransformed[1] = sigmaY_prime;
  stressTransformed[2] = tauXY_prime;

}
