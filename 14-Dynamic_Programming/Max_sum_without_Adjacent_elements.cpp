int Solution::adjacent(vector<vector<int> > &v)
{
    int n = v[0].size();
    
    
    int inc = max(v[0][0]  , v[1][0]) , exc = 0 , temp;
    
    for(int i=1 ; i<n ; i++)
    {
        temp = max(inc,exc);
        
        inc = exc + max( v[0][i],v[1][i]  );
        
        exc = temp;
        
    }
    
    return max(inc,exc);
}
