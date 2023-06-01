class A {
  private:
    int priv_a;
  public:
    int pub_a;
  protected:
    int prot_a;
};

class B : protected A {
};

class C : public B {
  public:
    void test_c() {
      pub_a;
    }
}





