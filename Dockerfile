FROM ubuntu:latest

RUN apt-get update && apt-get install -y --no-install-recommends build-essential \
		cmake \
		git \
		curl

RUN apt-get -y update && apt-get install -y g++ gcc gfortran libopenblas-dev ca-certificates

RUN curl -o ~/miniconda.sh -O  https://repo.continuum.io/miniconda/Miniconda3-4.2.12-Linux-x86_64.sh  && \
     chmod +x ~/miniconda.sh && \
     ~/miniconda.sh -b -p /opt/conda

RUN rm ~/miniconda.sh

RUN /opt/conda/bin/conda install conda-build && \
    /opt/conda/bin/conda create -y --name pytorch python=3.6.1 numpy pyyaml scipy ipython mkl&& \
    /opt/conda/bin/conda clean -ya

ENV PATH /opt/conda/envs/pytorch/bin:$PATH

RUN mkdir /data
WORKDIR /tmp


RUN git clone https://github.com/pytorch/pytorch.git
WORKDIR /tmp/pytorch
RUN git submodule update --init 

WORKDIR /tmp/data

RUN mkdir build
WORKDIR /tmp/pytorch/build
RUN cmake .. -DCMAKE_INSTALL_PREFIX=/usr/bin # specify your dest directory
RUN cmake .. -DUSE_CUDA=OFF  # for CPU only machines
RUN make install

RUN useradd -ms /bin/bash anh
