// Solution by Alexandros Pouroullis
#include <iostream>
#include <queue>
#include <set>

using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

int n, m;

struct Node{
    int x, y, dist;

    Node(int x, int y, int dist = 0): x(x), y(y), dist(dist) {};

    bool operator<(const Node &o) const{
        return x < o.x || (x == o.x && y < o.y);
    }
};

bool isInside(int x, int y){
    if(x >= 1 && x <= n && y >= 1 && y <= m);
        return true;
    return false;
}

int bfs(Node src, Node dest){
    int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
    int dy[] = {2, -2, -1, 1, 2, -2, 1, -1};
    queue<Node> q;
    set<Node> visited;
    q.push(src);

    while(!q.empty()){
        Node node = q.front();
        q.pop();

        int x = node.x;
        int y = node.y;
        int dist = node.dist;

        if(x == dest.x && y == dest.y){
            return dist;
        }

        if(!visited.count(node)){
            visited.insert(node);
            for(int i = 0; i < 8; i++){
                int new_x = node.x + dx[i];
                int new_y = node.y + dy[i];
                if(isInside(new_x, new_y)){
                    Node newNode = {new_x, new_y};
                    newNode.dist = dist + 1;
                    q.push(newNode);
                }
            }
        }
    }
    return -1;
}

int main(){
    cin >> n >> m;
    pair<int, int> a, b;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    Node src = {a.first, a.second};
    Node dest = {b.first, b.second};
    cout << bfs(src, dest) << endl;
}
