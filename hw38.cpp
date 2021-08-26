//影片P141、142
//多態案例 : 電腦組裝

#include <iostream>
using namespace std;

//抽象不同零件類
class CPU{
public:
    virtual void cal() = 0;
};

class GPU{
public:
    virtual void display() = 0;
};

class MEM{
public:
    virtual void storage() = 0;
};

//組裝電腦
class computer{
public:
    computer(CPU *cpu, GPU *gpu, MEM *mem):m_cpu(cpu), m_gpu(gpu), m_mem(mem){}

    //使用公共接口，讓零件工作起來
    //父類(抽象類)的指針在調用接口的時候，因為傳入是子類的對象
    void work(){
        m_cpu->cal();
        m_gpu->display();
        m_mem->storage();
    }

    ~computer(){ //提供析構函數 釋放3個電腦零件
        if(m_cpu != NULL){
            delete m_cpu;
            m_cpu = NULL;
        }
        
        if(m_gpu != NULL){
            delete m_gpu;
            m_gpu = NULL;
        }
        
        if(m_mem != NULL){
            delete m_mem;
            m_mem = NULL;
        }
    }

private:
    CPU *m_cpu;
    GPU *m_gpu;
    MEM *m_mem;
};

//具體intel實現
class intel_CPU :public CPU{
public:
    virtual void cal(){
        cout << "intel CPU is calculating" << endl;
    }
};

class intel_GPU :public GPU{
public:
    virtual void display(){
        cout << "intel CPU is displaying" << endl;
    }
};

class intel_MEM :public MEM{
public:
    virtual void storage(){
        cout << "intel CPU is storaging" << endl;
    }
};

//具體amd實現
class amd_CPU :public CPU{
public:
    virtual void cal(){
        cout << "amd CPU is calculating" << endl;
    }
};

class amd_GPU :public GPU{
public:
    virtual void display(){
        cout << "amd CPU is displaying" << endl;
    }
};

class amd_MEM :public MEM{
public:
    virtual void storage(){
        cout << "amd CPU is storaging" << endl;
    }
};

void test01(){
    cout << "第1台電腦:" << endl;
    CPU *intel_c = new intel_CPU;
    GPU *intel_g = new intel_GPU;
    MEM *intel_m = new intel_MEM;

    computer *c = new computer(intel_c, intel_g, intel_m);
    c->work();
    delete c;

    cout << "第2台電腦:" << endl;
    computer *c2 = new computer(new amd_CPU, new amd_GPU, new amd_MEM);
    c2->work();
    delete c2;

    cout << "第3台電腦:" << endl;
    computer *c3 = new computer(new amd_CPU, new intel_GPU, new amd_MEM);
    c3->work();
    delete c3;
}


int main(){
    test01();
    return 0;
}