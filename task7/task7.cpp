#include <iostream>
#include <vector>
#include <unordered_set>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int M, N;
    cout << "Введите размеры матрицы (M N): ";
    cin >> M >> N;

    vector<vector<int>> matrix(M, vector<int>(N));
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    unordered_set<int> firstRowSet(matrix[0].begin(), matrix[0].end());
    int similarRowsCount = 0;

    for (int i = 1; i < M; ++i) {
        unordered_set<int> currentRowSet(matrix[i].begin(), matrix[i].end());
        if (currentRowSet == firstRowSet) {
            ++similarRowsCount;
        }
    }

    cout << "Количество строк, схожих на первую: " << similarRowsCount << endl;

    return 0;
}
