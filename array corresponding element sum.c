
#include <stdio.h>

int main() {
      int n,i;
      int arr1[i],arr2[i],arr3[i];
      printf("enter the number of elements=");
      scanf("%d",&n);
      for(i=0;i<n;i++){
         printf("Element of 1st array %d: ", i + 1);
         scanf("%d", &arr1[i]);
         }
        for (i = 0; i < n; i++) {
        printf("Element of 2nd array %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    printf("3rd array= ");
    for (i = 0; i < n; i++) {
        arr3[i]=arr2[i]+arr1[i];
        printf("%d ",arr3[i]);
    }
    return 0;
}