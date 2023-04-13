#include <bits/stdc++.h>
using namespace std;
//by using manual memory allocation
class G
{
    private:
    int numberofnodes;
    int adjacencyList[100][100];
    public:
    void Graph(int numberofnodes)
    {
        this->numberofnodes=numberofnodes;
      

        for(int i=0;i<numberofnodes;i++)
        {
            for(int j=0;j<numberofnodes;j++)
            {
                adjacencyList[i][j]=0;
            }
        }
    }

    void addEdge(int u, int v)
    {
         adjacencyList[u][v]=1;
          adjacencyList[v][u]=1;
    }

    void print()
    {
        cout<<"Adjacency List\n";
        for(int i=0;i<numberofnodes;i++)
        {
         cout<<"----------------------------------------\n";
         cout<<"|"<<i<<"|->";
            for(int j=0;j<numberofnodes;j++)
            {
             if(adjacencyList[i][j]==1)
             {
                cout<<"|"<<j<<"|->";
             }
            }
            cout<<"|/|\n";

        }

    }
    


};
 int main()
 {
    int numberofnodes=8;
    G obj;

   obj.Graph(numberofnodes);

obj.addEdge(1,5);
obj.addEdge(1,2);
obj.addEdge(1,6);
obj.addEdge(2,6);
obj.addEdge(5,6);
obj.addEdge(3,6);
obj.addEdge(3,5);
obj.addEdge(4,5);
obj.addEdge(3,4);
obj.addEdge(0,1);
obj.addEdge(0,2);
obj.addEdge(5,7);
obj.addEdge(4,7);
    obj.print();

    
 }