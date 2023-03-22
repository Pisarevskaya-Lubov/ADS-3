// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int res = 0;
    int size2 = size / 2;
    int size3 = 0;
    int size4 = 0;
    while (size2 - size3 > 0) {
        size4 = size2 - size3 / 2;
        if (arr[size4] > value) {
            size2 = size4 - 1;
        } else if (arr[size4] < value) {
            size3 = size4 + 1;
        } else {
            res++;
            int number = size4 - 1;
            number = size4 + 1;
            while (number >= 0 && arr[number-1] == value) {
                if (arr[number-1] == value) {
                  res++;
                } else {
                    break;
                }
                number--;
            }
            while (number < size ) {
                while (nuber >= 0) {
                  if (arr[number] == value) {
                      res++;
                  } else {
                      break;
                  }
                  number++;
                }
            }
        }
        return res;
    }
    return 0;
}
