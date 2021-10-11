int main(void)
{
int a, b, c;

    printf("Donner la valeur de a\n");
    scanf("%i", &a);
    printf("Donnez la valeur de b\n");
    scanf("%i", &b);
    printf("Donnez la valeur de c\n");
    scanf("%i", &c);

    if(a > c && a > b)
    {
      printf("A est le plus grand");
    }
    else if(b > c && b > a)
    {
      printf("B est le plus grand");
    }
    else if(c > b && c > a)
    {
      printf("C est le plus grand");
    }
    else
    {
      printf("ils sont tous égaux (/O_O)/");
    }
}
