#include<stdio.h>

int a[8] = {1,6,2,4,5,8,9,0};
void sortArray(int*);
void printArray(int*);

int main()
{
    if(fork()==0){
        sortArray(a);
    }
    else{
        printArray(a);
    }   

}

void sortArray(int *a){
    int temp;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8-i;j++){
            if(a[j+1]<a[j]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printArray(int *a){
    int *traverse = a;
    while(traverse!=NULL){
        printf("%d",*traverse);
        traverse++;
    }
}
