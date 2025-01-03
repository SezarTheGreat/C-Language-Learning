// Question:In an array of number, find how many times does a number 'x' occurs.

#include <stdio.h>

int countX(int arr[],int length, int x);

int main(){
    int arr[22] = {1,1,2,3,3,4,4,4,5,5,6,6,6,6,7,7,8,9,9,9,9,10};
    int n;
    printf("Enter a number that is in the array: ");
    scanf("%d",&n);

    int occurances = countX(arr,22,n);
    printf("%d has occured %d times.",n,occurances);

    return 0;
}

int countX(int arr[], int length, int x){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(arr[i] == x){
            count ++;
        }
    }
    return count;
}