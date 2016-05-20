//
//  main.cpp
//  LinkListCycleHeaderNode
//
//  Created by KrisOne on 16/5/20.
//  Copyright (c) 2016 KrisOne. All rights reserved.
//

#include <iostream>

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return NULL;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast==NULL||fast->next==NULL){
            return NULL;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};

int main(int argc, const char * argv[]) {

    return 0;
}