// fun fact: notmycode, it was contributed by someone under the nickname "toidicakhia".
/* proof:
*  https://e-kitten.cat/📸/orjzi6pk.png
*  https://typescript.love/📸/j6kf2r2z.png
*  plss dont ban me, just test code:3
*/

#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

const int limit = 1010;
struct Pos {
    ll x, y;
};

struct PairHash {
    size_t operator()(const pair<ll, ll>& p) const {
        return std::hash<ll>()(p.first) ^ (std::hash<ll>()(p.second) << 1);
    }
};

Pos moveHead(const Pos &cur, char c, ll n) {
    Pos ret = cur;
    if (c == 'L') {
        ret.y = (cur.y - 1 < 1 ? n : cur.y - 1);
    } else if (c == 'R') {
        ret.y = (cur.y + 1 > n ? 1 : cur.y + 1);
    } else if (c == 'U') {
        ret.x = (cur.x - 1 < 1 ? n : cur.x - 1);
    } else if (c == 'D') {
        ret.x = (cur.x + 1 > n ? 1 : cur.x + 1);
    }
    return ret;
}

// :3
void sub1(ll n, int m, int q) {
    Pos snake[limit];
    for (int i = 1; i <= m; i++) {
        cin >> snake[i].x >> snake[i].y;
    }

    while(q--) {
        int type;
        cin >> type;
        if (type == 1) {
            char dir;
            cin >> dir;
            Pos newHead = moveHead(snake[1], dir, n);
            for (int i = m; i >= 2; i--) {
                snake[i] = snake[i-1];
            }
            snake[1] = newHead;
        } else if (type == 2) {
            int p;
            cin >> p;
            cout << snake[p].x << " " << snake[p].y << "\n";
        }
    }
}

// :(
void sub2(ll n, int m, int k, int q) {
    Pos* snake = new Pos[m];
    unordered_set<pair<ll, ll>, PairHash> obs;
    int head = 0;
    bool gameOver = false;

    for (int i = 0; i < m; i++) {
        cin >> snake[i].x >> snake[i].y;
    }
    for (int i = 0; i < k; i++) {
        ll ox, oy;
        cin >> ox >> oy;
        obs.insert({ox, oy});
    }
    while(q--) {
        int type;
        cin >> type;
        if (type == 1) {
            char dir;
            cin >> dir;
            if(gameOver) continue;

            Pos curHead = snake[head];
            Pos newHead = moveHead(curHead, dir, n);

            head = (head - 1 + m) % m;
            snake[head] = newHead;

            if(obs.find({newHead.x, newHead.y}) != obs.end())
                gameOver = true;

        } else if (type == 2) {
            int p;
            cin >> p;
            if(gameOver) {
                cout << "Game Over" << "\n";
            } else {
                int idx = (head + p - 1) % m;
                cout << snake[idx].x << " " << snake[idx].y << "\n";
            }
        }
    }
    delete[] snake;
}

int main(){
    io;
    freopen("SNAKE.INP", "r", stdin);
    freopen("SNAKE.OUT", "w", stdout);

    ll n;
    int m, k, q;
    cin >> n >> m >> k >> q;

    if(k == 0 && m <= 1000 && q <= 1000) {
        sub1(n, m, q);
    } else {
        sub2(n, m, k, q);
    }
}



