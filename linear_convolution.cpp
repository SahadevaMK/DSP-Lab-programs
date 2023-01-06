#include<iostream>
using namespace std;
int x[20],h[20],y[20];
int main(){
    int i,j,m,n;
    cout << "enter the lenght of first sequence x[m]: " << endl;
    cin >> m;
    cout << "enter the lenght of second sequence h[n]: " << endl;
    cin >> n;
    cout << "enter x[m]: " << endl;
    for (i=0;i<m;i++){
        cin >> x[i]; 
    }
    cout << "enter h[n]: " << endl;
    for (i=0;i<n;i++){
        cin >> h[i];
    }
    for (i=m;i<=m+n-1;i++){
        x[i] = 0;
    }
    for (i=n;i<=m+n-1;i++){
        h[i] = 0;
    }

    for (i=0;i<m+n-1;i++){
        y[i]=0;
        for (j=0;j<=i;j++)
        {
            y[i] = y[i] + (x[j] * h[i-j]);

        }
    }
    for (i=0;i<m+n-1;i++){
        cout << y[i] << endl;
    }
    return 0;
}