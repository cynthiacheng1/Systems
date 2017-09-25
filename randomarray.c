#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int array[10];

    srand(time(NULL));

    int counter = 0; 
    for (; counter < 9;counter++){ 
    	array[counter] = rand(); //randompopulate
    }
    array[9] = 0; //last one to 0

    printf("The original array: \n");

    for (counter = 0; counter < 10; counter++){
    	printf("arr[%d]: %d \n", counter, array[counter]);
    }

    int array2[10];

    int *ip;
    for (int counter =9; counter >=0; counter--){
    	ip = &array[counter];
    	array2[9-counter] = *ip;
    }

    printf("The second array: \n");
    for (counter =0; counter < 10; counter++){
    	printf("arr[%d]: %d \n", counter, array2[counter]);
    }

    return 0;

}