#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class hax
{
    int low=0;
    int high=0;
    int mid=0;
    int guess=0;
    public:
    int testFunction(int array[],int num){
        high=sizeof(array)/sizeof(array[0]);
        while(low<=high){
            mid=floor(low+high)/2;
            guess=array[mid];
            if(guess==num){
                return mid;
            }
            else if(guess>num)
            {
                high--;
            }
            else if(guess<num)
            {
                low++;
            }
            return 0;   
        }
    }
};
int main(){
    int testArray[]={10,223,244,6666,432};
    hax test1;
    cout<<"finding number 6666"<<test1.testFunction(testArray,6666);
    return;
}
