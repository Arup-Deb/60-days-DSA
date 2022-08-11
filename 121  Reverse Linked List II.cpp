/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(head->next==NULL || head==NULL || right==left) return head;
//         int i=0,j=0;
//         ListNode* curr=head;
//         ListNode* last=head;
//         ListNode* pre=NULL;
//         while(i<left-1 && j<right)
//         {
//             pre=curr;
//             curr=curr->next;
//              i++;
//             last=last->next;
//              j++;
//         }
//         ListNode* pre1=nullptr;
// ListNode* curr1=curr;
// ListNode* next=nullptr;
// int k=0;
// while(curr1 && k<(right-left)+1){
// next=curr1->next;
// curr1->next=pre1;
// pre1=curr1;
// curr1=next;
// k++;
// }
// if(pre==nullptr){
// pre=pre1;
// head=pre;
// }
// else{
// pre->next=pre1;}
// curr->next=last;
// return head;
//     }

//////////////////////////////////////////////////////////////////////////////////////////////
        /*
if(head->next==nullptr || head==nullptr || right==left) return head;
ListNode* curr=head;
ListNode* pre=nullptr;
int i=0;
while(i<left-1){
pre=curr;
curr=curr->next;
i++;
}
int j=0;
ListNode* last=head;
while(j<right){
last=last->next;
j++;
}
ListNode* pre1=nullptr;
ListNode* curr1=curr;
ListNode* next=nullptr;
int k=0;
while(curr1 && k<(right-left)+1){
next=curr1->next;
curr1->next=pre1;
pre1=curr1;
curr1=next;
k++;
}
if(pre==nullptr){
pre=pre1;
head=pre;
}
else{
pre->next=pre1;}
curr->next=last;
return head;
    }
    */
        //////////////////////////////////stack approach///////////////////////////////////////////
//            stack<int>s;
//         int count=0;
//         ListNode *curr=head;
//         while(curr!=NULL)
//         {
            
//             count++;
//             if(count>=left && count<=right)
//             {
//                 s.push(curr->val);
//             }
//             curr=curr->next;
//         }
//         count=0;
//         curr=head;
//         while(curr!=NULL && !s.empty())
//         {
//              count++;
//             if(count>=left && count<=right)
//             {
//                 curr->val=s.top();
//                 s.pop();
//             }
//             curr=curr->next;
            
//         }
//         return head;
//     }
    /////////////////////using vector////////////////////
     ListNode* start = head;
    ListNode* end = start;
               
   int i = 1;
    int j = 1;
    
    // Taking our end and start pointers to their respective positions
    while((i != left) || (j != right)){
        
        if(i != left){
           start = start -> next;
           i++;
           j = i;
        }
        
        if(i == j){
            end = start;
        }
        
        if(j != right){
            end = end -> next;
            j++;
        }else{
            break;
        }       
    }
    
    int vecSize = right - left + 1;
    
    vector<int> v;
    ListNode* ptr = start;
    
     
    while(ptr != (end -> next)){
        v.push_back(ptr->val);
        ptr = ptr -> next;       
    }
    
    reverse(v.begin(),v.end());
    
    for(int i=0; i < v.size() ; i++){
        start -> val = v.at(i);
        start = start -> next;
    }
    return head;
}
}; 