#include<bits/stdc++.h> 
using namespace std;
int rows,columns;
char park[1000][1000];
int gate1[1][2],gate2[1][2],gate3[1][2],cage[1][2];
int persondistance,dinodistance;
int numberofgrasslands=0;
int safeareas=0;
class QItem { 
public: 
int row; 
int col; 
int dist; 
QItem(int x, int y, int w) 
: row(x), col(y), dist(w) 
{ 
} 
}; 
int personlength() 
{ 
QItem source(0, 0, 0); 
bool visited[1000][1000]; 
for (int i = 0; i < 1000; i++) { 
for (int j = 0; j < 1000; j++)
{ 
if (park[i][j] == 'W') 
visited[i][j] = true; 
else if (park[i][j] == 'M') 
visited[i][j] = true; 
else
visited[i][j] = false; 
if (park[i][j] == '1') 
{ 
source.row = i; 
source.col = j; 
} 
} 
} 
queue<QItem> q; 
q.push(source); 
visited[source.row][source.col] = true; 
while (!q.empty()) { 
    QItem p = q.front(); 
q.pop(); 
if (park[p.row][p.col] == 'S') 
return p.dist; 
if (p.row - 1 >= 0 && 
visited[p.row - 1][p.col] == false) { 
q.push(QItem(p.row - 1, p.col, p.dist + 1)); 
visited[p.row - 1][p.col] = true; 
} 
if (p.row + 1 < 1000 && 
visited[p.row + 1][p.col] == false) { 
q.push(QItem(p.row + 1, p.col, p.dist + 1)); 
visited[p.row + 1][p.col] = true; 
} 

if (p.col - 1 >= 0 && 
visited[p.row][p.col - 1] == false) { 
q.push(QItem(p.row, p.col - 1, p.dist + 1)); 
visited[p.row][p.col - 1] = true; 
} 

if (p.col + 1 < 1000 && 
visited[p.row][p.col + 1] == false) { 
q.push(QItem(p.row, p.col + 1, p.dist + 1)); 
visited[p.row][p.col + 1] = true; 
} 
} 
return -1; 
} 

int dinolength() 
{ 
QItem source(0, 0, 0); 
bool visited[1000][1000]; 
for (int i = 0; i < 1000; i++) { 
for (int j = 0; j < 1000; j++)
{ 
if (park[i][j] == 'W') 
visited[i][j] = true; 
else
visited[i][j] = false; 
if (park[i][j] == '0') 
{ 
source.row = i; 
source.col = j; 
} 
} 
} 
queue<QItem> q; 
q.push(source); 
visited[source.row][source.col] = true; 
while (!q.empty()) { 
QItem p = q.front(); 
q.pop(); 
if (park[p.row][p.col] == 'S') 
return p.dist; 
if (p.row - 1 >= 0 && 
visited[p.row - 1][p.col] == false) { 
q.push(QItem(p.row - 1, p.col, p.dist + 1)); 
visited[p.row - 1][p.col] = true; 
} 
if (p.row + 1 < 1000 && 
visited[p.row + 1][p.col] == false) { 
q.push(QItem(p.row + 1, p.col, p.dist + 1)); 
visited[p.row + 1][p.col] = true; 
} 

if (p.col - 1 >= 0 && 
visited[p.row][p.col - 1] == false) { 
q.push(QItem(p.row, p.col - 1, p.dist + 1)); 
visited[p.row][p.col - 1] = true; 
} 

if (p.col + 1 < 1000 && 
visited[p.row][p.col + 1] == false) { 
q.push(QItem(p.row, p.col + 1, p.dist + 1)); 

visited[p.row][p.col + 1] = true; 
} 
} 
return -1; 
} 

int main(){
cout<<"Enter the dimensions of Park : "<<endl;
cin>>rows;
cin>>columns;
cout<<"Enter the Gate positions as Row Column : "<<endl;
cin>>gate1[0][0]>>gate1[0][1]>>gate2[0][0]>>gate2[0][1]>>gate3[0][0]>>gate3[0][1];
cout<<"Enter cage coordinates : "<<endl;
cin>>cage[0][0]>>cage[0][1];
cout<<"Enter the park layout in W,G and M : "<<endl;
for(int i=0;i<rows;i++){
for(int j=0;j<columns;j++)
{
cin>>park[i][j];
}
}
for(int i=0;i<rows;i++){
for(int j=0;j<columns;j++)
{
if(park[i][j]=='G')
numberofgrasslands++;
}
}
cout<<endl<<"Park Layout :"<<endl;

park[gate1[0][0]-1][gate1[0][1]-1]='S';
park[gate2[0][0]-1][gate2[0][1]-1]='S';
park[gate3[0][0]-1][gate3[0][1]-1]='S';
park[cage[0][0]-1][cage[0][1]-1]='0';

dinodistance=dinolength();
for(int i=0;i<rows;i++){
for(int j=0;j<columns;j++)
{
if(park[i][j]=='G')
{
park[i][j]='1';
if(dinodistance<personlength()){
park[i][j]='U';
}
}
}
}
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++)
{
cout<<park[i][j]<<"\t";
}
cout<<endl;
}

for(int i=0;i<rows;i++){
for(int j=0;j<columns;j++)
{
if(park[i][j]=='S')
safeareas++;
if(park[i][j]=='1'){
safeareas++;
}
}
}
cout<<endl<<(safeareas*100)/numberofgrasslands;
return 0;
}
