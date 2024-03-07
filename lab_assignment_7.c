#include <stdio.h>

void bubble_Sort(int array[], int n){
   int i, j;
   int temp, count = 0;
   int swaps[n];
   for (i=0;i<n;i++){
      swaps[i] = 0;
   }
   for (i=0;i<n-1;i++){
       for (j=0;j<n-i-1;j++){
           if (array[j] > array[j+1]){
              temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
              swaps[j] += 1;
           }
       }
   }
   for (i=0;i<n;i++){
      printf("%d: # of times index %d is swapped\n", swaps[i], i);
   }
   for(i=0;i<n;i++){
        count += swaps[i];
   }
   printf("Total # of swaps:%d\n", count/2);

}

void selection_Sort(int array[], int n){
    int i, j, count = 0, k, min = 0;
    int temp;
    int swaps[n];

    for (i=0;i<n;i++){
      swaps[i] = 0;
   }
    for (j=0;j<n;j++){
        for (i=0;i<n-j;i++){
            if(array[i] < min){
                min = array[i];
                k = i;
            }
        }
        temp = array[j];
        array[j] = min;
        array[k] = temp;
        swaps[k] ++;
        swaps[i] ++;
   }
    for(i=0;i<n;i++){
       printf("%d: # of times index %d is swapped\n", swaps[i], i);
   }
   for(i=0;i<n;i++){
        printf("Total # of swaps: %d", count);
   }
}

int main(){
    int n, ans;
    int array1[] = {97,16,45,63,13,22,7,58,72};
    int array2[] = {90,80,70,60,50,40,30,20,10};
    n = sizeof(array1)/sizeof(array1[0]);
    printf("Array1 Bubble Sort:\n");
    bubble_Sort(array1, n);
    printf("Array1 Selection Sort:\n");
    selection_Sort(array1, n);
    n = sizeof(array2)/sizeof(array2[0]);
    printf("Array2 Bubble Sort:\n");
    bubble_Sort(array2, n);
    printf("Array2 Selection Sort:\n");
    selection_Sort(array2, n);
    return 0;


}
