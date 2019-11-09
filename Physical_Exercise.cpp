#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        int n,m,k;
        cin>>n>>m>>k;
        long long int a[n],b[n],c[m],d[m],e[k],f[k];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<m;i++){
            cin>>c[i]>>d[i];
        }
        for(int i=0;i<k;i++){
            cin>>e[i]>>f[i];
        }
        long double atoc[n][m],atoe[n][k],atox[n],ctoe[m][k],ctox[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                atoc[i][j]=sqrt((c[j]-a[i])*(c[j]-a[i]) + (d[j]-b[i])*(d[j]-b[i]));
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                atoe[i][j]=sqrt((e[j]-a[i])*(e[j]-a[i]) + (f[j]-b[i])*(f[j]-b[i]));
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                ctoe[i][j]=sqrt((c[i]-e[j])*(c[i]-e[j]) + (d[i]-f[j])*(d[i]-f[j]));
            }
        }
        for(int i=0;i<n;i++){
            atox[i]=sqrt((a[i]-x)*(a[i]-x)+ (b[i]-y)*(b[i]-y));
        }
        for(int i=0;i<m;i++){
            ctox[i]=sqrt((c[i]-x)*(c[i]-x)+ (d[i]-y)*(d[i]-y));
        }
        cout.precision(10);
        cout<<std::fixed;
        long double min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int h=0;h<k;h++){
                    min1=min(min1,atox[i]+atoc[i][j]+ctoe[j][h]);
                }
            }
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                for(int h=0;h<k;h++){
                    min2=min(min2,ctox[j]+atoc[i][j]+atoe[i][h]);
                }
            }
        }
        cout<<min(min1,min2)<<endl;
    }
}
