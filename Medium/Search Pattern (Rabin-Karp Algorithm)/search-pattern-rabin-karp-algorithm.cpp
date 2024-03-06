//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector<int> res;
        int d = 256;
        void searching(string pat, string txt, int q){
            int M = pat.length();
            int N = txt.length();
            int i, j, p = 0, t = 0, h = 1;
         
            // The value of h would be "pow(d, M-1)%q"
            for (i = 0; i < M - 1; i++)
                h = (h * d) % q;
         
            // Calculate the hash value of pattern and first
            // window of text
            for (i = 0; i < M; i++) {
                p = (d * p + pat[i]) % q;
                t = (d * t + txt[i]) % q;
            }
            for (i = 0; i <= N - M; i++) {
                if (p == t) {
                    for (j = 0; j < M; j++) {
                        if (txt[i + j] != pat[j]) {
                            break;
                        }
                    }
                    if (j == M)
                        res.emplace_back(i+1);
                }
                if (i < N - M) {
                    t = (d * (t - txt[i] * h) + txt[i + M]) % q;
                    if (t < 0)
                        t = (t + q);
                }
            }
        }
        vector <int> search(string pattern, string text)
        {
            //code here.
            searching(pattern, text, 101);
            return res;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends