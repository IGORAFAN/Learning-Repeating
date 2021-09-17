#
# Build environment.
#

# Base image.
FROM registry.instacoins.com/docker-images/development/builders/ic-be-builder:latest as testRegex
# FROM registry.instacoins.com/instacoins/backend-builder:latest as testRegex

RUN sudo apt-get install libstdc++6

# Bundle app sources.
COPY . ./

RUN chmod +x ./buildDebug.sh

# Build app linking it to breakpad library.
RUN ./buildDebug.sh 
