#include <iostream>
using namespace std;
int lcs( string X, string Y, int m, int n ) 
{ 
	int L[m + 1][n + 1]; 
	int col, row; 
	
	/* Following steps build L[m+1][n+1] in 
	bottom up fashion. Note that L[i][j] 
	contains length of LCS of X[0..i-1] 
	and Y[0..j-1] */
	for (col = 0; col <= m; col++) 
	{ 
		for (row = 0; row <= n; row++) 
		{ 
		if (col == 0 || row == 0) 
			L[col][row] = 0; 
	
		else if (X[col - 1] == Y[row - 1]) 
			L[col][row] = L[col - 1][row - 1] + 1; 
	
		else
			L[col][row] = max(L[col - 1][row], L[col][row - 1]); 
		} 
	} 
		
	/* L[m][n] contains length of LCS 
	// for X[0..n-1] and Y[0..m-1] */
    int l = L[m][n]; 
    char array1[l + 1]; 
    array1[l] = '\0';
    col=m,row=n; 
    while(col>0 & row>0){
        if(X[col-1]==Y[row-1]){
            array1[--l] = X[col-1];
            col = col - 1;
            row = row - 1;
        }
        else if(L[col-1][row]>L[col][row-1]){
            col = col - 1;
        }
        else{
            row = row - 1;
        }
    }
    cout<<"length of lcs : "<<L[m][n]<<endl<<"LCS = " << array1 <<endl;
    return 0; 
} 




int main(){
    string s1,s2;
    cout<<"s1:";
    cin>>s1;
    cout<<"s2:";
    cin>>s2;
    cout<<lcs(s1,s2,s1.length(),s2.length());
    return 0;
}