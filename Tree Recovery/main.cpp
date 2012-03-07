#include <iostream>
#include <string>

using namespace std;

void postorder(string preorder,string inorder)
{
	if(preorder.length()==0){
		return;
	}
	char c = preorder[0];
	string::size_type p = inorder.find(c);
	int l = preorder.length()-p-1;
	postorder(preorder.substr(1,p),inorder.substr(0,p));
	postorder(preorder.substr(p+1,l),inorder.substr(p+1,l));
	cout << c;
}

int main()
{
	string preorder,inorder;
	while(cin >> preorder >> inorder){
		postorder(preorder,inorder);
		cout << endl;
	}
	return 0;
}