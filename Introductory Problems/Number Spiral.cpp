#include <bits/stdc++.h>
using namespace std;

long long func(long long row,long long col){
    if(row==1 && col==1)
        return 1;
    if(row==col){
        return (row*row)-row+1;
    }
    else if(row < col){
        if(col%2==0){
            return ((col-1)*(col-1))+row;
        }else{
            return (col*col)-row+1;
        }
 
    }else{
        if(row%2==0){
            return (row*row)-col+1;
        }else{
            return ((row-1)*(row-1))+col;
        }
    }
}
 
int main() {
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
       long long row,col;
       cin>>row>>col;
       cout<<func(row,col)<<endl;
    }
    return 0;
}