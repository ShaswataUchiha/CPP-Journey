#include <iostream>
#include<vector>
using namespace std;

int findPivotElement(vector<int>& nums){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int m = s+(e-s)/2;

        while(s <= e){
            // Corner case
            if(s == e){
                return e;
            }

            if(nums[m] < nums[m-1]){
                return nums[m-1];
            }
            else if(nums[m] > nums[m+1]){
                return nums[m];
            }
            else if(nums[s] > nums[m]){
                e = m-1;
            }
            else{
                s = m+1;
            }
            m = s+(e-s)/2;
        }
        return -1;
    }

int main() {
    
    vector<int> v;
    
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    
    int ans = findPivotElement(v);
    cout << ans;
    
    return 0;
}	