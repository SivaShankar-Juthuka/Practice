//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
  public:
    bool prime(int n) {
        if(n == 1) return false;
        if(n == 2) return true;
        for(int i = 2; i < int(sqrt(n))+1; i++) {
            if(n%i == 0) return false;
        }
        return true;
    }
    
    int nearest_prime(int n) {
        int dis1 = -1, dis2 = -1, val1, val2;
        
        for(int i = n-1; i > 1; i--) {
            if(prime(i)){
                dis1 = n-i;
                val1 = i;
                break;
            }
        }
        int i = n+1;
        while(true){
            if(prime(i)) {
                dis2 = i-n;
                val2 = i;
                break;
            }
            i += 1;
        }
        if(dis1 == dis2) return min(val1, val2);
        else if(dis1 != -1 && (dis1 < dis2 || dis2 == -1)) return val1;
        else return val2;
    }
  
    Node *primeList(Node *head) {
        // code here
        Node *tmp = head;
        while(tmp) {
            if(!prime(tmp->val)) {
                int prime_val = nearest_prime(tmp->val);
                tmp->val = prime_val;
            }
            tmp = tmp->next;
        }
        return head;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends