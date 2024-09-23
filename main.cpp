#include <iostream>
#include <cassert>

int main() {
    
    int t;
    std::cin >> t;
    assert(1 <= t && t <= 10000);
    int cases[t];
    
    for (int k = 0; k < t; k++) {
        int og[2][2];
        int fei[2][2];
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cin >> og[i][j];
            }
        }
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cin >> fei[i][j];
            }
        }
    
        cases[k] = 0;
        
        if (og[0][0] == fei[0][0] && og[0][1] == fei[0][1] && og[1][0] == fei[1][0] && og[1][1] == fei[1][1])
            cases[k]= 1;
    
        if (og[0][0] == fei[0][1] && og[0][1] == fei[1][1] && og[1][0] == fei[0][0] && og[1][1] == fei[1][0])
            cases[k]= 1;
        
        if (og[0][0] == fei[1][1] && og[0][1] == fei[1][0] && og[1][0] == fei[0][1] && og[1][1] == fei[0][0])
            cases[k]= 1;
        
        if (og[0][0] == fei[1][0] && og[0][1] == fei[0][0] && og[1][0] == fei[1][1] && og[1][1] == fei[0][1])
            cases[k]= 1;
        
    }
    
    for (int i = 0; i < t; i++) {
        
        std::cout << "Case #" << i + 1 << ": ";
        
        if (cases[i] == 1) 
            std::cout << "POSSIBLE" << std::endl;
        else {
            std::cout << "IMPOSSIBLE" << std::endl;
        }
    }

    return 0;
}