#ifndef STRUCT_HPP
#define STRUCT_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

struct ListNode{
public:
	int val;
	ListNode* next;
	ListNode(): val(0), next(nullptr) {}
	ListNode(int x): val(x), next(nullptr) {}
	ListNode(int x, ListNode* next): val(x), next(next) {}
};

#endif