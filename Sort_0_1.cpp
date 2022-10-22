#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[], int n){
    int left = 0, right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while(arr[right] == 1 && left < right)
        {
            right--;
        }
        
        //Agar yha pohoch gye h iska matlab 
        // arr[i] == 1 && arr[j] == 0 
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        
    }
     
}

int main(){
    int arr[10] = {0,1,0,1,1,0,0,1,0,1};

    sortOne(arr, 10);
    printArray(arr, 10);
    
    return 0;
}