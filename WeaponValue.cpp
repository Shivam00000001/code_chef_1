#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[n][10];
        int a[10];
        for(int i=0;i<10;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            cin>>s[i];
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<10;j++){
                if(s[i][j]=='1'){
                    a[j]++;
                }
            }
        }
        for(int i=0;i<10;i++){
            if(a[i]%2==1)
                c++;
        }
        cout<<c<<endl;
    }
}
