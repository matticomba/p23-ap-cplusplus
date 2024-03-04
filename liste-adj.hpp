#include <iostream>
#include <vector>
#include <algorithm>

class Vertex;
class Edge
{
    friend class GraphList;
    friend class Vertex;

    Vertex *target = nullptr;
    double weight = 0.0;

public:
    Edge() = default;

    Edge(Vertex *target, double w) : weight(w), target(target) {}

    void change_weight(double val) { weight = val; }
    double get_weight_edge() const
    {
        return weight;
    }

    void print_edge();
};

class Vertex
{
    friend class Edge;
    friend class GraphList;
    std::vector<Edge> vert;
    int id;

public:
    Vertex(int i = 0) : id(i) {}

    int get_id_vertex() const
    {
        return id;
    }

    void add_edge_vertex(Edge e) { vert.push_back(e); }

    double get_weight_invertex(int i) { return vert[i].get_weight_edge(); }

    void print_vertex()
    {
        if (vert.size() == 0)
        {
            std::cout << " NO EGDES ";
            std::cout << " " << std::endl;
        }
        else
        {
            for (int i = 0; i < vert.size(); i = i + 1)
            {
                std::cout << " Id_Departure ";
                std::cout << id;
                vert[i].print_edge();
                std::cout << " " << std::endl;
            }
        }
    }
};

void Edge::print_edge()
{
    std::cout << "--(" << weight << ")--> Id_Arrive " << (*target).id;
}

class GraphList
{
    friend class Edge;
    friend class Vertex;
    std::vector<Vertex> graph;

public:
    GraphList() { this->graph = {}; }
    void add_vertex(Vertex v) { graph.push_back(v); }

    void add_edge_graph(int i, int j, double val)
    {
        graph[i].add_edge_vertex(Edge(&graph[j], val));
    }

    void print_graph()
    {
        for (int i = 0; i < graph.size(); i = i + 1)
        {
            std::cout << "Somment ";
            std::cout << i;
            graph[i].print_vertex();
            std::cout << " " << std::endl;
        }
    }

    std::vector<int> visités;

    std::vector<int> depth_parcour(int i)
    {
        
        bool vu = false;
        for (int &j : visités)
        {
            if (i == j)
            {
                vu = true;
            }
            
        }
        if (vu == false)
        {
            visités.push_back(i);
            for (auto &e : graph[i].vert)
            {
                depth_parcour((*(e.target)).id);
            }
        }

        return visités;
        /*std::cout<<"Le parcours donne "<<std::endl;
        for (int &j : visités)
        {
            std::cout << " ";
            std::cout << j;
        }
        std::cout<<" "<<std::endl;*/
        
        
    }
};