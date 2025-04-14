#include<stdio.h>
#include<stdlib.h>
int main(){

     int *arr;
     int n;
     printf("give the inpute ");
     scanf("%d",&n);
     arr = (int *) malloc(n * sizeof(int));
      if(arr == NULL){
          printf("the memory is allocated");
          return 1;
      }
      printf("inputes numbers :\n");
      for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
      }
      printf("input number\n");
      for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
      }
 free(arr);

 for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
      }
    return 0;
}