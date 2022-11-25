deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/ysyx/exam-test/ysyx-lxb/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
