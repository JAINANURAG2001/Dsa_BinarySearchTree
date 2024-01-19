// #include <bits/stdc++.h> 

 
//     using namespace std ;

//     class BinaryTreeNode 
//     {
//     public : 
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// // void  inorder( BinaryTreeNode<int> *root,vector<int> & ans){
//     if( root==NULL){
//         return ;
//     }
//     inorder( root->left,ans );
//     ans.push_back(root->data);
//      inorder( root->right,ans );

// }

// bool search(vector<int> & arr ){
    
//     for (int i=0;i<arr.size()-1;i++){
//         if(arr[i]>arr[i+1]){
//             return false ;
//         }
//     }
//     return true ;
// }


// bool isBst(BinaryTreeNode<int> *root,int min , int max){
//     if(root==NULL){
//         return true ;
//     }
//     if( root->data>min && root->data<max){
//         bool left = isBst(root->left , min , root->data);
//         bool right = isBst(root->right , root->data,max);

//         return left && right ;
//     }
//     return false;
// }

// bool validateBST(BinaryTreeNode<int> *root) {
//     // Write your code here
   
// return isBst( root, INT_MIN,INT_MAX);

// }