#include "../headers.h"

void Matrix_Display(vector<vi>& g)
{	
	/* Printing the 2D vector*/
	for(int i = 0; i < g.size(); i++)
	{
		for(int j= 0; j < g[i].size(); j++)
		{
			cout << g[i][j];		
		}
		cout << endl;
	}

}


int main()
{
	vector<vi> g = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
	Matrix_Display(g);
	return 0;
}