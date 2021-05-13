#include <iostream>
#include <tuple>
#include <queue>

bool isInside(int x, int y, int dimensions){
    if(x >= 1 && x <= dimensions && y >= 1 && y <= dimensions)
        return true;
    return false;
}

void bfs(int dimensions, int wc, int wr, int bc, int br){
    int dx[] = {-1, -2, -1, -2, 1, 2, 1, 2};
    int dy[] = {-2, -1, 2, 1, -2, -1, 2, 1};

    queue<tuple<int, int, int>> q;
    q.push({bc, br, 0});
    int t = 0;
    while(!q.empty()){
        t++;
        int x, y, turn;
        tie(x, y, turn) = q.front();
        q.pop();
        if(wr + turn <= dimensions){
            if(x == wc && y == wr + turn){
                cout << "BLACK WINS" << endl;
                cout << turn;
                return;
            }else if(x == wc && y == wr + turn + 1){
                cout << "STALEMATE" << endl;
                cout << turn;
                return;
            }
        }else{
            if(x == wc && y == dimensions){
                cout << "BLACK WINS" << endl;
                cout << turn;
            }else{
                cout << "WHITE WINS";
                break;
            }
        }

        for(int i = 0; i < 8; i++){
            int new_pos_x = x + dx[i];
            int new_pos_y = y + dy[i];
            if(isInside(new_pos_x, new_pos_y, dimensions))
                q.push({new_pos_x, new_pos_y, t});
        }
    }
}

int main(){
    int dimensions;
    cin >> dimensions;
    int wc, wr, bc, br;
    cin >> wc >> wr >> bc >> br;

    bfs(dimensions, wc, wr, bc, br);
}
