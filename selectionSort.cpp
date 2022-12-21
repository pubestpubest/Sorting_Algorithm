#include<iostream>
#include<iostream>
#include<algorithm>
using namespace std;

int *selectionSort(int len,int num[]){
    int sorted=0,i,min=99999999,min_index;
    while (sorted<len){
        min_index=sorted;
        i=sorted;
        min=99999999;
        while(i<len){
            if (num[i]<min){
                min=num[i];
                min_index=i;
            }
            i++;
        }
        //cout<<"\""<<sorted<<i<<"\"";
        swap(num[sorted],num[min_index]);
        sorted++;
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
    int *address_num=selectionSort(len,num);

    //Output loop
    cout<<"Output :";
    while (i<len){
        cout<<address_num[i]<<" ";
        i++;
    }
    return 0;
}
