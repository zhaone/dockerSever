cc_library(
    name = "sever",
    srcs = ["sever.cc"],
    hdrs = ["Sever.h"],
    deps = [
        "//proto:Msg.pb",
    ],
)

cc_binary(
    name = "sever_main",
    srcs = ["sever_main.cc"],
    deps = [
        ":sever",
        "//proto:Msg.pb",
        "@protobuf//:protobufLib",
    ],
    linkopts = ["-pthread"],
)
