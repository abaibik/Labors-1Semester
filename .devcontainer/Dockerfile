FROM debian:12-slim

RUN apt-get update \
    && </dev/null DEBIAN_FRONTEND=noninteractive \
    apt-get --yes install --no-install-recommends git cmake build-essential gdb clang-format zsh curl ca-certificates \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN chsh -s $(which zsh) \
    && sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"

ADD .zshrc /root/
