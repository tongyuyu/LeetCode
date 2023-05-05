#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 双指针法
        int len = nums.size();
        int slowIndex = 0;
        for (int i = 0; i < len; i++) {
            
            if (val != nums[i]) {
                nums[slowIndex] = nums[i];
                slowIndex += 1;
            }
        }
        return slowIndex;




        // 暴力法：
        // int len = nums.size();
        // // 1. 排序
        // for (int i = 0; i < len - 1; i++) {
        //     for (int j = i +1; j < len; j++) {
        //         if (nums[i] > nums[j]) {
        //             int tmp = nums[i];
        //             nums[i] = nums[j];
        //             nums[j] = tmp;
        //         }
        //     }
        // }
        // // 2. 查找val个数
        // int valNums = 0;
        // for (int i = 0; i < len; i++) {
        //     if (nums[i] == val) {
        //         valNums +=1;
        //     }
        // }
        // // 3. 前移
        // for (int i = 0; i < len; i++) {
        //     if (nums[i] == val) {
                
        //         for (int j = i; j < len - valNums; j++){
        //             nums[j] = nums[j + valNums];
        //         }
        //     break;    
        //     }
            

        // }
        // return len - valNums ;

    }
};

int main(){

    vector<int> nums{0,1,2,2,3,0,4,2};
    int val =2;

    Solution solution;
    solution.removeElement(nums, val);
    int len = nums.size();
    for (int i = 0; i < len; i++){
        cout<<nums[i]<<",\t";
    }


    return 0;
}