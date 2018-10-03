vector<int> Solution::flip(string arr) {
    
int n = arr.size(),l=0,r=0,cur=0,maxt=0,lt=0,rt=0;
vector<int> v;
for(int i=0 ; i<n ; i++)
{
    if(arr[i]=='0'){ ++cur;}
    else{ --cur;}
    if(cur<0)
    {
        while(cur<0 && l<=i){ if(arr[l]=='0'){--cur;} else{++cur;} ++l; }
    }
    if(cur>maxt){ lt = l; rt = i;}
    maxt = max(cur,maxt);

}
if(maxt>0){ v.push_back(lt+1); v.push_back(rt+1); }
return v;
}
