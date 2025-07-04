//WE NEED TO MERGE 2 SORTED ARRAY WITHOUT EXTRA SPACE    

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int n,m;
    cin>>n;
  int arr[n];
    int arr2[m];
    int arr3[m+n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    } 

    //brute
/*int left=0;
int right=0;
int index=0;
while (left<n && right<m)
{
    if(arr[left]<=arr2[right]){
        arr3[index]=arr[left];
        left++;
        index++;
    }
    else{
        arr3[index]=arr2[right];
        right++;
        index++;
    }

    while(left<n){
        arr3[index]=arr[left++];
    }
    while (right<m)
    {       
         arr3[index]=arr[right++];
    }
    
}
*/
//optimal
int left=n;
int right=0;
while(left>=0 && right<m){
    if(arr[left]>arr2[right]){
        swap(arr[left],arr2[right]);
            left--,right++;
        }
        else{
            break;
        }
        sort(arr,arr+n);
        sort(arr2,arr2+m);
    }
}
