//finding unique in an array
#include<iostream>
using namespace std;

int findunique(int arr[],int size){
int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}



int main()
{
    int arr[5]={1,2,1,2,3};
    
findunique(arr,5);
return 0;
}
