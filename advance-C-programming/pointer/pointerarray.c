#include <stdio.h>
int main(){
    int nums[] = {10,20,40,83,353,2};
     int *ptr = nums;
      ptr[3] = 34;
     printf("value : %p\n", &nums[0]);

    //  printf("value : %d\n",*ptr[0]);
      for(int i =0;i<(sizeof(nums)/sizeof(nums[0]));i++){
        printf("value : %d address : %p\n",ptr[i],&nums[i]);
      }
    return 0;
}