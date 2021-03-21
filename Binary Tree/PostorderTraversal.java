class Node{
    int data;
    Node left;
    Node right;
    Node(int val){
        data = val;
        left = null;
        right = null;
    }
}
public class PostorderTraversal{
    Node root;
    PostorderTraversal(){
        root = null;
    }
    public void postorderTraversal(Node node){
        if(node != null){
            postorderTraversal(node.left);
            postorderTraversal(node.right);
            System.out.print(node.data+" ");
        }
    }
    public static void main(String args[]){
        PostorderTraversal pst = new PostorderTraversal();
        pst.root = new Node(1); 
        pst.root.left = new Node(2); 
        pst.root.right = new Node(3); 
        pst.root.left.left = new Node(4); 
        pst.root.left.right = new Node(5);
        pst.root.right.left = new Node(6);
        pst.root.right.right = new Node(7);

        System.out.println("postorder traversal of binary tree is:");
        pst.postorderTraversal(pst.root);

    }
}