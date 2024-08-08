FROM gcc:14.1.0

RUN apt-get update \
    && apt-get upgrade -y \
    && apt-get install -y git cmake dos2unix lcov\
    && apt-get clean \
    && cd /opt \
    && git clone https://github.com/google/googletest.git \
    && cd googletest \
    && cmake -DCMAKE_INSTALL_PREFIX=/usr/local . \
    && make -j 2 \
    && make install \
    && cd / \
    && rm -r /opt/googletest

WORKDIR /usr/src/unittest

COPY ./build_run_tests.sh /usr/src/unittest/build_run_tests.sh
RUN dos2unix /usr/src/unittest/build_run_tests.sh
RUN chmod +x /usr/src/unittest/build_run_tests.sh

ENTRYPOINT ["/usr/src/unittest/build_run_tests.sh"]
