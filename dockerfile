FROM gcc:12.2
RUN mkdir /usr/src/code
WORKDIR /usr/src/myapp
COPY ./Lib .
RUN chmod a+x start; chmod a+x run
RUN mv ./run /bin ; mv ./start /bin
RUN echo 'export PS1="\[\e[1;31m\]\u@\h\[ls\e[m\]:\[\e[1;34m\]/\W\[\e[m\]$ "' >> /etc/bash.bashrc
CMD ["cat"]
