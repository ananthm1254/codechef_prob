#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string arr;
        cin>>arr;
        int count=0;
        for(int i=0; i<n-k; i++)
        {
            for(int j=0; j<k; j++)
            {
            if(arr[j+i+1]!=arr[j+i])
            count++;
            }
        }
        cout<<count<<endl;
    }
}
