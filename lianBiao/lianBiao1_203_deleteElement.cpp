#include <iostream>
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr){}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // 删除头节点
        while (head != nullptr && head->val == val) {
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }

        // 删除非头节点
        ListNode* cur = head;   // 定义临时指针，指向head
        while (cur != nullptr && cur->next != nullptr) {
            if (cur->next->val == val) {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else {
                cur = cur->next;
            }
        }
        return head;

    }
};

int main() {
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(6);
    ListNode* n4 = new ListNode(3);
    ListNode* n5 = new ListNode(4);
    ListNode* n6 = new ListNode(5);
    ListNode* n7 = new ListNode(6);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = nullptr;


    //遍历链表
    ListNode* p = n1;
    while(p){
        cout<<p->val<<", ";
        p=p->next;
    }
    cout<<endl;

   

    Solution solution;
    solution.removeElements(n1, 6);

    //遍历链表
    cout<<"移除之后："<<endl;
    ListNode* p1 = n1;
    while(p1){
        cout<<p1->val<<", ";
        p1=p1->next;
    }



    return 0;
}