int persistence(int n){
    if(n / 10 == 0)
        return 0;

    int i = 0;
    int temp = 1;
    while (n){
        temp *= (n%10);
        if(n / 10 == 0){
            i++;
            if(temp / 10 == 0){
                return i;
            }
            else{
                n = temp;
                temp = 1;
                continue;
            }
        }
        else{
            n /= 10;
        }
    }
    return 0; // )))
}
