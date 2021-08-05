#include <iostream>
#include <vector>

using namespace std;

/* Check that all elemenents in vector are unique
 * Dynamic array is used since this function can 
 * be reused for solving problem with any number
 * for cities without modification */
bool all_unique(std::vector<int> path){
    int n = path.size();
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(path[i] == path[j]){
                return false;
            }
        }
    }
    return true;
}

/* Finding length of the path using so-called adjacency matrix
 * It is nothing more but a table of distances
 * */
int path_length(vector<vector<int>> adj_matrix, vector<int> path){
    int len = 0;
    int current_city = path[0];
    for(int i = 1; i < path.size(); ++i){
        int next_city = path[i];
        len += adj_matrix[current_city][next_city];
        current_city = next_city;
    }
    return len;
}

int main(void){
    /* Conventions:
     * No loops
     * Start & finish at city 0
     * Complete graph
     */

    /* Reading table of distances */
    vector<vector<int>> adj_matrix(4);
    for(int i = 0; i < 4; ++i){
        adj_matrix[i] = vector<int>(4);
        for(int j = 0; j < 4; ++j){
            cin >> adj_matrix[i][j];
        }
    }

    /* One way is to set shortest path to something big.
     * However, if we have very big graph or we have long roads
     * our shortest path length can exceed initial value of shortest path.
     * To overcome this issue, we will initialize it with some value indicating
     * that we haven't found any path in our graph */
    int shortest_path = -1;
    for(int c1 = 1; c1 < 4; ++c1){
        for(int c2 = 1; c2 < 4; ++c2){
            for(int c3 = 1; c3 < 4; ++c3){
                /* Let's collect all cities in one path. Notice that here we 
                 * ignore out convention and we don't finish at city 0 as
                 * in that case test for uniqueness of all values will fail */
                vector<int> path = {0, c1, c2, c3};
                if(all_unique(path)){
                    /* If we reached this point, then our path for sure visits all cities
                     * and the only remaining thing is to go back to city 0 */
                    path.push_back(0);
                    int p_len = path_length(adj_matrix,path);
                    if(shortest_path == -1 || p_len < shortest_path){
                        shortest_path = p_len;
                    }
                }
            }
        }
    }
    cout << shortest_path << std::endl;
}
