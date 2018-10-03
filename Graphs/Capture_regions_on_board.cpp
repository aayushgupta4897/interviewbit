

void floodfill(vector< vector<char>  > &arr , int x , int y , char prev , char newv )
{
    if(x<0 || x>= arr.size() || y<0 || y>=arr[0].size()){return;}
    if(arr[x][y]!=prev){return;}

    arr[x][y] = newv;

    floodfill(arr,x-1,y,prev,newv);
    floodfill(arr,x,y+1,prev,newv);
    floodfill(arr,x+1,y,prev,newv);
    floodfill(arr,x,y-1,prev,newv);
}

void capture(vector< vector<char>  > &arr)
{
    int m=arr.size(),n=arr[0].size();
    for(int i=0; i<m; i++){ for(int j=0; j<n; j++){ if(arr[i][j]=='O'){  arr[i][j]='a'; }  }}

    for(int i=0; i<n; i++){ if(arr[0][i]=='a'){ floodfill(arr,0,i,'a','O'); }    }
    for(int i=0; i<m; i++){ if(arr[i][n-1]=='a'){ floodfill(arr,i,n-1,'a','O'); }    }
    for(int i=0; i<n; i++){ if(arr[m-1][i]=='a'){ floodfill(arr,m-1,i,'a','O'); }    }
    for(int i=0; i<m; i++){ if(arr[i][0]=='a'){ floodfill(arr,i,0,'a','O'); }    }    

    for(int i=0;i<m;i++)
        { for(int j=0; j<n ; j++)
            { 
                if(arr[i][j]='a'){arr[i][j] = 'X';} 
              }
        }

 }

void Solution::solve(vector<vector<char> > &arr)
{
    capture(arr);
}
   