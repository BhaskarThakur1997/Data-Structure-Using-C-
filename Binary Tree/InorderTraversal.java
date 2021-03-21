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
public class InorderTraversal{
    Node root;
    InorderTraversal(){
        root = null;
    }
    public void inorderTraversal(Node node){
        if(node != null){
            inorderTraversal(node.left);
            System.out.print(node.data+" ");
            inorderTraversal(node.right);
        }
    }
    public static void main(String args[]){
        InorderTraversal it = new InorderTraversal();
        it.root = new Node(1);
        it.root.left = new Node(2); 
        it.root.right = new Node(3); 
        it.root.left.left = new Node(4); 
        it.root.left.right = new Node(5);
        it.root.right.left = new Node(6);
        it.root.right.right = new Node(7); 

        System.out.println("inorder traversal of binary tree is:");
        it.inorderTraversal(it.root);
    }
}