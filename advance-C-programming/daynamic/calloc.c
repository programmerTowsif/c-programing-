#include<stdio.h>
#include<stdlib.h>
int main(){

    int *marks;
    int n;
    printf("How many subjects do you want to give numbers for?");
    scanf("%d",&n);
    marks = (int *)calloc(n,sizeof(int));
    if(marks==NULL){
        printf("memory dosen't allocated");
        return 1;
    }
    printf("give the nunber of each subject\n");
    for(int i =0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    printf("your numbers\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",marks[i]);
    }
    
      printf("your numbers\n");
      free(marks);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",marks[i]);
    }
    

    return 0;
}