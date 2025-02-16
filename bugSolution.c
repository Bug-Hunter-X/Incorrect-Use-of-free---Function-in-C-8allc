int main() { 
    int x = 5;
    int *ptr = &x; 
    *ptr = 10; 
    printf("%d\n", x); 
    // Removed the incorrect free(ptr); 
    return 0; 
}