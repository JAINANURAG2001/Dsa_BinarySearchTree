// #include <bits/stdc++.h> 
// /*************************************************************
 
//     Following is the Binary Tree node structure

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
// // 
// *************************************************************/
//  void  inorder( BinaryTreeNode<int> *root,vector<int> & ans){
//      if( root==NULL){
//          return ;
//      }
//      inorder( root->left,ans );
   

//      ans.push_back(root->data);
   
//     inorder( root->right,ans );

//  }

// int kthSmallest(BinaryTreeNode<int>* root, int k) {
//     // Write your code here.
//     vector<int> ans ;

//     if(root==NULL){
//         return -1;
//     }

//     inorder(root,ans);

//     if(ans.size()>=k){

//     return ans[k-1];
//     }
//     else{
//         return -1;
//     }


    
// }