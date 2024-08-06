#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "struct.hpp"

using namespace std;

class solutionOne{
public:
	ListNode* removeElements(ListNode* head, int val){
		ListNode* temp=head;
		//lo de abajo es una sola lista
		ListNode* newHead=new ListNode(0);
		ListNode* newTemp=newHead;
		while(temp!=nullptr){
			if(temp->val!=val){
				newTemp->next=new ListNode(temp->val);
				newTemp=newTemp->next;
			}
			temp=temp->next;
		}
		return newHead->next;
	}
};

#endif