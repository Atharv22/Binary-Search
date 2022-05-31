#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int n, int key){
    int e=n;
    while (s<=n){
        int mid = (s+e)/2;
        if (arr[mid]==key)
            return mid;
        else if(arr[mid]>key){
            e=mid-1;
            return binarySearch(arr, s, e, key);
        }
        else{
            s=mid+1;
            return binarySearch(arr, s, e, key);
        }
    }
    return -1;
}
int main(){
    int key, n;
    int s=0;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter your Array in sorted order\n";
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the number to be searched: \n";
    cin>>key;
    cout<<binarySearch(arr, s, n, key) + 1 <<endl;
    return 0;

}

/* 

SAMPLE OUTPUT
Enter the number of elements:5
Enter your Array in sorted order
20 39 46 59 68
Enter the number to be searched:
46
3

*/
