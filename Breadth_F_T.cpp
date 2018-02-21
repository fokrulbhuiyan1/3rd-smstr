#include<iostream>
using namespace std;
#define unvisited -1;
#define marked 0;
#define visited 1;
#define CONNECTED 1;
#define DISCONNECTED 0;


int graph[100+1][100+1];

int queue[100],head=0,tail=0;

int nodes,edge;

void enqueue(int node){
    queue[tail++]=node;
}

int dequeue(){
    return queue[head++];
}

void bfs(int source, int nodes){
    int level[100];
    for(int i =1;i<=nodes;i++){
    level[i]=unvisited;
    enqueue(source);
    level[source]=marked;
    while(head!=tail){
        int vn = dequeue();
        cout<<vn<<" ";
        for(int i = 1;i<=nodes;i++){
            if(graph[vn][i]==CONNECTED){
                if(level[i]=unvisited){
                    level[i]==marked;
                    enqueue(i);
                }
            }
        }
        level[vn]=visited;
    }
    cout<<endl;
    }

}

int main(){
    int x,y,source;
    cout<<"Enter the nodes: ";
    cin>>nodes;
    for( int i = 1; i<=nodes;i++){
    for(int j = 1;j<=nodes;j++){
    graph[i][j]=DISCONNECTED;
    }
    }
    cout<<"Enter the edge: ";
    cin>>edge;
    for( int i = 1; i<=nodes;i++){
    cout<<"Enter the vertexes for edge: ";
    cin>>x>>y;
    graph[x][y]=graph[y][x]=CONNECTED;
    }
    cout<<"Give source: ";
    cin>>source;
    bfs(source,nodes);

}
