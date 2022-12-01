deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/lixinbao/ysyx-exam/ysyx-exam/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
