#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
