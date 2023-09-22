class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>v;
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==x){
            v.push_back(i);}
        }
        if(v.size()==0) return{-1,-1};
        
        return{v[0],v[v.size()-1]}; 
    }
};