FROM aflplusplus/aflplusplus
ARG USER=user
ENV DEBIAN_FRONTEND=noninteractive

# general C++ dev tools
RUN apt update -y && apt install -y \
    sudo\
    make\
    git\
    build-essential\
    cmake \
    ninja-build \
    ccache \
    gdb \
    gdbserver \
    clangd \
    python3 \
    locales \
    udev

# esp-idf specifc
RUN apt update -y && apt install -y \
    wget \
    flex \
    bison \
    gperf \
    python3 \
    python3-pip \
    python3-venv \
    cmake \
    ninja-build \
    ccache \
    libffi-dev \
    libssl-dev \
    dfu-util \
    libusb-1.0-0

# esp QEMU support
RUN apt update -y && apt install -y \ 
    libgcrypt20 \
    libglib2.0-0 \
    libpixman-1-0 \
    libsdl2-2.0-0 \
    libslirp0

RUN locale-gen en_US.UTF-8 && update-locale

RUN useradd -m $USER && echo "$USER:$USER" | chpasswd && adduser $USER sudo
RUN echo "user            ALL = (ALL) NOPASSWD: ALL" >> /etc/sudoers
CMD /bin/bash