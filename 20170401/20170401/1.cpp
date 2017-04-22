//#include<iostream>
//#include<queue>
//using namespace std;
//struct TreeNode{
//	int data;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int d):left(NULL),right(NULL){
//		data = d;
//	}
//};
//TreeNode *createTree(int *a,int *b,int start,int begin,int end){
//	if(begin>end) return NULL;
//	TreeNode *root = new TreeNode(a[start]);
//	int i = begin;
//	for(;i<=end;i++){
//		if(b[i]==a[start])
//			break;
//	}
//	root->left = createTree(a,b,start+1,begin,i-1);
//	root->right = createTree(a,b,start+i-begin+1,i+1,end);
//
//	return root;
//}
//void levelTravese(TreeNode *root){
//	queue<TreeNode *> q;
//	q.push(root);
//	while(!q.empty()){
//		TreeNode *temp = q.front();
//		cout<<temp->data<<" ";
//		q.pop();
//		if(temp->left!=NULL) q.push(temp->left);
//		if(temp->right!=NULL) q.push(temp->right);
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	int *a = new int[n];
//	int *b = new int[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//
//	for(int i=0;i<n;i++){
//		cin>>b[i];
//	}
//
//	TreeNode *root = createTree(a,b,0,0,n-1);
//	
//	levelTravese(root);
//	return 0;
//}