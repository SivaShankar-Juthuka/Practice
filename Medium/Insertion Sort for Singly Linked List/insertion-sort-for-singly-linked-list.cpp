//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* head;
    Node* sorted;

    void sortedInsert(Node* newnode) 
    { 
        if (sorted == NULL || sorted->data >= newnode->data) { 
            newnode->next = sorted; 
            sorted = newnode; 
        } 
        else { 
            Node* current = sorted; 
            while (current->next != NULL 
                   && current->next->data < newnode->data) { 
                current = current->next; 
            } 
            newnode->next = current->next; 
            current->next = newnode; 
        } 
    } 
    Node* insertionSort(struct Node* headref)
    {
        //code here
        sorted = NULL; 
        Node* current = headref; 
        while (current != NULL) { 
            Node* next = current->next; 
            sortedInsert(current); 
            current = next; 
        } 
        head = sorted; 
        return head;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends