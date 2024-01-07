//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *head1,Node *head2)
    {
        // your code goes here
        Node *res = NULL;
        Node *p1=head1, *p2 = head2;
        while(p1 != NULL and p2 !=NULL){
            if(p1->data < p2->data){
                Node *Nn = new Node;
                Nn->data = p1->data;
                Nn->next = res;
                res = Nn;
                p1 = p1->next;
            }
            else{
                Node *Nn = new Node;
                Nn->data = p2->data;
                Nn->next = res;
                res = Nn;
                p2 = p2->next;
            }
        }
        while(p1 != NULL){
            Node *Nn = new Node;
            Nn->data = p1->data;
            Nn->next = res;
            res = Nn;
            p1 = p1->next;
        }
        while(p2!=NULL){
            Node *Nn = new Node;
            Nn->data = p2->data;
            Nn->next = res;
            res = Nn;
            p2 = p2->next;
        }
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
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends