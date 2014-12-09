.PHONY: clean All

All:
	@echo "----------Building project:[ datastructures - Debug ]----------"
	@$(MAKE) -f  "datastructures.mk"
clean:
	@echo "----------Cleaning project:[ datastructures - Debug ]----------"
	@$(MAKE) -f  "datastructures.mk" clean
