All:
	@echo "----------Building project:[ RangeBased-Assignment - Debug ]----------"
	@cd "RangeBased-Assignment" && $(MAKE) /nologo /f  "RangeBased-Assignment.mk"
clean:
	@echo "----------Cleaning project:[ RangeBased-Assignment - Debug ]----------"
	@cd "RangeBased-Assignment" && $(MAKE) /nologo /f  "RangeBased-Assignment.mk" clean
.PHONY: clean All

