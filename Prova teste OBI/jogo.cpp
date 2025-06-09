#include <iostream>
#include <vector>
using namespace std;

int N, Q;
vector<vector<int>> grid, nextGrid;

// Direções para os 8 vizinhos (linha, coluna)
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1,  0,  1,-1, 1,-1, 0, 1};

int countAliveNeighbors(int x, int y) {
    int count = 0;
    for (int d = 0; d < 8; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            count += grid[nx][ny];
        }
    }
    return count;
}

void simulateStep() {
    nextGrid = grid; // Copiar estado atual
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int alive = countAliveNeighbors(i, j);
            if (grid[i][j] == 1) {
                if (alive < 2 || alive > 3)
                    nextGrid[i][j] = 0; // Morre
            } else {
                if (alive == 3)
                    nextGrid[i][j] = 1; // Revive
            }
        }
    }
    grid = nextGrid;
}

int main() {
    cin >> N >> Q;
    grid.resize(N, vector<int>(N));
    nextGrid.resize(N, vector<int>(N));

    // Leitura da matriz inicial
    for (int i = 0; i < N; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < N; j++) {
            grid[i][j] = line[j] - '0';
        }
    }

    // Simula Q passos
    for (int step = 0; step < Q; step++) {
        simulateStep();
    }

    // Imprime o resultado final
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
