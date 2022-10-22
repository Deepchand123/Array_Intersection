#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout<<"Inside the main fucntion"<<endl;
    //Updating the array's first number
    arr[0] = 322;
    //printin the array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;;    

    cout<<"Going back to the main function"<<endl<<endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    update(arr, 5);

    cout<<"Printing the main function"<<endl;
    //printing the array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";;
    }
    cout<<endl;    
}
