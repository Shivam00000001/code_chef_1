#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min=INT_MAX;
        int max=INT_MIN;
        int m_i=0,M_i=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(min>temp){
                min=temp;
                m_i=i;
            }
            if(max<temp){
                max=temp;
                M_i=i;
            }
        }
        if(m_i>M_i)
                cout<<max<<' '<<min<<endl;
        else
            cout<<min<<' '<<max<<endl;
    }
}
