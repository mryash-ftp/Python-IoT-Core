# Reading File Handling In  Python ---
with open("data_file.txt","a") as f:
  for i in range(1,11):
    f.write(str(i)+"\n") # Saving Data In File Numbers From 1-10

