# include<bits/stdc++.h>
using namespace std ;



class Node{
    public: 

    int data ;
    Node * left ;
    Node * right ;

    Node (int d ){
        this->data=d ;
        this->left =NULL ;
        this->right=NULL;
    }


};
Node * insertIntoBst( Node * & root , int d ){

    // base case 
    if(root==NULL){
       root=new Node(d) ;
       return root  ;
    }

    if( d> root->data){
        root->right =insertIntoBst(root->right,d );
    }
    else{
        root->left =insertIntoBst(root->left,d );
    }
    return root ;
}

void Input( Node * & root ){
    int data;
    cin>> data ;
    while( data!=-1){
        insertIntoBst( root,data  );
        cin>> data ;
    }
}
void print ( Node * root){
    if (root==NULL){
        return ;
    }
    // lnr
    print ( root->left);
    cout<< root->data <<" ";
    print ( root->right );

}
int  minVal( Node * root){
    Node * temp =root ;
    if( temp->left!=NULL){
        temp=temp->left ;
    }
    return temp->data ;

}

Node *  deleteFromBSt( Node * root, int val){
    if(root==NULL){
        return root ;
    }
    if( root->data==val){

            if( root->left==NULL && root->right ==NULL){
                delete root ;
                return NULL;
            }

          if( root->left==NULL && root->right !=NULL){
               Node * temp=root->right ;
                delete root ;
                return temp;
            }
             if( root->left!=NULL && root->right ==NULL){
               Node * temp=root->left ;
                delete root ;
                return temp;
            }


            // 2 chilren 
              if( root->left!=NULL && root->right !=NULL){
                int mini = minVal (root->right );
                root->data = mini ;
                    root->right = deleteFromBSt(root->right,mini);
            }


    }
    else if (root->data>val ){
        root->left= deleteFromBSt(root->left,val);
    }
    else{
        root->right=deleteFromBSt(root->right,val);
    }
}



int main(){

Node * root =NULL;

cout<< "enter the data to create the bst "<<endl;

Input(root);

print (root );
    return 0;
}
