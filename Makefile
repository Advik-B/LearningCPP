All:
	@echo "----------Building project:[ WhileLoop - Debug ]----------"
	@cd "WhileLoop" && $(MAKE) /nologo /f  "WhileLoop.mk"
clean:
	@echo "----------Cleaning project:[ WhileLoop - Debug ]----------"
	@cd "WhileLoop" && $(MAKE) /nologo /f  "WhileLoop.mk" clean
.PHONY: clean All

