/*----------------------------------*/
/* 3-band resistor value calculator */
/*                                  */
/*  Author Mateusz Grotha           */
/*----------------------------------*/
//requires stdio.h, stdlib.h, string.h, ctype.h

int colorCodes(char s1[10], char s2[10], char s3[10]) {
  int v1, v2, v3, result;
  char *v4;

  for(int i = 0; s1[i]; i++){
    s1[i] = tolower(s1[i]);
  }
  for(int i = 0; s2[i]; i++){
    s2[i] = tolower(s2[i]);
  }
  for(int i = 0; s3[i]; i++){
    s3[i] = tolower(s3[i]);
  }

  if (strcmp(s1, "black") == 0) {
    v1 = 0;
  } else if (strcmp(s1, "brown") == 0) {
    v1 = 1;
  } else if (strcmp(s1, "red") == 0) {
    v1 = 2;
  } else if (strcmp(s1, "orange") == 0) {
    v1 = 3;
  } else if (strcmp(s1, "yellow") == 0) {
    v1 = 4;
  } else if (strcmp(s1, "green") == 0) {
    v1 = 5;
  } else if (strcmp(s1, "blue") == 0) {
    v1 = 6;
  } else if (strcmp(s1, "purple") == 0) {
    v1 = 7;
  } else if (strcmp(s1, "grey") == 0) {
    v1 = 8;
  } else if (strcmp(s1, "white") == 0) {
    v1 = 9;
  } else {
    printf("Wrong input one %s\n", s1);
    exit(0);
  }

  if (strcmp(s2, "black") == 0) {
    v2 = 0;
  } else if (strcmp(s2, "brown") == 0) {
    v2 = 1;
  } else if (strcmp(s2, "red") == 0) {
    v2 = 2;
  } else if (strcmp(s2, "orange") == 0) {
    v2 = 3;
  } else if (strcmp(s2, "yellow") == 0) {
    v2 = 4;
  } else if (strcmp(s2, "green") == 0) {
    v2 = 5;
  } else if (strcmp(s2, "blue") == 0) {
    v2 = 6;
  } else if (strcmp(s2, "purple") == 0) {
    v2 = 7;
  } else if (strcmp(s2, "grey") == 0) {
    v2 = 8;
  } else if (strcmp(s2, "white") == 0) {
    v2 = 9;
  } else {
    printf("Wrong input two %s\n", s2);
    return 0;
  }

  if (strcmp(s3, "black") == 0) {
    v3 = 1;
    v4 = "Ohm";
  } else if (strcmp(s3, "brown") == 0) {
    v3 = 10;
    v4 = "Ohm";
  } else if (strcmp(s3, "red") == 0) {
    v3 = 100;
    v4 = "Ohm";
  } else if (strcmp(s3, "orange") == 0) {
    v3 = 1;
    v4 = "kOhm";
  } else if (strcmp(s3, "yellow") == 0) {
    v3 = 10;
    v4 = "kOhm";
  } else if (strcmp(s3, "green") == 0) {
    v3 = 100;
    v4 = "kOhm";
  } else if (strcmp(s3, "blue") == 0) {
    v3 = 1;
    v4 = "MOhm";
  } else if (strcmp(s3, "purple") == 0) {
    v3 = 10;
    v4 = "MOhm";
  } else if (strcmp(s3, "grey") == 0) {
    v3 = 100;
    v4 = "MOhm";
  } else if (strcmp(s3, "white") == 0) {
    v3 = 1;
    v4 = "GOhm";
  } else if (strcmp(s3, "gold") == 0) {
    v3 = 0.1;
    v4 = "Ohm";
  } else if (strcmp(s3, "silver") == 0) {
    v3 = 0.01;
    v4 = "Ohm";
  } else {
    printf("Wrong input three %s\n", s3);
    exit(0);
  }

  result = (v1 * 10 + v2) * v3;
  printf("Resistor value is: %d",  result);
  printf("%s\n", v4);

  return(result);
}
