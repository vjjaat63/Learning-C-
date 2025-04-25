#include<iostream>
using namespace std;
void merge(int arr1[] , int arr2[] , int arr3[],int size1,int size2,int start1,int start2,int start3)
{
    if(start1 >= size1)   // if arr1 is smaller than arr2
    {
        for(int i = start2;i<size2;i++)
        {
            arr3[start3] = arr2[i];   // entering the remaining elements of arr2 in arr3
            start3++;
        }
        return ;
    }
   
    if(start2 >= size2)  // if arr2 is smaller than arr1
    {
        for(int i = start1;i<size1;i++)
        {
            arr3[start3] = arr1[i]; // entering the remaining elements of arr1 in arr 3
            start3++;
        }
        return ;
    }

    if(arr1[start1]<=arr2[start2])   // comparing values of arr1 and arr2 at start1 and start2 index
    {
        arr3[start3]=arr1[start1];  // inserting the smaller value in arr3
        merge(arr1,arr2,arr3,size1,size2,start1+1,start2,start3+1);
    }
    else
    {
        arr3[start3] = arr2[start2]; // inserting the smaller value in arr3
        merge(arr1,arr2,arr3,size1,size2,start1,start2+1,start3+1);
    }

}

int main()
{
    int arr1[1000];   //  first given or entered sorted array
    int arr2[1000];   //  secong given or entered sorted array
    int arr3[2000];   // ans array which holds the merged array1 and arra2 in sorted format

    int size1,size2;
    cout<<"Enter the size of first and second array : ";  // entering size of input arrays
    cin>>size1>>size2;

    cout<<"Enter the elements in first array in sorted way : ";  // entering elements in first array
    for (int  i = 0; i < size1; i++)
    {
        cin>>arr1[i];
    }
    
    cout<<"Enter the elements in second array in sorted way : "; // entering elements in second array
    for (int  i = 0; i < size2; i++)
    {
        cin>>arr2[i];
    }

    merge(arr1,arr2,arr3,size1,size2,0,0,0);

    cout<<"The merged array is : ";   // printing ans array
    for (int  i = 0; i < size1 + size2; i++)
    {
        cout<<arr3[i]<<" ";
    }

}