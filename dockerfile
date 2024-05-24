FROM gcc:12.2
RUN mkdir /usr/src/code
WORKDIR /usr/src/myapp
COPY ./Lib .