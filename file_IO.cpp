#include <stdio.h>

int main() {
    //Declaring the file pointer
    FILE *fp;

    //Declaring err
    errno_t err;

    //To open file in write mode
    err = fopen_s(&fp, "example.txt", "w");
    if (err != 0) 
    {
        perror("Error opening the file");
        return err;
    }


    //Write to file
    fprintf(fp, "Hello World\n");
    fprintf(fp, "File I/O in C, easier than in Python\n");
    
    //Close the file
    fclose(fp);


    //Open file in read mode
    err = fopen_s(&fp, "example.txt", "r");
    if (err != 0) 
    {
        perror("Error opening the file");
        return err;
    }


    // Move file pointer to 128th byte from the beginning
    if (fseek(fp, 7, SEEK_SET) != 0) //You could use also SEEK_CUR SEEK_END 
    {
        perror("Error seeking in the file");
        fclose(fp);
        return 1;
    }

    //Read and print each line from the file
    char line[100];
    while (fgets(line, sizeof(line), fp)) 
    {
        printf("%s", line); // Print each line
    }
    
    // Close the file
    fclose(fp);


    //Data to write
    int numbers[5] = {1, 2, 3, 4, 5};

    //Open file in Write binary mode
    err = fopen_s(&fp, "data.bin", "wb");
    if (err != 0) {
        perror("Error opening the file");
        return err;
    }
    
    fwrite(numbers, sizeof(int), 5, fp);
    
    fclose(fp);

    //Read data back
    int buffer[5];
    err = fopen_s(&fp, "data.bin", "rb");
    if (err != 0) {
        perror("Error opening the file");
        return err;
    }
    fread(buffer, sizeof(int), 5, fp);
    fclose(fp);

    // Print the read data
    for (int i = 0; i < 5; i++) {
        printf("Number read in binary: %d\n", buffer[i]);
    }     



    return 0;
}
