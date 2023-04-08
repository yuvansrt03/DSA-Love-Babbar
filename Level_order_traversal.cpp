class Solution
{
    public:
    vector<int> levelOrder(Node* root)
    {
      vector<int>v;
      queue<Node*>q;
      q.push(root);
      
      while(!q.empty()){
          Node* temp=q.front();
          q.pop();
          v.push_back(temp->data);
          
          if(temp->left)q.push(temp->left);
          if(temp->right)q.push(temp->right);
      }
      return v;
    }
};
