#include "../headers.h"

int find_number_of_connected_components(std::vector<std::vector<int>> &g)
{
	map<int, set<int>> graph;
	int components = 0;
	
	int n = g.size();  // number of vertices

	// Creating the graph

	for(int i = 0; i < g.size(); i++)
	{
		for(int j = 0; j < g[i].size(); j++)
		{
			if(g[i][j] == 1 && i != j)
			{
				graph[i].insert(j);
				graph[j].insert(i);
			}
		}
	}

	// Standard DFS

	std::vector<int> visited(n, false);

	for(int i = 0; i < n; i++)
	{
		if(visited[i])
		{
			continue;
		}
		else
		{
			components += 1;
		}

		deque<int> stack = {i};
		while(!stack.empty())
		{
			auto node = stack.front();
			stack.pop_front();
			for(auto nei: graph[node])
			{
				if(visited[nei] == false)
				{
					visited[nei] = true;
					stack.emplace_back(nei);
				}
			}
		}

	}

	cout << "The number of connected components are: " << components << endl;
	return components;

}


int main()
{
	/* 
		 Here the vector representation is:
		 g[i][j] = 1
		 if edges i is connected j
		 else
		 g[i][j] = 0

	*/
	vector<vector<int>> g = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
	find_number_of_connected_components(g);
	return 0;
}