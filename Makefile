All:
	@echo "----------Building project:[ WhileLoop3 - Debug ]----------"
	@cd "WhileLoop3" && $(MAKE) /nologo /f  "WhileLoop3.mk"
clean:
	@echo "----------Cleaning project:[ WhileLoop3 - Debug ]----------"
	@cd "WhileLoop3" && $(MAKE) /nologo /f  "WhileLoop3.mk" clean
.PHONY: clean All

