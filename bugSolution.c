int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifying the value through the pointer
  printf("%d", x); // Output: 20

  int y = 30; 
  ptr = NULL; // Resetting the pointer to NULL after it's no longer needed
  ptr = &y; // Now the pointer points to y
  *ptr = 40; // Modifying the value through the pointer
  printf("%d", x); //Output: 20
  printf("%d", y); // Output: 40
  free(ptr); //This is important if the memory was dynamically allocated, to prevent memory leaks

  return 0; 
}