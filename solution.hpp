#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "struct.hpp"

using namespace std;

class Solution{
public:
	bool isPalindrome(ListNode* head){
		vector<int> listVals;
		while(head){
			listVals.push_back(head->val);
			head=head->next;
		}
		int left=0; int right=listVals.size()-1;
		while(left<right && listVals[left]==listVals[right]){
			left++;
			right--;
		}
		return left>=right;
	}
};

#endif