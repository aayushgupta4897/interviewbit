vector<int> Solution::repeatedNumber(const vector<int> &arr)
{
	int n  = arr.size();
	long long int idealsum = (n*(n+1))/2;
	long long int idealsquaresum = ( (n)*(n+1)*(2*n + 1) )/6;
	long long int actualsum =0,actualsquaresum=0;

	for(int i=0 ; i< n ; i++){ actualsum = actualsum + arr[i]; actualsquaresum = actualsquaresum + arr[i]*arr[i]; }

		long long int a = actualsquaresum - idealsquaresum;
	    long long int b = actualsum - idealsum;

	    a = a/b;

	    int mis = (a+b)/2;
	    int du = (a-b)/2;

	    vector<int> v;
	    v.push_back(mis);
	    v.push_back(du);

	    return v;

}
