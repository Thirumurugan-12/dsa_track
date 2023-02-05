#include <iostream>
using namespace std;

int main() {

    int num;
    cin >> num ;

    int arr[num];
    for (int i=0;i<num;i++) {
        cin >> arr[i];
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

    cout << "Sorting the Array for Binary Search" << endl;
    for (int i=0;i<num;i++) {
        cout << arr[i] << " " ;
    }

    cout << endl;

    int left = 0;
    int right = num - 1;

    int data;
    cin >> data;

    while (left < right) {
        int mid = (left+right)/2;

        if (data==arr[mid]) {
            cout << "Data found at index " << mid << endl;
            break;
        } else if (data > arr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0;
}