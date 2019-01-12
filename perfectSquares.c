int main() {
    for (int x=2; x < 101; x++){
        
        int root = sqrt(x);
        
        if (root * root == x){
            printf("%d = %d*%d\n", x, root, root);
        }
    }
}