#include <iostream>
#include "liste-adj.hpp"

int main()
{
    GraphList g;
    g.add_vertex(Vertex(0));
    g.add_vertex(Vertex(1));
    g.add_vertex(Vertex(2));
    g.add_edge_graph(0, 1, 32.5);
    g.add_edge_graph(2, 1, 2.5);
    g.add_edge_graph(2, 0, 46.5);
    g.print_graph();
    std::cout<<"Le parcours donne "<<std::endl;
        for (int &j : g.depth_parcour(2))
        {
            std::cout << " ";
            std::cout << j;
        }
        std::cout<<" "<<std::endl;
    ;

    return 0;
}