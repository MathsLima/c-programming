 void swap(int* var1, int* var2) {
            int temp = *var1;  //variavel tem guarda a referencia de var1
            *var1 = *var2;     //variavel 1 guarda a referencia de var2
            *var2 = temp;  //variavel 2 guarda temp, que tinha guardado var1
        }

        int main() {
            int x=10, y=5;
            swap(&x, &y);
            printf("X: %d, Y: %d\n", x, y);
        }