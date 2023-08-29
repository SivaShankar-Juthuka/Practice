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
        Node *prev =NULL, *Next = NULL;
        Node *cur = head;
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
        Node *rev = reverse(head);
        Node *prev = rev, *tmp = rev->next;
        while(tmp){
            if(prev->data > tmp->data){
                prev->next = tmp->next;
                tmp = tmp->next;
            }
            else{
                prev = prev->next;
                tmp = tmp->next;
            }
        }
        return reverse(rev);
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