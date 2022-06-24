#include <iostream>
#include <vector>

using namespace std;

void printSequenceSequence (vector<vector <int> > &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}

bool is_possible_sudoku(vector<vector<int>>& grid, int x, int y, int n) {

	for (int j = 0; j < grid.size(); j++)
	{
		if (grid[x][j] == n) {
			return false;
		}
	}

	for (int i = 0; i < grid.size(); i++)
	{
		if (grid[i][y] == n) {
			return false;
		}
	}

    int x0 = (x / 3) * 3;
	int y0 = (y / 3) * 3;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[x0 + i][y0 + j] == n) {
				return false;
			}
		}
	}

	return true;

}

bool solve_sudoku(vector<vector<int>>& grid, int x, int y) {

	if (x == grid.size()-1 && y == grid[0].size() - 1) {
		printSequenceSequence(grid);
		return true;
	}
	else {
		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid.size(); j++)
			{
				if (grid[i][j] == 0) {
					for (int k = 1; k <= grid.size(); k++)
					{
						if (is_possible_sudoku(grid,i,j,k)) {
							grid[i][j] = k;
							solve_sudoku(grid, i, j);
							grid[i][j] = 0;
						}
					}
					return false;
				}
			}
		}
	}
	return true;
}

void solve_sudoku(vector<vector<int>>& grid) {

	solve_sudoku(grid, 0, 0);
}


int main()
{

vector < vector <int> > grid =  { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                                { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                                { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                                { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                                { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                                { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                                { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                                { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                                { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

solve_sudoku(grid);

}
