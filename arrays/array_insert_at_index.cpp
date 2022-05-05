    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        for(int i = sizeOfArray -2; i >= index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        return;
    }