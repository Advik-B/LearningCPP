All:
	@echo "----------Building project:[ InputValidationUsingWhileLoop - Debug ]----------"
	@cd "InputValidationUsingWhileLoop" && $(MAKE) /nologo /f  "InputValidationUsingWhileLoop.mk"
clean:
	@echo "----------Cleaning project:[ InputValidationUsingWhileLoop - Debug ]----------"
	@cd "InputValidationUsingWhileLoop" && $(MAKE) /nologo /f  "InputValidationUsingWhileLoop.mk" clean
.PHONY: clean All

