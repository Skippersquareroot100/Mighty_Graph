#include <bits/stdc++.h>
using namespace std;
int main()
{
  int Vertices,Edge,From,To,Weigth;

  cout<<"Enter Vertices:";
  cin>>Vertices;
  cout<<"Enter Edge:";
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
     cin>>From>>To>>Weigth;
     arr[From][To]=Weigth;
     

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