 for (int i = 0; i < size - 1; i++)
    {
        int temp = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[temp])
            {
                swap(arr[j], arr[temp]);
            }
        }
    }