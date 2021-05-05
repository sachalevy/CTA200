#include <stdio.h>
#include "cumsum.h"


int main() {
    double arr[] = {1.0, 2.0, 3.0, 4.0};

    // changed 'average' to 'cumsum'
    double result = cumsum(4, arr);

    printf("The cumulative sum of 1, 2, 3 and 4 is: %.4f\n", result);
    return 0;    
}
