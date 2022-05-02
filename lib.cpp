#include "lib.h"
double Array (float num[], int d){
    double max=0;
    for (int i=0 ; i<d; i++){
        if (max < num[i]){
            max=num[i];
        }
    }
    return max;
}
