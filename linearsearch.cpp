#include<iostream>
using namespace std; //
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
        
    }
    return false;
}
int main()
{
int arr[10]={5,7,3,4,5,8,9,0,2,3};
 bool found=search(arr,10,2);
 if(found){
    cout<<"key is present";

 }
else{
    cout<<"key is absent";
}
return 0;
}
