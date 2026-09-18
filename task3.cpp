#include<iostream>
using namespace std;
void analyze_pointer(int *ptr){
    cout<<"Memory Location: "<<ptr<<endl;
    cout<<"Value: "<<*ptr<<endl;
}
int main(){
    int iValue=420;
    cout<<"Stack Variable"<<endl;
    analyze_pointer(&iValue);
    int* i=new int;
    *i=67;
    cout<<"\nHeap Vairable"<<endl;
    analyze_pointer(i);
    delete i;
    return 0;

}
