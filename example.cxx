namespace MyCoolProject {
  struct test_results {
    enum status {
      ok,
      fail,
      error
    };
    void update(
      const char * test_name,
      status result );
  };
}
