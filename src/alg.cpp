// Copyright 2021 NNTU-CS

void bubblSort(int* arr, int size) {
  int basket = 0;
  for (int j = 0; j < size - 1; j++) {
    for (int i = 0; i < size - j - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        basket = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = basket;
      }
    }
  }
}

int cbinsearch(int* arr, int size, int value) {
  int res = 0;
  int number = 0;
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    int midl = left + (right - left) / 2;
    if (value == arr[midl]) {
      number = midl;
      break;
    } else if (value > arr[midl]) {
      left = midl;
    } else if (value < arr[midl]) {
      right = midl;
    } else {
      return 1000;
    }
  }
  n = number;
  while (arr[n] == value) {
    res++;
    n++;
  }
  if (number > 0) {
    while (arr[number-1] == value) {
      res++;
      number--;
    }
  }
  return res;
}

