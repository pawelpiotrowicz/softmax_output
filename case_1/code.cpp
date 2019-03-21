
struct __test_global_namespace___reg_op_kernel_softmax_MKLDNN_DEFAULT_TYPE____ {};
static_assert(std::is_same<::__test_global_namespace___reg_op_kernel_softmax_MKLDNN_DEFAULT_TYPE____, __test_global_namespace___reg_op_kernel_softmax_MKLDNN_DEFAULT_TYPE____>::value, "REGISTER_OP_KERNEL must be called in " "global namespace");
static ::paddle::framework::OpKernelRegistrar< ::paddle::platform::CPUPlace, ops::SoftmaxMKLDNNKernel<float> > __op_kernel_registrar_softmax_MKLDNN_DEFAULT_TYPE__( "softmax", "MKLDNN", ::paddle::framework::OpKernelType::kDefaultCustomizedTypeValue);
int TouchOpKernelRegistrar_softmax_MKLDNN_DEFAULT_TYPE()
{
     const char* message = "!!!Softmax::TouchOpKernelRegistrar_softmax_MKLDNN_DEFAULT_TYPE()-NORMAL";
     help::Singleton<help::File>::get("/tmp/softmax_output.txt").getStream() << message  << std::endl;
     std::cout << message << std::endl;

    {
            #define BT_BUF_SIZE 100
           int j, nptrs;
           void *buffer[BT_BUF_SIZE];
           char **strings;

           nptrs = backtrace(buffer, BT_BUF_SIZE);
           help::Singleton<help::File>::get("/tmp/softmax_output.txt").getStream() <<  "backtrace() returned " << nptrs << " addresses" << std::endl; 

           strings = backtrace_symbols(buffer, nptrs);
           if (strings == NULL) {
               help::Singleton<help::File>::get("/tmp/softmax_output.txt").getStream() <<  "Error backtrace" << std::endl; 
           }

           for (j = 0; j < nptrs; j++)
           {
               help::Singleton<help::File>::get("/tmp/softmax_output.txt").getStream() <<  j  << " => " << strings[j] << std::endl; 
           //    printf("%s\n", strings[j]);
           }

           free(strings);


    }



     __op_kernel_registrar_softmax_MKLDNN_DEFAULT_TYPE__ .Touch();
      return 0;
}
   
;

   
struct __test_global_namespace___reg_op_kernel_softmax_grad_MKLDNN_DEFAULT_TYPE____ {};
static_assert(std::is_same<::__test_global_namespace___reg_op_kernel_softmax_grad_MKLDNN_DEFAULT_TYPE____, __test_global_namespace___reg_op_kernel_softmax_grad_MKLDNN_DEFAULT_TYPE____>::value, "REGISTER_OP_KERNEL must be called in " "global namespace");
static ::paddle::framework::OpKernelRegistrar< ::paddle::platform::CPUPlace, ops::SoftmaxMKLDNNGradKernel<float> > __op_kernel_registrar_softmax_grad_MKLDNN_DEFAULT_TYPE__( "softmax_grad", "MKLDNN", ::paddle::framework::OpKernelType::kDefaultCustomizedTypeValue);

int TouchOpKernelRegistrar_softmax_grad_MKLDNN_DEFAULT_TYPE()
{

     const char* message = "!!!Softmax::TouchOpKernelRegistrar_softmax_grad_MKLDNN_DEFAULT_TYPE()-GRAD";
     help::Singleton<help::File>::get("/tmp/softmax_output.txt").getStream() << message  << std::endl;
     std::cout << message << std::endl;
 
     __op_kernel_registrar_softmax_grad_MKLDNN_DEFAULT_TYPE__ .Touch();
      return 0;
}
                                
