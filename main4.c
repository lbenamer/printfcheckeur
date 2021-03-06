#include "libft.h"
#include <locale.h>

int main(void)
{
	char *locale;
    locale = setlocale(LC_ALL, "");
	printf("ok alors %d\n", 9876);
	printf("ok alors %-d\n", 9876);
	printf("ok alors %+d\n", 9876);
	printf("ok alors % d\n", 9876);
	printf("ok alors %0d\n", 9876);
	printf("ok alors %+0d\n", 9876);
	printf("ok alors % +d\n", 9876);
	printf("ok alors % -d\n", 9876);
	printf("ok alors %  -+d\n", 9876);
	printf("ok alors % 0d\n", 9876);  
	printf("ok alors % -0d\n", 9876);
	printf("ok alors % -+0d\n", 9876);
	printf("ok alors %-0d\n", 9876);
	printf("ok alors %+-d\n", 9876);
	printf("ok alors %+-0d\n", 9876);
	printf("ok alors %0-+2d\n", 9876);
	printf("ok alors %- 05d\n", 9876);
	printf("ok alors %+00d\n", 9876);
	printf("ok alors %+++--++-   7d\n", 9876);
	printf("ok alors % +023d\n", 9876);
	printf("ok alors %+-+0 d\n", 9876);
	printf("ok alors %0+4d\n", 9876);
	printf("ok alors %-010d\n", 9876);
	printf("ok alors %+010.5d\n", 9876);
	printf("ok alors %-010.5d\n", 9876);
	printf("ok alors % 010.5d\n", 9876);
	printf("ok alors %+10.5d\n", 9876);
	printf("ok alors %+010.3d\n", 9876);
	printf("ok alors %+ 010.5d\n", 9876);
	printf("ok alors %+06.6d\n", 9876);
	printf("ok alors % -015.7d\n", 9876);
	printf("ok alors %+-010.5d\n", 9876);
	printf("ok alors %+07.12d\n", 9876);
	printf("ok alors % +07.12d\n", 9876);
	printf("ok alors %+ -07.12d\n", 9876);
	printf("ok alors %+ -17.12d\n", 9876);
	printf("ok alors %010d\n", -9876);
	printf("ok alors %d\n", -9876);
	printf("ok alors %-d\n", -9876);
	printf("ok alors %+d\n", -9876);
	printf("ok alors % d\n", -9876);
	printf("ok alors %0d\n", -9876);
	printf("ok alors %+0d\n", -9876);
	printf("ok alors % +d\n", -9876);
	printf("ok alors % -d\n", -9876);
	printf("ok alors %  -+d\n", -9876);
	printf("ok alors % 0d\n", -9876);  
	printf("ok alors % -0d\n", -9876);
	printf("ok alors % -+0d\n", -9876);
	printf("ok alors %-0d\n", -9876);
	printf("ok alors %+-d\n", -9876);
	printf("ok alors %+-0d\n", -9876);
	printf("ok alors %0-+2d\n", -9876);
	printf("ok alors %- 05d\n", -9876);
	printf("ok alors %+00d\n", -9876);
	printf("ok alors %+++--++-   7d\n", -9876);
	printf("ok alors % +023d\n", -9876);
	printf("ok alors %+-+0 d\n", -9876);
	printf("ok alors %0+4d\n", -9876);
	printf("ok alors %-010d\n", -9876);
	printf("ok alors %010.5d\n", -9876);
	printf("ok alors %-010.5d\n", -9876);
	printf("ok alors % 010.5d\n", -9876);
	printf("ok alors %+10.5d\n", -9876);
	printf("ok alors %+010.3d\n", -9876);
	printf("ok alors %+ 010.5d\n", -9876);
	printf("ok alors %+06.6d\n", -9876);
	printf("ok alors % -015.7d\n", -9876);
	printf("ok alors %+-010.5d\n", -9876);
	printf("ok alors %+07.12d\n", -9876);
	printf("ok alors % +07.12d\n", -9876);
	printf("ok alors %+ -07.12d\n", -9876);
	printf("ok alors %+ -17.12d\n", -9876);
	printf("ok alors % +07.12d la le printf marche %10d\n", -9876, 9877);
	printf("st = @moulitest: %.d %.0d\n", 0, 0);
	printf("st = @moulitest: %.d %.0d\n", 0, 0);
 	printf("st = @moulitest: %05.d %05.0d\n", 0, 0);
 	printf("test = %d\n", -12345);
 	printf("test = %hd\n", -12345);
 	printf("test = %hhd\n", -12345);
 	printf("test = %ld\n", -12345);
 	printf("test = %lld\n", -12345);
 	printf("test = %X\n", 23);
 	printf("test = %X\n", 2147374632929);
 	printf("test = %x\n", 23);
 	printf("test = %x\n", 2147374632929);
 	printf("test = %u\n", -12345);
 	printf("test = %o\n", -12345);
 	printf("test = %o\n", 123456789123456789);
 	printf("test = %o\n", 1234567891234567891);
 	printf("test = %p\n", 12345);
 	printf("test = %p\n", 123456789);
 	printf("test = %c\n", 'l');
 	printf("test = %c\n", 42);
 	printf("test = %x\n", 4294967296);
 	printf("test = %lld\n", 9223372036854775807);
 	printf("test = %x\n", 0);
 	printf("test ft_printf numero %d, only int %10d, donc  %0+ 12.4d %d pour %-4d de reussite\n", 1, 87659876, 42, 1000, 100);
	printf("ok alors %o\n", 9876);
	printf("ok alors %-o\n", 9876);
	printf("ok alors %+o\n", 9876);
	printf("ok alors % o\n", 9876);
	printf("ok alors %0o\n", 9876);
	printf("ok alors %+0o\n", 9876);
	printf("ok alors % +o\n", 9876);
	printf("ok alors % -o\n", 9876);
	printf("ok alors %  -+o\n", 9876);
	printf("ok alors % 0o\n", 9876);  
	printf("ok alors % -0o\n", 9876);
	printf("ok alors % -+0o\n", 9876);
	printf("ok alors %-0o\n", 9876);
	printf("ok alors %+-o\n", 9876);
	printf("ok alors %+-0o\n", 9876);
	printf("ok alors %0-+2o\n", 9876);
	printf("ok alors %- 05o\n", 9876);
	printf("ok alors %+00o\n", 9876);
	printf("ok alors %+++--++-   7o\n", 9876);
	printf("ok alors % +023o\n", 9876);
	printf("ok alors %+-+0 o\n", 9876);
	printf("ok alors %0+4o\n", 9876);
	printf("ok alors %-010o\n", 9876);
	printf("ok alors %+010.5o\n", 9876);
	printf("ok alors %-010.5o\n", 9876);
	printf("ok alors % 010.5o\n", 9876);
	printf("ok alors %+10.5o\n", 9876);
	printf("ok alors %+010.3o\n", 9876);
	printf("ok alors %+ 010.5o\n", 9876);
	printf("ok alors %+06.6o\n", 9876);
	printf("ok alors % -015.7o\n", 9876);
	printf("ok alors %+-010.5o\n", 9876);
	printf("ok alors %+07.12o\n", 9876);
	printf("ok alors % +07.12o\n", 9876);
	printf("ok alors %+ -07.12o\n", 9876);
	printf("ok alors %+ -17.12o\n", 9876);
	printf("ok alors %010o\n", -9876);
	printf("ok alors %o\n", -9876);
	printf("ok alors %-o\n", -9876);
	printf("ok alors %+o\n", -9876);
	printf("ok alors % o\n", -9876);
	printf("ok alors %0o\n", -9876);
	printf("ok alors %+0o\n", -9876);
	printf("ok alors % +o\n", -9876);
	printf("ok alors % -o\n", -9876);
	printf("ok alors %  -+o\n", -9876);
	printf("ok alors % 0o\n", -9876);  
	printf("ok alors % -0o\n", -9876);
	printf("ok alors % -+0o\n", -9876);
	printf("ok alors %-0o\n", -9876);
	printf("ok alors %+-o\n", -9876);
	printf("ok alors %+-0o\n", -9876);
	printf("ok alors %0-+2o\n", -9876);
	printf("ok alors %- 05o\n", -9876);
	printf("ok alors %+00o\n", -9876);
	printf("ok alors %+++--++-   7o\n", -9876);
	printf("ok alors % +023o\n", -9876);
	printf("ok alors %+-+0 o\n", -9876);
	printf("ok alors %0+4o\n", -9876);
	printf("ok alors %-010o\n", -9876);
	printf("ok alors %010.5o\n", -9876);
	printf("ok alors %-010.5o\n", -9876);
	printf("ok alors % 010.5o\n", -9876);
	printf("ok alors %+10.5o\n", -9876);
	printf("ok alors %+010.3o\n", -9876);
	printf("ok alors %+ 010.5o\n", -9876);
	printf("ok alors %+06.6o\n", -9876);
	printf("ok alors % -015.7o\n", -9876);
	printf("ok alors %+-010.5o\n", -9876);
	printf("ok alors %+07.12o\n", -9876);
	printf("ok alors % +07.12o\n", -9876);
	printf("ok alors %+ -07.12o\n", -9876);
	printf("ok alors %+ -17.12o\n", -9876);
	printf("ok alors % +07.12o la le printf marche %10o\n", -9876, 9877);
	printf("ok alors %x \n", 9876);
	printf("ok alors %-x \n", 9876);
	printf("ok alors %+x \n", 9876);
	printf("ok alors % x \n", 9876);
	printf("ok alors %0x \n", 9876);
	printf("ok alors %+0x \n", 9876);
	printf("ok alors % +x \n", 9876);
	printf("ok alors % -x \n", 9876);
	printf("ok alors %  -+x \n", 9876);
	printf("ok alors % 0x \n", 9876);  
	printf("ok alors % -0x \n", 9876);
	printf("ok alors % -+0x \n", 9876);
	printf("ok alors %-0x \n", 9876);
	printf("ok alors %+-x \n", 9876);
	printf("ok alors %+-0x \n", 9876);
	printf("ok alors %0-+2x \n", 9876);
	printf("ok alors %- 05x \n", 9876);
	printf("ok alors %+00x \n", 9876);
	printf("ok alors %+++--++-   7x \n", 9876);
	printf("ok alors % +023x \n", 9876);
	printf("ok alors %+-+0 x \n", 9876);
	printf("ok alors %0+4x \n", 9876);
	printf("ok alors %-010x \n", 9876);
	printf("ok alors %+010.5x \n", 9876);
	printf("ok alors %-010.5x \n", 9876);
	printf("ok alors % 010.5x \n", 9876);
	printf("ok alors %+10.5x \n", 9876);
	printf("ok alors %+010.3x \n", 9876);
	printf("ok alors %+ 010.5x \n", 9876);
	printf("ok alors %+06.6x \n", 9876);
	printf("ok alors % -015.7x \n", 9876);
	printf("ok alors %+-010.5x \n", 9876);
	printf("ok alors %+07.12x \n", 9876);
	printf("ok alors % +07.12x \n", 9876);
	printf("ok alors %+ -07.12x \n", 9876);
	printf("ok alors %+ -17.12x \n", 9876);
	printf("ok alors %010x \n", -9876);
	printf("ok alors %x \n", -9876);
	printf("ok alors %-x \n", -9876);
	printf("ok alors %+x \n", -9876);
	printf("ok alors % x \n", -9876);
	printf("ok alors %0x \n", -9876);
	printf("ok alors %+0x \n", -9876);
	printf("ok alors % +x \n", -9876);
	printf("ok alors % -x \n", -9876);
	printf("ok alors %  -+x \n", -9876);
	printf("ok alors % 0x \n", -9876);  
	printf("ok alors % -0x \n", -9876);
	printf("ok alors % -+0x \n", -9876);
	printf("ok alors %-0x \n", -9876);
	printf("ok alors %+-x \n", -9876);
	printf("ok alors %+-0x \n", -9876);
	printf("ok alors %0-+2x \n", -9876);
	printf("ok alors %- 05x \n", -9876);
	printf("ok alors %+00x \n", -9876);
	printf("ok alors %+++--++-   7x \n", -9876);
	printf("ok alors % +023x \n", -9876);
	printf("ok alors %+-+0 x \n", -9876);
	printf("ok alors %0+4x \n", -9876);
	printf("ok alors %-010x \n", -9876);
	printf("ok alors %010.5x \n", -9876);
	printf("ok alors %-010.5x \n", -9876);
	printf("ok alors % 010.5x \n", -9876);
	printf("ok alors %+10.5x \n", -9876);
	printf("ok alors %+010.3x \n", -9876);
	printf("ok alors %+ 010.5x \n", -9876);
	printf("ok alors %+06.6x \n", -9876);
	printf("ok alors % -015.7x \n", -9876);
	printf("ok alors %+-010.5x \n", -9876);
	printf("ok alors %+07.12x \n", -9876);
	printf("ok alors % +07.12x \n", -9876);
	printf("ok alors %+ -07.12x \n", -9876);
	printf("ok alors %+ -17.12x \n", -9876);
	printf("ok alors % +07.12x  la le printf marche %10x \n", -9876, 9877);
	printf("ok alors %X\n", 9876);
	printf("ok alors %-X\n", 9876);
	printf("ok alors %+X\n", 9876);
	printf("ok alors % X\n", 9876);
	printf("ok alors %0X\n", 9876);
	printf("ok alors %+0X\n", 9876);
	printf("ok alors % +X\n", 9876);
	printf("ok alors % -X\n", 9876);
	printf("ok alors %  -+X\n", 9876);
	printf("ok alors % 0X\n", 9876);  
	printf("ok alors % -0X\n", 9876);
	printf("ok alors % -+0X\n", 9876);
	printf("ok alors %-0X\n", 9876);
	printf("ok alors %+-X\n", 9876);
	printf("ok alors %+-0X\n", 9876);
	printf("ok alors %0-+2X\n", 9876);
	printf("ok alors %- 05X\n", 9876);
	printf("ok alors %+00X\n", 9876);
	printf("ok alors %+++--++-   7X\n", 9876);
	printf("ok alors % +023X\n", 9876);
	printf("ok alors %+-+0 X\n", 9876);
	printf("ok alors %0+4X\n", 9876);
	printf("ok alors %-010X\n", 9876);
	printf("ok alors %+010.5X\n", 9876);
	printf("ok alors %-010.5X\n", 9876);
	printf("ok alors % 010.5X\n", 9876);
	printf("ok alors %+10.5X\n", 9876);
	printf("ok alors %+010.3X\n", 9876);
	printf("ok alors %+ 010.5X\n", 9876);
	printf("ok alors %+06.6X\n", 9876);
	printf("ok alors % -015.7X\n", 9876);
	printf("ok alors %+-010.5X\n", 9876);
	printf("ok alors %+07.12X\n", 9876);
	printf("ok alors % +07.12X\n", 9876);
	printf("ok alors %+ -07.12X\n", 9876);
	printf("ok alors %+ -17.12X\n", 9876);
	printf("ok alors %010X\n", -9876);
	printf("ok alors %X\n", -9876);
	printf("ok alors %-X\n", -9876);
	printf("ok alors %+X\n", -9876);
	printf("ok alors % X\n", -9876);
	printf("ok alors %0X\n", -9876);
	printf("ok alors %+0X\n", -9876);
	printf("ok alors % +X\n", -9876);
	printf("ok alors % -X\n", -9876);
	printf("ok alors %  -+X\n", -9876);
	printf("ok alors % 0X\n", -9876);  
	printf("ok alors % -0X\n", -9876);
	printf("ok alors % -+0X\n", -9876);
	printf("ok alors %-0X\n", -9876);
	printf("ok alors %+-X\n", -9876);
	printf("ok alors %+-0X\n", -9876);
	printf("ok alors %0-+2X\n", -9876);
	printf("ok alors %- 05X\n", -9876);
	printf("ok alors %+00X\n", -9876);
	printf("ok alors %+++--++-   7X\n", -9876);
	printf("ok alors % +023X\n", -9876);
	printf("ok alors %+-+0 X\n", -9876);
	printf("ok alors %0+4X\n", -9876);
	printf("ok alors %-010X\n", -9876);
	printf("ok alors %010.5X\n", -9876);
	printf("ok alors %-010.5X\n", -9876);
	printf("ok alors % 010.5X\n", -9876);
	printf("ok alors %+10.5X\n", -9876);
	printf("ok alors %+010.3X\n", -9876);
	printf("ok alors %+ 010.5X\n", -9876);
	printf("ok alors %+06.6X\n", -9876);
	printf("ok alors % -015.7X\n", -9876);
	printf("ok alors %+-010.5X\n", -9876);
	printf("ok alors %+07.12X\n", -9876);
	printf("ok alors % +07.12X\n", -9876);
	printf("ok alors %+ -07.12X\n", -9876);
	printf("ok alors %+ -17.12X\n", -9876);
	printf("ok alors %u\n", 9876);
	printf("ok alors %-u\n", 9876);
	printf("ok alors %+u\n", 9876);
	printf("ok alors % u\n", 9876);
	printf("ok alors %0u\n", 9876);
	printf("ok alors %+0u\n", 9876);
	printf("ok alors % +u\n", 9876);
	printf("ok alors % -u\n", 9876);
	printf("ok alors %  -+u\n", 9876);
	printf("ok alors % 0u\n", 9876);  
	printf("ok alors % -0u\n", 9876);
	printf("ok alors % -+0u\n", 9876);
	printf("ok alors %-0u\n", 9876);
	printf("ok alors %+-u\n", 9876);
	printf("ok alors %+-0u\n", 9876);
	printf("ok alors %0-+2u\n", 9876);
	printf("ok alors %- 05u\n", 9876);
	printf("ok alors %+00u\n", 9876);
	printf("ok alors %+++--++-   7u\n", 9876);
	printf("ok alors % +023u\n", 9876);
	printf("ok alors %+-+0 u\n", 9876);
	printf("ok alors %0+4u\n", 9876);
	printf("ok alors %-010u\n", 9876);
	printf("ok alors %+010.5u\n", 9876);
	printf("ok alors %-010.5u\n", 9876);
	printf("ok alors % 010.5u\n", 9876);
	printf("ok alors %+10.5u\n", 9876);
	printf("ok alors %+010.3u\n", 9876);
	printf("ok alors %+ 010.5u\n", 9876);
	printf("ok alors %+06.6u\n", 9876);
	printf("ok alors % -015.7u\n", 9876);
	printf("ok alors %+-010.5u\n", 9876);
	printf("ok alors %+07.12u\n", 9876);
	printf("ok alors % +07.12u\n", 9876);
	printf("ok alors %+ -07.12u\n", 9876);
	printf("ok alors %+ -17.12u\n", 9876);
	printf("ok alors %010u\n", -9876);
	printf("ok alors %u\n", -9876);
	printf("ok alors %-u\n", -9876);
	printf("ok alors %+u\n", -9876);
	printf("ok alors % u\n", -9876);
	printf("ok alors %0u\n", -9876);
	printf("ok alors %+0u\n", -9876);
	printf("ok alors % +u\n", -9876);
	printf("ok alors % -u\n", -9876);
	printf("ok alors %  -+u\n", -9876);
	printf("ok alors % 0u\n", -9876);  
	printf("ok alors % -0u\n", -9876);
	printf("ok alors % -+0u\n", -9876);
	printf("ok alors %-0u\n", -9876);
	printf("ok alors %+-u\n", -9876);
	printf("ok alors %+-0u\n", -9876);
	printf("ok alors %0-+2u\n", -9876);
	printf("ok alors %- 05u\n", -9876);
	printf("ok alors %+00u\n", -9876);
	printf("ok alors %+++--++-   7u\n", -9876);
	printf("ok alors % +023u\n", -9876);
	printf("ok alors %+-+0 u\n", -9876);
	printf("ok alors %0+4u\n", -9876);
	printf("ok alors %-010u\n", -9876);
	printf("ok alors %010.5u\n", -9876);
	printf("ok alors %-010.5u\n", -9876);
	printf("ok alors % 010.5u\n", -9876);
	printf("ok alors %+10.5u\n", -9876);
	printf("ok alors %+010.3u\n", -9876);
	printf("ok alors %+ 010.5u\n", -9876);
	printf("ok alors %+06.6u\n", -9876);
	printf("ok alors % -015.7u\n", -9876);
	printf("ok alors %+-010.5u\n", -9876);
	printf("ok alors %+07.12u\n", -9876);
	printf("ok alors % +07.12u\n", -9876);
	printf("ok alors %+ -07.12u\n", -9876);
	printf("ok alors %+ -17.12u\n", -9876);
	printf("testt = %lld\n", (16^16) / (-2));
	printf("test = %lld\n", -9223372036854775807);
	printf("test = %zd\n", 4294967296);
	printf("% u\n", 4294967295);
	printf("%lu\n", 4294967296);               
 	printf("%lu\n", -42); 
 	printf("%llu", -42);                     
 	printf("%llu\n", 4999999999);              
 	printf("%ju\n", 4999999999);               
 	printf("%ju\n", 4294967296);               
 	printf("%U\n", 4294967295);                
	printf("%hU\n", 4294967296);               
 	printf("%U\n", 4294967296);
 	printf("%s %s\n", "this", "is");
 	printf("test = %lld\n", -9223372036854775808);
 	printf("test = %#6o\n", 2500);
	printf("%#x\n", 42);                         
	printf("%#llx\n", 9223372036854775807);      
	printf("%#x\n", 0);                          
	printf("%#x\n", 42);                         
	printf("%#X\n", 42);                         
	printf("%#8x\n", 42);                        
	printf("%#08x\n", 42);                       
	printf("%#-08x\n", 42);                      
	printf("@moulitest: %#.x %#.0x\n", 0, 0);
	printf("%+.d\n", 0);
	printf("ok alors %10-+.5u\n", -9876);     
	printf("test = %.0s\n", "precis");
	printf("test = %.1s\n", "precis");
	printf("test = %.2s\n", "precis");
	printf("test = %.3s\n", "precis");
	printf("test = %.4s\n", "precis");
	printf("test = %.5s\n", "precis");
	printf("test = %.6s\n", "precis");
	printf("test = %.7s\n", "precis");
	printf("test = %4s\n", "precis");
	printf("test = %8s\n", "precis");
	printf("%10s is a string\n", "this");   
  	printf("%.2s is a string\n", "this"); 
  	printf("%5.2s is a string\n", "this");       
 	printf("%10s is a string\n", "");           
  	printf("%.2s is a string\n", "");           
  	printf("%5.2s is a string\n", "");           
  	printf("%-10s is a string\n", "this"); 
  	printf("%-.2s is a string\n", "this");      
  	printf("%-5.2s is a string\n", "this"); 
  	printf("%-10s is a string\n", "");         
 	printf("%-.2s is a string\n", "");         
  	printf("%-5.2s is a string\n", "");          
  	printf("%lx\n", 4294967296); 
	printf("%llX\n", 4294967296);
	printf("%llx\n", 4294967296);
	printf("%jx\n", 4294967296);
	printf("%jx\n", -4294967296);
	printf("%jx\n", -4294967297); 
	printf("test = %ju\n", 4294967296);
	printf("@moulitest: %s\n", NULL);            
  	printf("test = %%\n");                             
printf("test = %5%\n");                             
printf("test = %-5%\n");                            
printf("test = %.0%\n");                            
printf("test = %%\n", "test");
printf("%hU\n", 4294967296); 
printf("test = %5%\n");                             
printf("test = %-5%\n");                            
printf("test = %.0%\n");     
printf("%s is a string\n", "this");
printf("%lld\n", 9223372036854775807);
printf("%jx\n", 4294967295);
printf("test = %0 10d\n", 12345);
printf("%#llx\n", 9223372036854775807);
printf("test = %% et %d\n", 42);
printf("@moulitest: %o\n", 0);
printf("%\n");
printf("%bay\n");
printf("%C\n", 5432);
printf("%C\n", 25105);
printf("%S\n", L"我是一只猫。");
printf("test = %d\n", -12345);
 	printf("test = %hx\n", -12345);
 	printf("test = %hhx\n", -12345);
 	printf("test = %lx\n", -12345);
 	printf("test = %llx\n", -12345);
 	printf("test = %jx\n", -12345);
 	printf("test = %zx\n", -12345);
 	printf("test = %hu\n", -12345);
 	printf("test = %hhu\n", -12345);
 	printf("test = %lu\n", -12345);
 	printf("test = %llu\n", -12345);
 	printf("test = %ju\n", -12345);
 	printf("test = %zu\n", -12345);
 	printf("test = %ho\n", -12345);
 	printf("test = %hho\n", -12345);
 	printf("test = %lo\n", -12345);
 	printf("test = %llo\n", -12345);
 	printf("test = %jo\n", -12345);
 	printf("test = %zo\n", -12345);
 	printf("test = %hs\n", "string");
 	printf("test = %hhs\n", "string");
 	printf("test = %ls\n", L"string");
 	printf("test = %lls\n", "string");
 	printf("test = %js\n", "string");
 	printf("test = %zs\n", "string");
 	printf("test = %C\n", 48);
 	printf("%-+5d\n", 42);
 	printf("test = %lld\n", 9223372036854775807);
 	
	return 0;
}
