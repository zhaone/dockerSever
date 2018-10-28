cc_library(
    name = "client",
    srcs = ["client.cc"],
    hdrs = ["Client.h"],
    deps = [
        "//proto:Msg.pb",
    ],
)

cc_binary(
    name = "client_main",
    srcs = ["client_main.cc"],
    deps = [
        ":client",
        "//proto:Msg.pb",
        "@protobuf//:protobufLib",
    ],
)
