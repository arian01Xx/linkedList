#include "struct.hpp"
#include "solution.hpp"
#include "solutionOne.hpp"

using namespace std;

int main(){

	Solution solution;
	ListNode* first=new ListNode(1);
	first->next=new ListNode(2);
	first->next->next=new ListNode(2);
	first->next->next->next=new ListNode(1);
	bool firstOut=solution.isPalindrome(first);
	cout<<"First answer= "<<firstOut<<endl;
	cout<<endl;

	solutionOne solution1;
	ListNode* second=new ListNode(1);
	second->next=new ListNode(2);
	second->next->next=new ListNode(6);
	second->next->next->next=new ListNode(3);
	second->next->next->next->next=new ListNode(4);
	second->next->next->next->next->next=new ListNode(5);
	second->next->next->next->next->next->next=new ListNode(6);
	int val=6;
	ListNode* secondOutput=solution1.removeElements(second, val);
	cout<<"Original LinkedList= "<<endl;
	while(second){
		cout<<second->val<<"->";
		second=second->next;
	}
	cout<<endl;
	cout<<endl;
	cout<<"Remove the intger= "<<endl;
	while(secondOutput){
		cout<<secondOutput->val<<"->";
		secondOutput=secondOutput->next;
	}
	cout<<endl;
	cout<<endl;

	return 0;
}