// #include <stdio.h>
// #define INF 99999
// #define MAX 100

// void floydWarshall(int n, int graph[MAX][MAX]) {
//     int dist[MAX][MAX], i, j, k;

//     // Initialize the solution matrix same as the input graph matrix
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             dist[i][j] = graph[i][j];
//         }
//     }

//     // Floyd-Warshall Algorithm
//     for (k = 0; k < n; k++) {
//         for (i = 0; i < n; i++) {
//             for (j = 0; j < n; j++) {
//                 if (dist[i][k] != INF && dist[k][j] != INF &&
//                     dist[i][k] + dist[k][j] < dist[i][j]) {
//                     dist[i][j] = dist[i][k] + dist[k][j];
//                 }
//             }
//         }
//     }

//     // Print the shortest distance matrix
//     printf("Shortest distances between every pair of vertices:\n");
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             if (dist[i][j] == INF)
//                 printf("INF ");
//             else
//                 printf("%3d ", dist[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n, i, j;
//     int graph[MAX][MAX];

//     printf("Enter the number of vertices: ");
//     scanf("%d", &n);

//     printf("Enter the adjacency matrix (%dx%d) (Use %d for INF):\n", n, n, INF);
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &graph[i][j]);
//         }
//     }

//     floydWarshall(n, graph);

//     return 0;
// }



// STRIVER CODE 


#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
	void shortest_distance(vector<vector<int>>&matrix) {
		int n = matrix.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == -1) {
					matrix[i][j] = 1e9;
				}
				if (i == j) matrix[i][j] = 0;
			}
		}

		for (int k = 0; k < n; k++) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matrix[i][j] = min(matrix[i][j],
					                   matrix[i][k] + matrix[k][j]);
				}
			}
		}




		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == 1e9) {
					matrix[i][j] = -1;
				}
			}
		}
	}
};


int main() {

	int V = 4;
	vector<vector<int>> matrix(V, vector<int>(V, -1));
	matrix[0][1] = 2;
	matrix[1][0] = 1;
	matrix[1][2] = 3;
	matrix[3][0] = 3;
	matrix[3][1] = 5;
	matrix[3][2] = 4;

	Solution obj;
	obj.shortest_distance(matrix);

	for (auto row : matrix) {
		for (auto cell : row) {
			cout << cell << " ";
		}
		cout << endl;
	}

	return 0;
}