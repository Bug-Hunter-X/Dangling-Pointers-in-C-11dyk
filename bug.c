int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifying the value through the pointer
  printf("%d", x); // Output: 20

  int y = 30;
  ptr = &y; // Now the pointer points to y
  *ptr = 40; // Modifying the value through the pointer
  printf("%d", x); //Output: 20
  printf("%d", y); // Output: 40
  return 0; 
}