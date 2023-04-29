#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0;
        int right = len-1;
        //int mid = len/2-1;
        // 
        while(left <= right){
            //定义并每次更新mid
            int mid = left + ((right - left) / 2);
            // target在右区间
            if (nums[mid] < target){     
                left =mid+1;
            }
            // target在左区间
            else if (nums[mid]> target){
                right = mid-1;          
            }
            else return mid;
        }
        return -1;
    }
};

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> cost(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.search(cost,8) << endl;
}