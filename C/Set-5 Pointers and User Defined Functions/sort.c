#include<stdio.h>
void asc_sort(int a[],int n);
void main(){
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    int in[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&in[i]);
    }
    asc_sort(in,n);
    printf("The sorted array is: [");
    for(int k=0;k<n;k++){
        printf("%d, ",in[k]);
    }
    printf("]");
    }
void asc_sort(int a[], int n){
    for(int i=0;i<n;i++){
        int curr=a[i];
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    }
