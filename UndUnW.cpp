#include <bits/stdc++.h>
using namespace std;
int main()
{
  int Vertices,Edge,From,To;

  cout<<"Enter Number of Vertices:";
  cin>>Vertices;
  cout<<"Enter Number of Edges:";
  cin>>Edge;


  int arr[Vertices][Vertices];



  for(int i=0;i<Vertices;i++)
  {
      for(int j=0;j<Vertices;j++)
  {
       arr[i][j]=0;
  }
  }
   

  cout<<"Plot Your Graph:\n";

  for(int i=0;i<Edge;i++)
  {
     cin>>From>>To;
     arr[From][To]=1;
     arr[To][From]=1;

  }
  
cout<<"Adjacency Matrix:\n";
    for(int i=0;i<Vertices;i++)
  {
      for(int j=0;j<Vertices;j++)
  {
       cout<<arr[i][j]<<" ";
  }
  cout<<endl;
  }

}
