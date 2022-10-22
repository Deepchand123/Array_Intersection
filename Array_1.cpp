#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout<<"Printing the array"<<endl;
    //print the array
    for (int i = 0; i < size; i++) 
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printing done"<<endl;
}

int main()
{
    //declare
    int number[10];
    
    //accessing array
    // cout<<"Array at 7 index "<<number[6]<<endl;

    //Initialisating an array
    int second[3] = {3, 7, 11};

    //accessing array
    cout<<endl<<"Array at 2 index "<<second[2]<<endl;

    int third[15] = {2, 7};
    int n = 15; 
    printArray(third, 15);

    //initialising all locations with 0
    int fourth[10] = {0};
    n = 10;
    // printArray(fourth, 10);
    
    //initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};
    n = 10;
    // printArray(fifth, 10);

    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"Size of third is: "<<thirdSize<<endl;

    char ch[5] = {'a', 'b', 'c','r', 'p'};
    cout<<ch[3]<<endl;

    cout<<"Printing the array"<<endl;
    //print the array
    for (int i = 0; i < 5; i++) 
    {
        cout<<ch[i]<<" ";
    }
    cout<<endl<<"Printing done"<<endl;
    // printArray(ch);

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[1];


    cout<<endl<<"Every thing is fine !"<<endl;

    return 0;
}