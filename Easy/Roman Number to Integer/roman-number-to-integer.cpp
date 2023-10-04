//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int n = s.length(), sum=0;
        for(int i=n-1; i>=0; true){
            if(s[i]=='V'){
                if((i) and s[i-1]=='I'){
                    sum+=4;
                    i-=2;
                }
                else{
                    sum+=5;
                    i-=1;
                }
            }
            else if(s[i]=='X'){
                if((i) and s[i-1]=='I'){
                    sum+=9;
                    i-=2;
                }
                else{
                    sum+=10;
                    i-=1;
                }
            }
            else if(s[i]=='L'){
                if((i) and s[i-1]=='X'){
                    sum+=40;
                    i-=2;
                }
                else{
                    sum+=50;
                    i-=1;
                }
            }
            else if(s[i]=='C'){
                if((i) and s[i-1]=='X'){
                    sum+=90;
                    i-=2;
                }
                else{
                    sum+=100;
                    i-=1;
                }
            }
            else if(s[i]=='D'){
                if((i) and s[i-1]=='C'){
                    sum+=400;
                    i-=2;
                }
                else{
                    sum+=500;
                    i-=1;
                }
            }
            else if(s[i]=='M'){
                if((i) and s[i-1]=='C'){
                    sum+=900;
                    i-=2;
                }
                else{
                    sum+=1000;
                    i-=1;
                }
            }
            else{
                sum+=1;
                i-=1;
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends