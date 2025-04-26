/*
beecrowd | 1799 | [P2][Univ]
The Rat in a Maze

By Neilor Tonin, URI BR Brazil
Timelimit: 1


In 1942, Robert Tryon's study concluded that genetic traits often did, in fact,
contribute to behavior, independent of the environment. To do so, Tryon created
an experiment that tested the proficiency of successive generations of rats in
completing a maze, separating those who made the fewest errors as “bright”, and
those with the most errors as “dull”. Continuing this process for seven generations,
he created two distinct breeds of “bright” and “dull” rats.

IBO is descendent from the "brilliant" strain of rats, and has the best performance
on this experiment. He can come in, pick up the cheese and get out of any maze 
without getting lost, always making the shortest possible path.

Your task in this problem is, given the design of the labyrinth and the position
of the cheese, determine how many points strategically marked by letters or words
containing letters of the alphabet IBO must go through to get the cheese (indicated
by the character '*') and exit, always starting at the Entrada (word in portuguese 
that means Entrance) point and ending at the Saida (word in portuguese that means 
Exit) point. In the example below, the IBO sequence from the Entrada would be: 
A, F, J, *, I, M, K and Exit, resulting in 8, which is the minimum amount of 
points in which IBO must go through to do its job. If IBO pass through a point
twice (one time going for cheese and one time going to the output) it must count
as two points visited.

## Input
The first line of input contains two integers Points (4 ≤ Points ≤ 4000) and
Links (4 ≤ Links ≤ 5000) representing respectively the number of points strategically
marked by letters and the amount of links existing between these points. The
following lines indicates all links between the points. The connection between
two points indicates that anyone can be the origin.

##Output
Print an integer number indicating the minimum amount of points that IBO must
go through to do its task.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

int bfs_min_steps(
    const unordered_map<string, vector<string>>& graph,
    const string& start,
    const string& target
) {
    if (start == target) return 0;

    unordered_set<string> visited = {start};
    queue<pair<string, int>> q({{start, 0}});

    while (!q.empty()) {
        auto [current, steps] = q.front();
        q.pop();

        for (const auto& neighbor : graph.at(current)) {
            if (visited.insert(neighbor).second) {
                if (neighbor == target) return steps + 1;
                
                q.emplace(neighbor, steps + 1);
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);

    int nodes, edges;
    string a, b;
    unordered_map<string, vector<string>> graph;

    cin >> nodes;
    cin >> edges;

    for (int i = 0; i < edges; i++) {
        cin >> a;
        cin >> b;

        graph[a].push_back(b);    
        graph[b].push_back(a);
    }

    int stepsToCheese = bfs_min_steps(graph, "Entrada", "*");
    int stepsToExit = bfs_min_steps(graph, "*", "Saida");

    cout << (stepsToCheese + stepsToExit) << endl;

	return 0;
}