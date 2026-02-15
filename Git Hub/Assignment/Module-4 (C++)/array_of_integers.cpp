#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter The Number Of Element : ";
    cin>>n;

    int arr[n];
    int sum=0;

    cout<<"Enter "<<n<< " integers:" <<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    double average = double(sum)/n;

    cout<<"Sum Is : "<<sum<<endl;
    cout<<"Average Is : "<<average<<endl;

    return 0;
}