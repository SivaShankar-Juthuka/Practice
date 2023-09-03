//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
    Node *reverse(Node *head){
        Node *cur = head, *prev=  NULL, *Next = NULL;
        while(cur != NULL){
            Next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = Next;
        }
        head = prev;
        return head;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        Node *res = new Node(-1);
        Node *tail = res;
        head = reverse(head);
        Node *tmp = head;
        int x = res->data;
        while(tmp){
            if(tmp->data >= x){
                tail->next = new Node(tmp->data);
                tail = tail->next;
                x = tmp->data;
            }
            tmp = tmp->next;
        }
        res = reverse(res->next);
        return res;
    }
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends