All:
	@echo "----------Building project:[ WhileLoop2 - Debug ]----------"
	@cd "WhileLoop2" && $(MAKE) /nologo /f  "WhileLoop2.mk"
clean:
	@echo "----------Cleaning project:[ WhileLoop2 - Debug ]----------"
	@cd "WhileLoop2" && $(MAKE) /nologo /f  "WhileLoop2.mk" clean
.PHONY: clean All

