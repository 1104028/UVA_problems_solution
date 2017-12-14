#include<iostream>
#include<stdio.h>
using namespace std;

int graph[27][27];
char largest, edge[3];
bool visited[27] = { false };
int n, count;
void connectedGraph(int i){
	if (visited[i]==true)
		return;

	visited[i] = true;

	for (int j = 0; j<n; j++){

		if (graph[i][j] == 1){
			connectedGraph(j);
		}
	}

}

void processResult(){
	int count = 0;
	for (int i = 0; i <n; i++){
		if (visited[i] == false){
			connectedGraph(i);
			count++;
		}

	}
	cout << count << "\n";
}

int main()
{
	int test;
	cin >> test;
	while (test > 0)
	{
		cin >> largest;

		getchar();
		n = largest - 65 + 1;

		while (gets_s(edge) && edge[0])
		{
			graph[edge[0] - 65][edge[1] - 65] = 1;
			graph[edge[1] - 65][edge[0] - 65] = 1;
		}

		processResult();
	}
}