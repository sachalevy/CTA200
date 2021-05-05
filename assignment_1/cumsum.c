#include <stdio.h>


double cumsum(int n, double arr[]) {
	/*Compute the cumulative sum of the provided array.*/
    
    double acc = 0.0;

    for (int i = 0; i < n; i++) {
        acc += arr[i];
    }

    return acc;
}
