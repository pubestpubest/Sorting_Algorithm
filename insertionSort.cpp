#include<iostream>
#include<algorithm>
using namespace std;

int *insertionSort(int len,int num[]){
    int i=1,j,temp;
    while(i<len){
        j=i;
        while (num[j]<num[j-1] && j>0){
            swap(num[j],num[j-1]);
            j--;
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
    int *sorted=insertionSort(len,num);

    //Output loop
    cout<<"Output :";
    while (i<len){
        cout<<sorted[i]<<" ";
        i++;
    }
    return 0;
}
