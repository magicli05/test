//
//  Singleton.h
//  ball
//
//  Created by li jialiang on 8/26/14.
//
//

#ifndef ball_Singleton_h
#define ball_Singleton_h

template <typename SingletonType>
class Singleton
{
private:
    Singleton<SingletonType>():instance(nullptr) {}
    
    Singleton<SingletonType>(Singleton<SingletonType>&) = delete;
    Singleton<SingletonType>& operator=(Singleton<SingletonType>&) = delete;
public:
    /// Global access point to the Singleton.
    static SingletonType& shareInstance(void)
    {
        Singleton<SingletonType>& singleton = Singleton<SingletonType>::instance_self();
        if (singleton.instance == nullptr)
        {
            singleton.instance = new SingletonType;
        }
        return *singleton.instance;
    }
    
    
    /// Explicitly delete the Singleton instance.
//    static void close()
//    {
//        Singleton<SingletonType>& singleton = Singleton<SingletonType>::instance_self();
//        if (singleton.instance)
//        {
//            delete singleton.instance;
//        }
//    }
    
    virtual ~Singleton<SingletonType>()
    {
        Singleton<SingletonType>& singleton = Singleton<SingletonType>::instance_self();
        if (singleton.instance)
        {
            delete singleton.instance;
        }
    }
    
protected:
    /// Contained instance.
    SingletonType* instance;

    /// Get pointer to the Singleton instance.
    static Singleton<SingletonType> &instance_self (void)
    {
        static Singleton<SingletonType> _singleton;
        return _singleton;
    }

};

#endif
