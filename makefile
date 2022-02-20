all:
	@echo "start..."
	@python3 ./scripts/select_project.py

.PYONY:clean
clean:
	@echo "start clean.."
	rm -rf ./build