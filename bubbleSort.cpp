#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int *bubbleSort(int len,int num[]){
    int i=0,j,temp;
    while (i<len){
        j=0;
        while(j<len-1){
            if (num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
            j++;
        }
        i++;
    }
    return num;
}

int main(int argc, char const *argv[]){
    int len;
    cout<<"Enter length of input :";
    cin>>len;
    int num[len],i=0;
    //Input loop
    while (i<len){
        cout<<"Enter input :";
        cin>>num[i++];
    }
    i=0;
    int *address_num=bubbleSort(len,num);

    //Output loop
    cout<<"Output :";
    while (i<len){
        cout<<address_num[i]<<" ";
        i++;
    }
    return 0;
}
