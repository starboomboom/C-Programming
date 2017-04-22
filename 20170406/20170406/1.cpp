//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	char board[3][3];
//	while(cin>>board[0][0]>>board[0][1]>>board[0][2]){
//
//	for(int i=1;i<3;i++){
//		for(int j=0;j<3;j++){
//			cin>>board[i][j];
//		}
//	}
//	int count[2]={0};
//	int full = 0;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			if(board[i][j]=='X'){
//				count[0]++;
//				full++;
//			}
//
//			if(board[i][j]=='0'){
//				count[1]++;
//				full++;
//			}
//		}
//	}
//	if(count[0]<count[1]) cout<<'x'<<endl;
//	else{
//		//ÐÐ
//		bool flag = false;
//		for(int i=0;i<3;i++){
//			if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
//				if(board[i][0]=='X'){
//					cout<<"1 won"<<endl;
//					flag = true;
//					break;
//				}
//				if(board[i][0]=='0'){
//					cout<<"2 won"<<endl;
//					flag = true;
//					break;
//				}
//			}
//		}
//
//		if(!flag){
//			for(int j=0;j<3;j++){
//				if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]){
//					if(board[0][j]=='X'){
//						cout<<"1 won"<<endl;
//						flag = true;
//						break;
//					}
//					if(board[0][j]=='0'){
//						cout<<"2 won"<<endl;
//						flag = true;
//						break;
//					}
//				}
//			}
//		}
//		if(!flag){
//			if(board[0][0]==board[1][1]==board[2][2]){
//				if(board[0][0]=='X'){
//					cout<<"1 won"<<endl;
//					flag = true;
//				}
//				if(board[0][0]=='0'){
//					cout<<"2 won"<<endl;
//					flag = true;
//				}
//			}
//			if(board[0][2]==board[1][1]==board[2][0]){
//				if(board[0][2]=='X'){
//					cout<<"1 won"<<endl;
//					flag = true;
//				}
//				if(board[0][2]=='0'){
//					cout<<"2 won"<<endl;
//					flag = true;
//				}
//			}
//		}
//
//		if(!flag){
//			if(full==9) cout<<"draw"<<endl;
//			else{
//				if(count[0]==count[1]||count[1]-count[0]==1){
//					cout<<"1"<<endl;
//				}
//				else if(count[0]-count[1]==1){
//					cout<<"2"<<endl;
//				}
//			}
//
//		}
//	}
//	}
//	return 0;
//}