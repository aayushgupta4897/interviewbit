


int num(vector<int> &v, int t )
{
	int sum=0,z=1;
	for(int i=0 ; i<v.size() ; i++){ sum+= v[i]; if(sum>t){ sum=v[i]; ++z; } }
return z;}




int n = arr.size(),mint=0,maxt=0,mid,d;
for(int i=0 ; i<n ; i++){ mint = max(mint,arr[i]);  maxt+=arr[i]; }

	while(mint<=maxt)
	{
		mid = (mint+maxt)/2;
 		
 		d = num(arr,mid);
 		if( d>t){ mint = mid+1; }
 		else{ maxt  = mid-1; }

	}

	return mint;