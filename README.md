# docker-example
Example of a Docker image with static binaries


Create a Docker image and execute commands as demonstrated below

```
docker build -t name-of-the-image path-to-directory-containing-this-file

docker run name-of-the-image cat
docker run name-of-the-image cat /src/cat/cat.c
```

See, https://hub.docker.com/r/toofast1227/docker-example/
