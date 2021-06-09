# Copyright 2019 Alibaba Inc.  All rights reserved
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

workspace(name = "com_alibaba_sentinel")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_libtbb",
    build_file = "//bazel:tbb.BUILD",
    strip_prefix = "oneTBB-2020.3",
    urls = ["https://github.com/oneapi-src/oneTBB/archive/v2020.3.tar.gz"],
    sha256 = "ebc4f6aa47972daed1f7bf71d100ae5bf6931c2e3144cf299c8cc7d041dca2f3",
)

http_archive(
    name = "com_github_libtbb_osx",
    build_file = "//bazel:osx.tbb.BUILD",
    strip_prefix = "oneTBB-2020.3",
    urls = ["https://github.com/oneapi-src/oneTBB/archive/v2020.3.tar.gz"],
    sha256 = "ebc4f6aa47972daed1f7bf71d100ae5bf6931c2e3144cf299c8cc7d041dca2f3",
)

http_archive(
    name = "com_github_fmtlib_fmt",
    sha256 = "4c0741e10183f75d7d6f730b8708a99b329b2f942dad5a9da3385ab92bb4a15c",
    strip_prefix = "fmt-5.3.0",
    urls = ["https://github.com/fmtlib/fmt/releases/download/5.3.0/fmt-5.3.0.zip"],
    build_file = "//bazel:fmtlib.BUILD",
)

http_archive(
    name = "com_github_gabime_spdlog",
    build_file = "//bazel:spdlog.BUILD",
    sha256 = "160845266e94db1d4922ef755637f6901266731c4cb3b30b45bf41efa0e6ab70",
    strip_prefix = "spdlog-1.3.1",
    urls = ["https://github.com/gabime/spdlog/archive/v1.3.1.tar.gz"],
)

# Rule repository
http_archive(
   name = "rules_foreign_cc",
   strip_prefix = "rules_foreign_cc-master",
   url = "https://github.com/bazelbuild/rules_foreign_cc/archive/master.zip",
)

load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

# abseil-cpp
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/refs/tags/20210324.2.tar.gz"],
  strip_prefix = "abseil-cpp-20210324.2",
  sha256 = "59b862f50e710277f8ede96f083a5bb8d7c9595376146838b9580be90374ee1f",
)

# Google Test
http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/8b6d3f9c4a774bef3081195d422993323b6bb2e0.zip"],  # 2019-03-05
  strip_prefix = "googletest-8b6d3f9c4a774bef3081195d422993323b6bb2e0",
  sha256 = "d21ba93d7f193a9a0ab80b96e8890d520b25704a6fac976fe9da81fffb3392e3",
)

# Google Benchmark
http_archive(
  name = "com_google_benchmark",
  urls = ["https://github.com/google/benchmark/archive/505be96ab23056580a3a2315abba048f4428b04e.tar.gz"],
  strip_prefix = "benchmark-505be96ab23056580a3a2315abba048f4428b04e",
  sha256 = "0de43b6eaddd356f1d6cd164f73f37faf2f6c96fd684e1f7ea543ce49c1d144e",
)
