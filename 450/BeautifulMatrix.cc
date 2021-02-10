#include<bits/stdc++.h>
#define row 5
#define col 5  
using namespace std;
int main(){
	int mat[5][5],posx=0,posy=0;
	int midx = row/2, midy = col/2;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>mat[i][j];
			if(mat[i][j] == 1){
				posx = i;
				posy = j;
			}
		}
	}
	cout<<abs(midx-posx)+abs(midy-posy);
}