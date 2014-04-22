# Build with
#
#  gcc erf.c -o erf -lm -g -Wall -O3 -std=gnu99 -Werror
#
# Output is
#
# The integral of a Normal(0,1) distribution between -1.96 and 1.96 is: 0.950004
#

#include <math.h> // erf, sqrt
#include <stdio.h> // printf
int main(){
	printf("The integral of a Normal(0,1) distribution "
			"between -1.96 and 1.96 is: %g\n", erf(1.96*sqrt(1/2.)) );
			}
