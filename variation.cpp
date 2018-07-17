#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> ig;
    vector <int> :: iterator i;
    vector <int> :: iterator ir;
// TODO (ANANTH#1#): wqt
    for(int i=1; i<=5; i++)
        ig.push_back(i);
    for(i=ig.begin(); i!=ig.end(); i++)
        cout<<*i<<" ";
    cout<<"\n";
    for(ir=ig.rbegin(); ir==ig.rend(); --ir)
        cout<<*ir<<" ";
}
//sfdsgsdg dfgf dfg
