#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    int arr[6][6];
    int maxMaxSum = -(9*7+1);
    
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){      
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    
    for(int arr_i = 0; arr_i < 4; arr_i++){
       for(int arr_j = 0; arr_j < 4; arr_j++){
       
           int hourglassElements[7];
           int maxSum = 0;
           
           hourglassElements[0] = arr[arr_i][arr_j];
           hourglassElements[1] = arr[arr_i][arr_j+1];
           hourglassElements[2] = arr[arr_i][arr_j+2];
           hourglassElements[3] = arr[arr_i+1][arr_j+1];
           hourglassElements[4] = arr[arr_i+2][arr_j];
           hourglassElements[5] = arr[arr_i+2][arr_j+1];
           hourglassElements[6] = arr[arr_i+2][arr_j+2];
           
           for(int i=0;i<7;i++) 
               maxSum += hourglassElements[i];
           
           if(maxSum > maxMaxSum)
               maxMaxSum = maxSum;
       }
    }
    
    printf("%d", maxMaxSum);
    
    return 0;
}
