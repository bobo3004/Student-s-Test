#include<iostream>
#include<vector>

using namespace std;

<<<<<<< HEAD

int main(){
    vector<int> obj;
    for(int i = 0; i < 10; i++)
    {
        obj.push_back(i);
    }
    
    vector<int>::iterator it;
    for(it=obj.begin();it!=obj.end();it++){
        cout<<*it<<endl;
    }
    for(int i = 0; i < 10; i++)
    {
        obj.pop_back();
    }
    
    for(it=obj.begin();it!=obj.end();it++){
        cout<<*it<<endl;
        cout<<"no nums";
    }
    

}
=======
int main(){
    vector<double> nums;
    nums.push_back(1221);

}
>>>>>>> parent of aa3b8ea... Update test.cpp
