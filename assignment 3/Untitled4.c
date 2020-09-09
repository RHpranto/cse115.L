#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n],flag=0;
    printf("Enter array elements:\n");
    //getting element
    for(int i=0;i<n;i++){
        printf("[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    //calculation
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; ++j){
            if(arr[i]==arr[j]){
                flag=1;
                printf("Find %d at index %d,%d\n",arr[i],i,j);
            }
        }
    }
     if(flag==0){
        printf("There is no duplicate element!");
    }
    return 0;
}
