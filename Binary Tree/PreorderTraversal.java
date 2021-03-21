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
public class PreorderTraversal{
    static Node root;
    PreorderTraversal(){
        root = null;
    }
    public void preorderTraversal(Node node){
        if(node != null){
            System.out.print(node.data+" ");
            preorderTraversal(node.left);
            preorderTraversal(node.right);
        }
    }
    public static void main(String args[]){
        PreorderTraversal pt = new PreorderTraversal();
        pt.root = new Node(1); 
        pt.root.left = new Node(2); 
        pt.root.right = new Node(3); 
        pt.root.left.left = new Node(4); 
        pt.root.left.right = new Node(5);
        pt.root.right.left = new Node(6);
        pt.root.right.right = new Node(7);

        System.out.println("preorder traversal of binary tree is:");
        pt.preorderTraversal(root);
    }
}
