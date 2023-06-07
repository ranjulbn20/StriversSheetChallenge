#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	set<int> row;
	set<int> col;
	for(int i = 0; i < matrix.size(); i++) {
		for(int j = 0; j < matrix[i].size(); j++) {
			if(matrix[i][j] == 0) {
				row.insert(i);
				col.insert(j);
			}
		}
	}

	for(auto itr = row.begin(); itr != row.end(); itr++) {
		int i = *itr;
		for(int j = 0; j < matrix[i].size(); j++)
			matrix[i][j] = 0;
	}

	for(auto itr = col.begin(); itr != col.end(); itr++) {
		int i = *itr;
		for(int j = 0; j < matrix.size(); j++)
			matrix[j][i] = 0;
	}
}