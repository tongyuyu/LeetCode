#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        // 思路：依次首尾交换
        int left = 0;
        int right = s.size()-1;
        while (left <= right) {
            char tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            left++;
            right--;
        }
       
    }
};

int main(){
    
    // vector<char> s;
    // s.push_back('h');
    // s.push_back('e');
    // s.push_back('l');
    // s.push_back('l');
    // s.push_back('o');
    // s.push_back(97);
    vector<char> s{'h','e','l','l','o'};

    // 如何添加字符串（指定类型）元素？ 
   
    Solution solusion;
    solusion.reverseString(s);

    for (int i = 0; i < 6; i++) {
        cout<<s[i]<<endl;
    }
    return 0;
}