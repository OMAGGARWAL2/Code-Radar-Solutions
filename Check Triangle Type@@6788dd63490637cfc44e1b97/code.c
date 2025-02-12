int main(){
    int m, n, o;
    scanf("%d %d %d", &m, &n, &o);
    
    // Check if the input forms a valid triangle
    if (m + n > o && n + o > m && m + o > n) {
        if (m == n && n == o) {  // Corrected condition
            printf("Equilateral\n");
        } else if (m == n || n == o || m == o) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    } else {
        printf("Not a Triangle\n");
    }

    return 0;
}