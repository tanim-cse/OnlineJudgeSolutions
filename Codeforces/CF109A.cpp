#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k=0;
    char p1[3],p2[3],p3[3],p4[3],p5[3],p6[3];
    cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6;
    for(i=0;i<2;i++){
        if(p1[i]==p2[i] || p1[i]==p3[i] || p1[i]==p4[i]  || p1[i]==p5[i] || p1[i]==p6[i]){
            k++;
    }
    }

    if(k!=0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
