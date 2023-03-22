// Copyright 2021 NNTU-CS
int cbinsearch(int* arr, int size, int value) {
  int count = 0, l = 0, r = size / 2;
  while (r - l > 0) {
    if (arr[r - l / 2] > value) {
      r = r - l / 2 - 1;
    } else if (arr[r - l / 2] < value) {
      l = r - l / 2 + 1;
    } else {
      count += 1;
      int cur = r - l / 2 - 1;
      while (cur >= 0) {
        if (arr[cur] == value) {
          count += 1;
        } else {
          break;
        }
        cur -= 1;
      }
      cur = r - l / 2 + 1;
      while (cur >= 0) {
      while (cur < size) {
        if (arr[cur] == value) {
          count += 1;
        } else {
          break;
        }
        cur += 1;
      }
      break;
    }
  }
  return count;
}
