class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum=0 , n=triangle.size();
        vector<int>v(n);
        v[0]=triangle[0][0];
        
        for(int i=1 ; i<n ; i++){
            for(int j=i ; j>=0 ; j--){
                if(i==j){
                    v[j]=v[j-1]+triangle[i][j];
                }
                else if(j==0){
                    v[j]=v[0]+triangle[i][j];
                }
                else{
                    v[j]=min(v[j],v[j-1])+triangle[i][j];
                }
            }
        }     
        sum=*min_element(v.begin() , v.end());

        return sum;
    }
};