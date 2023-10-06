//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
#include<bits/stdc++.h>
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        vector<int>v;
        vector<int>v1;
        Node *tmp = odd;
        int i = 0, j = 0;
        while(tmp){
            if(i % 2 == 0){
                v.emplace_back(tmp->data);
            }
            else{
                v1.emplace_back(tmp->data);
            }
            tmp = tmp->next;
            i += 1;
        }
        reverse(v1.begin(), v1.end());
        tmp = odd;
        i = 0;
        // for(auto it : v){
        //     cout<<it<<" - ";
        // }
        // cout<<"\n";
        // for(auto it :v1){
        //     cout<<it<<" ";
        // }
        // cout<<"\n";
        while(i != v.size()){
            tmp->data = v[i];
            i += 1;
            tmp = tmp->next;
        }
        i = 0;
        while(i != v1.size()){
            tmp->data = v1[i];
            i += 1;
            tmp = tmp->next;
        }
        return;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends