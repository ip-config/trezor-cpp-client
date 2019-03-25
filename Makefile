JOBS = 4
MAKE = make -j $(JOBS)
SCONS = scons -j $(JOBS)

build:
	$(SCONS) #CPPFLAGS=$(CXXFLAGS)

vendor-rebuild:
	git submodule update --init --recursive --force

generate:
	protoc -I vendor/trezor-common/protob/ --cpp_out=src/messages/ vendor/trezor-common/protob/*.proto
