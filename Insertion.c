#include<stdio.h>

void Insertion(int n, int pos, int arr[]);
void printArr(int arr[]);

int main() {
    int n,pos;
    int arr[5] = {1,2,4,6,7};
    printf("Enter a number to be added : ");
    scanf("%d",&n);
    printf("Enter position : ");
    scanf("%d", &pos);
    Insertion(n,pos,arr);
    printArr(arr);
    return 0;
}

void Insertion(int n, int pos, int arr[]) {
    for(int i=4;i>pos-1;i--) {
        arr[i+1]=arr[i];
    }
    arr[pos]=n;
}

void printArr(int arr[]) {
    for(int i=0;i<5;i++) {
        printf("%d ",arr[i]);
    }
}