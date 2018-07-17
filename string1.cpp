#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int getSum(int BITree[], int index)
{
    int sum = 0;
    while (index > 0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}

void updateBIT(int BITree[], int n, int index, int val)
{
    while (index <= n)
    {
       BITree[index] += val;
       index += index & (-index);
    }
}

int getInvCount(int arr[], int n)
{
    int invcount = 0;
    int maxElement = 0;
    for (int i=0; i<n; i++)
        if (maxElement < arr[i])
            maxElement = arr[i];

    // Create a BIT with size equal to maxElement+1 (Extra
    // one is used so that elements can be directly be
    // used as index)
    int BIT[maxElement+1];
    for (int i=1; i<=maxElement; i++)
        BIT[i] = 0;

    // Traverse all elements from right.
    for (int i=n-1; i>=0; i--)
    {
        // Get count of elements smaller than arr[i]
        invcount += getSum(BIT, arr[i]-1);

        // Add current element to BIT
        updateBIT(BIT, maxElement, arr[i], 1);
    }

    return invcount;
}

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n = str.length();
        int arr[n], k=0;
        for(int i=n-1; i>=0; i--)arr[k++]=(str[i]-'a'+1);
        int min = getInvCount(arr,n);
        int count,s,tr;
        cout<<min<<endl;
       for(int i=0; i<n; i++)
        {
            int temp = arr[i];
            for(int j=1; j<=26; j++)
            {
                arr[i]=j;
                count = getInvCount(arr,n) + abs(j-temp);
                if(min>count){min = count;
                s = j;
                tr = n-1-i;}
            }
            arr[i]=temp;
        }
        cout <<min<<" "<<s<<" "<<tr<<endl;
    }
    return 0;
}
