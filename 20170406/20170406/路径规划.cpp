#include<iostream>
#include<string>
#include<queue>
using namespace  std;
struct Node{
	int x;
	int y;
	string d;
	Node *last;
};
int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		bool board[8][8];
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++)
				board[i][j] = true;
		}
		Node *start = new Node;
		Node *end = new Node;
		start->last=NULL;
		start->x = s1[0]-'a';
		start->y = s1[1]-'1';
		end->x = s2[0]-'a';
		end->y = s2[1]-'1';
		if(start->x==end->x&&start->y==end->y){
			cout<<"0"<<endl;
		}
		else{
			queue<Node *> q;
			q.push(start);
			board[start->x][start->y] = false;
			while(!q.empty()){
				Node *temp = q.front();
				//cout<<temp->x<<","<<temp->y<<endl;
				q.pop();

				if(temp->x-1>=0&&temp->y-1>=0&&board[temp->x-1][temp->y-1]){
					Node *p = new Node;
					p->x = temp->x-1;
					p->y = temp->y-1;
					p->d = "LD";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);
				}
				if(temp->x-1>=0&&temp->y+1<8&&board[temp->x-1][temp->y+1]){
					Node *p = new Node;
					p->x = temp->x-1;
					p->y = temp->y+1;
					p->d = "LU";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);

				}
				if(temp->x+1<8&&temp->y-1>=0&&board[temp->x+1][temp->y-1]){
					Node *p = new Node;
					p->x = temp->x+1;
					p->y = temp->y-1;
					p->d = "RD";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);
				}
				if(temp->x+1<8&&temp->y+1<8&&board[temp->x+1][temp->y+1]){
					Node *p = new Node;
					p->x = temp->x+1;
					p->y = temp->y+1;
					p->d = "RU";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);
				}
				if(temp->x-1>=0&&board[temp->x-1][temp->y]){
					Node *p = new Node;
					p->x = temp->x-1;
					p->y = temp->y;
					p->d = "L";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);
				}
				if(temp->x+1<8&&board[temp->x+1][temp->y]){
					Node *p = new Node;
					p->x = temp->x+1;
					p->y = temp->y;
					p->d = "R";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);

				}
				if(temp->y-1>=0&&board[temp->x][temp->y-1]){
					Node *p = new Node;
					p->x = temp->x;
					p->y = temp->y-1;
					p->d = "D";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);
				}
				if(temp->y+1<8&&board[temp->x][temp->y+1]){
					Node *p = new Node;
					p->x = temp->x;
					p->y = temp->y+1;
					p->d = "U";
					p->last = temp;
					board[p->x][p->y] = false;
					if(p->x==end->x&&p->y==end->y){
						delete end;
						end = p;
						break;
					}
					q.push(p);
				}

			}
			int count=0;
			vector<string> res;
			while(end->last!=NULL){
				count++;
				res.push_back(end->d);
				end = end->last;
			}

			cout<<count<<endl;
			for(int i=res.size()-1;i>=0;i--){
				cout<<res[i]<<endl;
			}

		}
		
	}
	
	return 0;
}