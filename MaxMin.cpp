#include<iostream>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    //returning max value
    return min; 
}

int getMax(int num[], int n)
{
    int max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    //returning max value
    return max; 
}

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int num[100];

    //taking iput in array
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"Maximum value is "<<getMax(num, size)<<endl;
    cout<<"Minimum value is "<<getMin(num, size)<<endl;
    
}