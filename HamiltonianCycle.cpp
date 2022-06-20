#include <vector>
#include <iostream>

using namespace std;

void printSequence(vector <int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

bool is_possible_hamilton(int node, vector<int>& path, vector<std::vector<int>>& graph) {
	if (path.size() == 0) {
		return true;
	}
	else {
		for (size_t i = 0; i < path.size(); i++)
		{
			if (node == path[i]) {
				return false;
			}
		}

		if (graph[path.back()][node] == 0) {
			return false;
		}

		if (path.size() == graph.size() - 1 && graph[node][path.front()] == 0) {
			return false;
		}
	}

	return true;
}

void solve_hamilton(vector<std::vector<int>>& graph, vector<int>& path) {

	if (path.size() == graph.size()) {
		printSequence(path);
	}
	else {
		for (int i = 0; i < graph.size(); i++)
		{
			if (is_possible_hamilton(i, path, graph)) {
				path.push_back(i);
				solve_hamilton(graph, path);
				path.pop_back();
			}
		}
	}
}

void solve_hamilton(vector<vector<int>>& graph) {
	vector<int> path({0});
	solve_hamilton(graph, path);
}



int main()
{

vector<vector<int>> graph = {       {0,3,7,0,0},
                                    {3,0,2,4,0},
                                    {7,2,0,5,4},
                                    {0,4,5,0,6},
                                    {0,0,4,6,0} };

solve_hamilton(graph);

}
