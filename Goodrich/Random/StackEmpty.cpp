class StackEmpty: public RuntimeException {
public:
	StackEmpty(const string& err) : RuntimeException(err) {}
};
