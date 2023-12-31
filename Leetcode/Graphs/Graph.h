#include <unordered_map>  
#include <unordered_set>
#include <string>
class Graph{
    private:
        std::unordered_map<std::string,std::unordered_set<std::string>>adjList;  //Primero se crea un unordered_map que contiene un unordered_set de strings, 
        //la key seria el vertice y el unordered_set los vertices adyacentes, se utiliza un unordered_set para evitar duplicados

        public:
    
            void printGraph(){
                for(auto [vertex,edges]:adjList){ //Se utiliza un for each loop para iterar sobre el unordered_map , se crea dos variables vertex y edges, vertex es el key y edges es el value
                    std::cout<<vertex<<": [";
                    for(auto edge:edges){ // este fopr sirve para mostrar los vertices adyacentes
                        std::cout<<edge<<" "; // se muestra el vertice adyacente
                    }
                    std::cout<<"]"<<std::endl;
                }
            }

            bool addVertex(std::string vertex){ // se crea un metodo para agregar vertices, se recibe un string como parametro
                if(adjList.count(vertex)==0) // se verifica si el vertice ya existe en el unordered_map . el metodo count retorna 0 si no existe el vertice
                    adjList[vertex]; // si no existe se agrega al unordered_map
                    return true;

                return false;
            }


        bool addEdge(std::string vertex1, std::string vertex2) {
            if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) { // se verifica si los vertices existen en el unordered_map
                adjList.at(vertex1).insert(vertex2); // se inserta el vertice2 en el unordered_set del vertice1
                adjList.at(vertex2).insert(vertex1); // se inserta el vertice1 en el unordered_set del vertice2
                return true;
            }         
            return false;            
        }

        bool removeEdge(std::string vertex1, std::string vertex2) {
            if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) { // se verifica si los vertices existen en el unordered_map
                adjList.at(vertex1).erase(vertex2); // se elimina el vertice2 del unordered_set del vertice1
                adjList.at(vertex2).erase(vertex1); // se elimina el vertice1 del unordered_set del vertice2
                return true;
            }
            return false;
        }

        bool removeVertex(std::string vertex) {
            if (adjList.count(vertex) != 0) { // se verifica si el vertice existe en el unordered_map
                for (auto edge : adjList.at(vertex)) { // se itera sobre el unordered_set del vertice
                    adjList.at(edge).erase(vertex); // se elimina el vertice del unordered_set de cada vertice adyacente
                }
                adjList.erase(vertex); // se elimina el vertice del unordered_map
                return true;
            }
            return false;
        }
};