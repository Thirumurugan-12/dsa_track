#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    int arr[num];
    for (int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }

    //Sorting
    for (int i=0;i<num-1;i++) {
        for (int j=i+1;j<num;j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\nSorting the Array to Implement Binary Search\n");
    for (int i=0;i<num;i++) {
        printf("%d ",arr[i]);
    }


    int data;
    printf("\nEnter the data to Find\n");
    scanf("%d",&data);


    int left = 0;
    int right = num-1;

    while (left <= right) {

        int mid = (left+right)/2;

        if (arr[mid]==data) {
            printf("Data found at index = %d",mid);
            break;
        } else if (data > arr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0;
}