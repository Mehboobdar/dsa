#include<iostream>
using namespace std;
void reverse(int arr[], int start,int end){
swap(arr[start],arr[end]);
start++;
end--;

}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}



int main()
{
    int arr[3]={1,2,3};
    int size=3;
    int start=0;
    int end=3;
reverse(arr,0,size-1);
    print(arr,3);


return 0;
}
