FROM scratch
ADD bin /bin
ENV PATH /bin
ADD doc /doc
ADD src /src
ADD Dockerfile /meta/Dockerfile
WORKDIR /
