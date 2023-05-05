#include<iostream>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //1. 定义一个全0数组
        int array[26] = {0};
        int len1 = s.size();
        int len2 = t.size();
        if (len1 != len2) {
            return false;
        }

        // 遍历s
        for (int i = 0; i< len1; i++) {
            int numPos = s[i] - 'a';
            array[numPos] += 1;         
        }

        // 遍历t
        for (int i = 0; i< len2; i++) {
            int numPos = t[i] - 'a';
            array[numPos] -= 1;         
        }

        // 判断array是否全0
        for (int i = 0; i< 26; i++) {
            if (array[i] != 0) {
                return false;
            }

        }
        return true;
    }
};

int main(){

    string s = "abcdadsds";
    string t = "bcassadas";

    Solution solution;
    cout<<solution.isAnagram(s,t)<<endl;

    return 0;
}