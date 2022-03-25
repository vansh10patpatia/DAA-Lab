#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
     if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int n,size,number; //no. of textcases , size of array and number to be searched
    int i,j;
    int found = 0;
    cin>>n;
     for(i=0;i<n;i++){
        cin>>size;
        int a[size],mid=size/2,count=0;
        for(j=0;j<size;j++){
            cin>>a[j];
        }
        cin>>number;
        if(number > a[mid]){
            for(j=mid+1;j<=size;j++){
                count++;
                if(a[j] == number){
                    found=1;
                    break;
                }
            }
        }
        else if(number < a[mid]){
            for(j=mid-1;j<=0;j--){
                count++;
                if(a[j] == number){
                    found=1;
                    break;
                }
            }
        }
        else{
            found = 1;
            count = 1;
        }
        if(found == 1){
            cout<<"Present "<<count<<"\n";
            found = 0;
        }
        else{
            cout<<"Not Present "<<count<<"\n";
        }
    }
}