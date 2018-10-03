bool compi(const Interval& a, const Interval& b)
{
    return (a.start < b.start);
}


vector<Interval> Solution::merge(vector<Interval> &arr)
{

     sort( arr.begin() , arr.end(),compi );

     int l=arr[0].start, r=arr[0].end;
     vector<Interval> v;

     for(int i=1 ; i<arr.size() ; i++)
     {
             if(r >= arr[i].start && r<=arr[i].end ){ r = arr[i].end; }
             else if(r >= arr[i].start && r>=arr[i].end){}
             else if(r==arr[i].start){ r = arr[i].end; }
             else if(r<=arr[i].start){ Interval g; g.start = l; g.end = r;  v.push_back(g); l=arr[i].start;r=arr[i].end; }    
     }
  
      Interval g; g.start = l; g.end = r;  v.push_back(g);
      sort(v.begin() , v.end() , compi);
      return v;
}