#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int contaNaoDivisiveis(const vector<long>& sequencia) {
    int count = 0;
    int n = sequencia.size();
    
    for (int i = 0; i < n; ++i) {
        bool divisivel = false;
        std::unordered_set<int> divisores;
        
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                if (divisores.find(sequencia[j]) == divisores.end()) {
                    divisores.insert(sequencia[j]);
                    if (sequencia[i] % sequencia[j] == 0) {
                        divisivel = true;
                        break;
                    }
                }
            }
        }
        
        if (!divisivel) {
            ++count;
        }
    }
    
    return count;
}

int main() {
    int n;

    cin >> n;
    
    vector<long> sequencia(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> sequencia[i];
    }
    
    cout << contaNaoDivisiveis(sequencia) << endl;
    
    return 0;
}
