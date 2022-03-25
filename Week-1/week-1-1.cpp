#include <iostream>
using namespace std;

int main()
{
    int n,size,number; //no. of textcases and size of array and number to be searched
    int i,j;
    int found = 0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>size;
        int a[size];
        for(j=0;j<size;j++){
            cin>>a[j];
        }
        cin>>number;
        for(j=0;j<size-1;j++){
            if(a[j] == number){
                found = 1;
                cout<<"Present "<<j+1<<"\n";
            }
            else{
                found = 0;
            }
        }
        if(found == 0){
            cout<<"Not Present "<<size<<"\n";
        }
    }
}