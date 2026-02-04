#include<iostream>
using namespace std;
struct student
{
    int id;
    string name;
};

int main()
{
    struct student st;
    
    st.id=104;
    st.name="yash";
    
    cout<<st.id<<" "<<st.name<<endl;
    
    return 0;
    
    
}