.PHONY: clean All

All:
	@echo "----------Building project:[ IGP2 - Release ]----------"
	@"$(MAKE)" -f  "IGP2.mk"
clean:
	@echo "----------Cleaning project:[ IGP2 - Release ]----------"
	@"$(MAKE)" -f  "IGP2.mk" clean
