//Deletion of an arrary element
#include<stdio.h>
#include<conio.h>
void main(){
    int arr[100],pos,i,n;
    printf("Enter the total elements:");
    scanf("%d",&n);
    printf("Enter %d arrary elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position to delete:");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("Arrary elements after deletion:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}