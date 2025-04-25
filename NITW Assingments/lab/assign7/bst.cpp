#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Node{
 public:
  string value;
  Node* left;
  Node* right;
     Node(string data){
       value = data;
       left = right = NULL;
     }
};

Node* insert(Node* root , string word){
  if(root==NULL)
     return new Node(word);
 
  if(word < root->value){
     root->left = insert(root->left,word);
  }
  if(word > root->value){
     root->right = insert(root->right,word);
  }
  
  return root;
}

 void preorder(Node* root , vector<string> &pre){
     if(root==NULL)
         return;
     
     pre.push_back(root->value);
     preorder(root->left,pre);
     preorder(root->right,pre);
     
     return;
 }
 
  void inorder(Node* root , vector<string> &in){
     if(root==NULL)
         return;
     
     inorder(root->left,in);
     in.push_back(root->value);
     inorder(root->right,in);
     
     return;
 }
 
  void postorder(Node* root , vector<string> &post){
     if(root==NULL)
         return;
     
     postorder(root->left,post);
     postorder(root->right,post);
     post.push_back(root->value);
     
     return;
 }
 
 void print(vector<string> arr){
   for(string val : arr)
      cout<<val<<" ";
      
   cout<<endl<<endl;
   
 }
 
int main(){
 ifstream file;
 file.open("file.txt");
 
 string line;
 vector<string>data;
 
 while(getline(file,line)){
   string word = "";
   
      for(int i = 0;i<line.length();i++){
         if(line[i]!=' ' )
            word+=line[i];
         else{
            data.push_back(word);
            word = "";
         }
      }
      
      if (!word.empty()) {
         data.push_back(word);
      }
  }
  
  cout<<"Before removing duplicates : ";
  print(data);

 // remove duplicates but actually not needed as insert function is ignoring repeteated values
 
 map<string,bool> track;
 for(int i = 0;i<data.size();i++)
    track[data[i]] = false;
    
  vector<string>temp;
  for(int i = 0;i<data.size();i++){
     if(track[data[i]] == false){
         temp.push_back(data[i]);
         track[data[i]] = true;
     }
  }
  
  data = temp;
  
  cout<<"After removing duplicates : ";
  print(data); 
  
  Node* root = NULL;
  for(string val : data)
     root = insert(root,val);
  
  vector<string>pre;
  preorder(root,pre);
  vector<string>in;
  inorder(root,in);
  vector<string>post;
  postorder(root,post);
 
  cout<<"Pre-oreder traversal : ";
  print(pre);
  cout<<"In-order traversal : ";
  print(in);
  cout<<"Post-order traversal : ";
  print(post);
 
 //cout<<root->value;
 file.close();
  return 0 ;
}
