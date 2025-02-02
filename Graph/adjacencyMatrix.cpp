// // // Adjacancy Matrix 
// // // undirected Graph
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int vertex, edges;
//     cin>>vertex>>edges;

//     vector<vector<bool> >AdjMat(vertex, vector<bool>(vertex,0));

//     int u,v;
//     for(int i = 0 ; i<edges; i++){
//         cin>>u>>v;
//         AdjMat[u][v]=1;
//         AdjMat[v][u]=1;

//     }

//     for(int i = 0; i<vertex; i++){
//         for(int j = 0 ; j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
             
//         }
//              cout<<endl;                   
//     }
// }




// // // Adjacancy Matrix 
// // // Directed Weighted Graph
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int vertex, edges;
//     cin>>vertex>>edges;

//     vector<vector<int> >AdjMat(vertex, vector<int>(vertex,0));

//     int u,v,weight;
//     for(int i = 0 ; i<edges; i++){
//         cin>>u>>v>>weight;
//         AdjMat[u][v]=weight;
//         AdjMat[v][u]=weight;

//     }

//     for(int i = 0; i<vertex; i++){
//         for(int j = 0 ; j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
             
//         }
//              cout<<endl;                   
//     }
// }





// // Adjacancy Matrix 
// // Undirected Weighted Graph
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<bool> >AdjMat(vertex, vector<bool>(vertex,0));

    int u,v;
    for(int i = 0 ; i<edges; i++){
        cin>>u>>v;
        AdjMat[u][v]=1;

    }

    for(int i = 0; i<vertex; i++){
        for(int j = 0 ; j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
             
        }
             cout<<endl;                   
    }


}