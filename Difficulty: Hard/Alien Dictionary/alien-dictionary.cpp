//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        unordered_map<char, set<char>> graph;
        unordered_map<char, int> inDegree; 
        for (auto& word : words) {
            for (auto& ch : word) {
                graph[ch]; 
            }
        }
    
        // Compare adjacent words to build edges
        for (int i = 0; i < words.size() - 1; i++) {
            string word1 = words[i];
            string word2 = words[i + 1];
            int len = min(word1.size(), word2.size());
            
            if (word1.substr(0, len) == word2.substr(0, len) && word1.size() > word2.size()) {
                return ""; 
            }
    
            for (int j = 0; j < len; j++) {
                if (word1[j] != word2[j]) {
                    char from = word1[j];
                    char to = word2[j];
                    if (graph[from].insert(to).second) {                      inDegree[to]++;
                    }
                    break;
                }
            }
        }
    
        queue<char> q;
        for (auto& node : graph) {
            char ch = node.first;
            if (inDegree[ch] == 0) {
                q.push(ch);  
            }
        }
    
        string result = "";
        while (!q.empty()) {
            char curr = q.front();
            q.pop();
            result += curr;
    
            for (auto& neighbor : graph[curr]) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
    
        if (result.size() != graph.size()) {
            return ""; 
        }
    
        return result;
    }
};


//{ Driver Code Starts.

bool validate(const vector<string> &original, const string &order) {
    unordered_map<char, int> mp;
    for (const string &word : original) {
        for (const char &ch : word) {
            mp[ch] = 1;
        }
    }
    for (const char &ch : order) {
        if (mp.find(ch) == mp.end())
            return false;
        mp.erase(ch);
    }
    if (!mp.empty())
        return false;

    for (int i = 0; i < order.size(); i++) {
        mp[order[i]] = i;
    }

    for (int i = 0; i < original.size() - 1; i++) {
        const string &a = original[i];
        const string &b = original[i + 1];
        int k = 0, n = a.size(), m = b.size();
        while (k < n and k < m and a[k] == b[k]) {
            k++;
        }
        if (k < n and k < m and mp[a[k]] > mp[b[k]]) {
            return false;
        }
        if (k != n and k == m) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        string curr;
        vector<string> words;
        while (ss >> curr)
            words.push_back(curr);

        vector<string> original = words;

        Solution ob;
        string order = ob.findOrder(words);

        if (order.empty()) {
            cout << "\"\"" << endl;
        } else {
            cout << (validate(original, order) ? "true" : "false") << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends