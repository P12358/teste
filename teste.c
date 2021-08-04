void testMinAndMax() { 
    int x = 123; 
    int y = 11; 
    int min; 
    int max; 
 
    minAndMax(x, y, &min, &max); 
    
 
    printf("Min of x and y is: %i.   Max is: %i\n", min, max); 
} 
 
void minAndMax(int a, int b, int* pMin, int* pMax) { 
    if (a < b) { 
        *pMin = a; 
        *pMax = b; 
    } else { 
        *pMin = b; 
        *pMax = a; 
    } 
}
