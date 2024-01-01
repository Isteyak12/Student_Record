FROM gcc:latest
WORKDIR /app
COPY . /app

RUN g++ -o file1 main.cpp
RUN g++ -o file2 linklist.cpp

RUN echo '#!/bin/bash\n./file1\n./file2' > run_files.sh
RUN chmod +x run_files.sh

CMD ["./run_files.sh"]

# only last cmd is run during docker run

# 
