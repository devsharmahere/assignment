#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n= sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d \n ",arr[i]);
    }
    
    return 0;
}