#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a=0;
        cin>>n;
        int s[130];
        s[0]=0;
        int c[130];
        int po[130],prev[130];
        for(int i=0;i<130;i++){
            c[i]=0;
            po[i]=0;
            prev[i]=0;
        }
        c[0]=1;
        for(int i=1;i<n;i++){
            if(c[s[i-1]]==1){
                s[i]=0;
                prev[0]=po[0];
                po[0]=i;
                c[0]++;
            }
            else{
                s[i]=i-1-prev[s[i-1]];
                prev[s[i]]=po[s[i]];
                po[s[i]]=i;
                c[s[i]]++;
            }
            //cout<<s[i]<<' ';
        }
        cout<<c[s[n-1]]<<endl;
    }
}
