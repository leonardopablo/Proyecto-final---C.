#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
	system("color 70");
	int al1,al2,al3,al4,al5,al6,al7,al8,al9,al10,al11,al12,al13,al14,al15,al16,al17,al18,al19,al20,al21,al22,al23,al24,al25,al26,al27;
	int l1q=0,l2q=0,l3q=0,l4q=0,l5q=0,l6q=0,l7q=0,l8q=0,l9q=0,l10q=0,l11q=0,l12q=0,l13q=0,l14q=0,l15q=0,l16q=0,l17q=0,l18q=0,l19q=0,l20q=0,l21q=0,l22q=0,l23q=0,l24q=0,l25q=0,l26q=0,l27q=0;
	int opcion,p_total=0,c_total=0,deuda,cancelar,clave;
	int p_t_libro1=0,p_t_libro2=0,p_t_libro3=0,p_t_libro4=0,p_t_libro5=0,p_t_libro6=0,p_t_libro7=0,p_t_libro8=0,p_t_libro9=0,p_t_libro10=0,p_t_libro11=0,p_t_libro12=0,p_t_libro13=0,p_t_libro14=0,p_t_libro15=0,p_t_libro16=0,p_t_libro17=0,p_t_libro18=0,p_t_libro19=0,p_t_libro20=0,p_t_libro21=0,p_t_libro22=0,p_t_libro23=0,p_t_libro24=0,p_t_libro25=0,p_t_libro26=0,p_t_libro27=0;
	int p_libro1=0,p_libro2=0,p_libro3=0,p_libro4=0,p_libro5=0,p_libro6=0,p_libro7=0,p_libro8=0,p_libro9=0,p_libro10=0,p_libro11=0,p_libro12=0,p_libro13=0,p_libro14=0,p_libro15=0,p_libro16=0,p_libro17=0,p_libro18=0,p_libro19=0,p_libro20=0,p_libro21=0,p_libro22=0,p_libro23=0,p_libro24=0,p_libro25=0,p_libro26=0,p_libro27=0;
	int c_libro1=0,c_libro2=0,c_libro3=0,c_libro4=0,c_libro5=0,c_libro6=0,c_libro7=0,c_libro8=0,c_libro9=0,c_libro10=0,c_libro11=0,c_libro12=0,c_libro13=0,c_libro14=0,c_libro15=0,c_libro16=0,c_libro17=0,c_libro18=0,c_libro19=0,c_libro20=0,c_libro21=0,c_libro22=0,c_libro23=0,c_libro24=0,c_libro25=0,c_libro26=0,c_libro27=0;
	char op,opc,opop,oopppp;
	
	do{
	    system("cls");
		cout<<"\t\t----------------------------------------"<<endl;	
	    cout<<"\t\t\tBienvenidos a la libreria"<<endl;
	    cout<<"\t\t----------------------------------------"<<endl;
	    cout<<"\n\t1. Venta de libros"<<endl;
	    cout<<"\t2. Ver boleta"<<endl;
	    cout<<"\t3. Administracion"<<endl;
	    cout<<"\t0. SALIR"<<endl;
	    cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    
	    switch(opcion){
	    	case 1:
	    		do{
	    			system("cls");
	    			cout<<"\t********Elija una de las Areas********"<<endl;
	    			cout<<"\n\t1. Numeros"<<endl;
	    			cout<<"\t2. Letras"<<endl;
	    			cout<<"\t3. Ciencias"<<endl;
	    			cout<<"\t4. Atras"<<endl;
	    			cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    			switch(opcion){
	    				case 1:
	    					do{
	    						system("cls");
	    						cout<<"\t********Elija uno de los cursos********"<<endl;
	    						cout<<"\n\t1. Geometria"<<endl;
	    						cout<<"\t2. Trigonometria"<<endl;
	    						cout<<"\t3. Fisica"<<endl;
	    						cout<<"\t4. Atras"<<endl;
	    						cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    						switch(opcion){
	    							case 1:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n\t1. libro1"<<"\t"<<"s/"<<p_libro1<< " el libro."<<endl;
	    									cout<<"\t2. libro2"<<"\t"<<"s/"<<p_libro2 <<" el libro."<<endl;
	    									cout<<"\t3. libro3"<<"\t"<<"s/"<<p_libro3<<" el libro."<<endl;
	    									cout<<"\t4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro1"<<endl;
	    												cout<<"\t\nCuantos libros desea comprar"; 
	    												cout<<"\t\nSi no desea comprar presione 0 ";
														cout<<"\t\nDigite opcion: "; cin>>c_libro1; 
	    												if(c_libro1==0){
	    													break;
	    												}
	    												if(l1q>c_libro1){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro1<<" libro1."<<endl;
	    												p_t_libro1=p_libro1*c_libro1;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro1<<endl;
	    												c_total+=c_libro1;
	    												p_total+=p_t_libro1;
	    												l1q-=c_libro1;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}	
	    												else{
	    													cout<<"\n Faltan libros"<<endl;
	    													
	    													system("pause");
														}
	    											}while(op!='s'); break;
	    												
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro2"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro2; 
	    												if(c_libro2==0){
	    													break;
	    												}
	    												if(l2q>c_libro2){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro2<<" libro2."<<endl;
	    												p_t_libro2=p_libro2*c_libro2;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro2<<endl;
	    												c_total+=c_libro2;
	    												p_total+=p_t_libro2;
	    												l2q-=c_libro2;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    											
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro3"<<endl;
	    												cout<<"\n\tCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro3; 
	    												if(c_libro3==0){
	    													break;
	    												}
	    												if(l3q>c_libro3){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro3<<" libro3."<<endl;
	    												p_t_libro3=p_libro3*c_libro3;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro3<<endl;
	    												c_total+=c_libro3;
	    												p_total+=p_t_libro3;
	    												l3q-=c_libro3;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Libro agotado"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;		
													
	    									}
	    									
	    								}while(opcion!=4); break;
	    								
	    							case 2:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. Libro4"<<"\t"<<"s/"<<p_libro4<<" el libro"<<endl;
	    									cout<<"2. Libro5"<<"\t"<<"s/"<<p_libro5<<" el libro"<<endl;
	    									cout<<"3. Libro6"<<"\t"<<"s/"<<p_libro6<<" el libro"<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro4"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro4; 
	    												if(c_libro4==0){
	    													break;
	    												}
	    												if(l4q>c_libro4){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro4<<" libro4."<<endl;
	    												p_t_libro4=p_libro4*c_libro4;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro4<<endl;
	    												c_total+=c_libro4;
	    												p_total+=p_t_libro4;
	    												l4q-=c_libro4;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro5"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro5; 
	    												if(c_libro5==0){
	    													break;
	    												}
	    												if(l5q>c_libro5){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro5<<" libro5."<<endl;
	    												p_t_libro5=p_libro5*c_libro5;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro5<<endl;
	    												c_total+=c_libro5;
	    												p_total+=p_t_libro5;
	    												l5q-=c_libro5;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    										case 3:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro6"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro6; 
	    												if(c_libro6==0){
	    													break;
	    												}
	    												if(l6q>c_libro6){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro6<<" libro6."<<endl;
	    												p_t_libro6=p_libro6*c_libro6;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro6<<endl;
	    												c_total+=c_libro6;
	    												p_total+=p_t_libro6;
	    												l6q-=c_libro6;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
															
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    									}
	    									
	    								}while(opcion!=4); break;
	    							case 3:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. Libro7"<<"\t"<<"s/"<<p_libro7<<"el libro"<<endl;
	    									cout<<"2. Libro8"<<"\t"<<"s/"<<p_libro8<<" el libro"<<endl;
	    									cout<<"3. Libro9"<<"\t"<<"s/"<<p_libro9<<" el libro"<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro7"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro7; 
	    												if(c_libro7==0){
	    													break;
	    												}
	    												if(l7q>c_libro7){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro7<<" libro7."<<endl;
	    												p_t_libro7=p_libro7*c_libro7;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro7<<endl;
	    												c_total+=c_libro7;
	    												p_total+=p_t_libro7;
	    												l7q-=c_libro7;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
														cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    												
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro8"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro8; 
	    												if(c_libro8==0){
	    													break;
	    												}
	    												if(l8q>c_libro8){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro8<<" libro8."<<endl;
	    												p_t_libro8=p_libro8*c_libro8;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro8<<endl;
	    												c_total+=c_libro8;
	    												p_total+=p_t_libro8;
	    												l8q-=c_libro8;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
												
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro9"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro9; 
	    												if(c_libro9==0){
	    													break;
	    												}
	    												if(l9q>c_libro9){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro9<<" libro9."<<endl;
	    												p_t_libro9=p_libro9*c_libro9;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro9<<endl;
	    												c_total+=c_libro9;
	    												p_total+=p_t_libro9;
	    												l9q-=c_libro9;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
													
	    									}
	    									
	    								}while(opcion!=4); break;
									case 4:
										break;		
	    						}
	    						break;
	    						
	    					}while(opcion!=4); break;
	    				case 2:
	    					do{
	    						system("cls");
	    						cout<<"\n1. Filosofia"<<endl;
	    						cout<<"2. Historia"<<endl;
	    						cout<<"3. Geografia"<<endl;
	    						cout<<"4. Atras"<<endl;
	    						cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    						switch(opcion){
	    							case 1:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. libro10"<<"\t"<<"s/"<<p_libro10<<"el libro."<<endl;
	    									cout<<"2. libro11"<<"\t"<<"s/"<<p_libro11<<" el libro."<<endl;
	    									cout<<"3. libro12"<<"\t"<<"s/"<<p_libro12<<" el libro."<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
											switch(opcion){
												case 1:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro10"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro10; 
	    												if(c_libro10==0){
	    													break;
	    												}
	    												if(l10q>c_libro10){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro10<<" libro10."<<endl;
	    												p_t_libro10=p_libro10*c_libro10;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro10<<endl;
	    												c_total+=c_libro10;
	    												p_total+=p_t_libro10;
	    												l10q-=c_libro10;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
													
												case 2:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro11"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro11; 
	    												if(c_libro11==0){
	    													break;
	    												}
	    												if(l11q>c_libro11){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro11<<" libro11."<<endl;
	    												p_t_libro11=p_libro11*c_libro11;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro11<<endl;
	    												c_total+=c_libro11;
	    												p_total+=p_t_libro11;
	    												l11q-=c_libro11;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
												
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro12"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro12; 
	    												if(c_libro12==0){
	    													break;
	    												}
	    												if(l12q>c_libro12){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro12<<" libro12."<<endl;
	    												p_t_libro12=p_libro12*c_libro12;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro12<<endl;
	    												c_total+=c_libro12;
	    												p_total+=p_t_libro12;
	    												l12q-=c_libro12;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
													
											}	
	    									
	    								}while(opcion!=4); break;
	    							case 2:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. libro13"<<"\t"<<"s/"<<p_libro13<<" el libro."<<endl;
	    									cout<<"2. libro14"<<"\t"<<"s/"<<p_libro14<<" el libro."<<endl;
	    									cout<<"3. libro15"<<"\t"<<"s/"<<p_libro15<<" el libro."<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro13"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro13; 
	    												if(c_libro13==0){
	    													break;
	    												}
	    												if(l13q>c_libro13){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro13<<" libro13."<<endl;
	    												p_t_libro13=p_libro13*c_libro13;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro13<<endl;
	    												c_total+=c_libro13;
	    												p_total+=p_t_libro13;
	    												l13q-=c_libro13;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
	    												else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}
	    											}while(op!='s'); break;
	    											
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro14"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro14; 
	    												if(c_libro14==0){
	    													break;
	    												}
	    												if(l14q>c_libro14){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro14<<" libro14."<<endl;
	    												p_t_libro14=p_libro14*c_libro14;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro14<<endl;
	    												c_total+=c_libro14;
	    												p_total+=p_t_libro14;
	    												l14q-=c_libro14;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
												
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro15"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro15; 
	    												if(c_libro15==0){
	    													break;
	    												}
	    												if(l15q>c_libro15){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro15<<" libro15."<<endl;
	    												p_t_libro15=p_libro15*c_libro15;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro15<<endl;
	    												c_total+=c_libro15;
	    												p_total+=p_t_libro15;
	    												l15q-=c_libro15;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
	    												else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}
	    											}while(op!='s'); break;
													
	    									}
	    									
	    								}while(opcion!=4); break;
	    							case 3:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. libro16"<<"\t"<<"s/"<<p_libro16<<" el libro."<<endl;
	    									cout<<"2. libro17"<<"\t"<<"s/"<<p_libro17<<" el libro."<<endl;
	    									cout<<"3. libro18"<<"\t"<<"s/"<<p_libro18<<" el libro."<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro16"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro16; 
	    												if(c_libro16==0){
	    													break;
	    												}
	    												if(l16q>c_libro16){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro16<<" libro16."<<endl;
	    												p_t_libro16=p_libro16*c_libro16;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro16<<endl;
	    												c_total+=c_libro16;
	    												p_total+=p_t_libro16;
	    												l16q-=c_libro16;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro17"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro17; 
	    												if(c_libro17==0){
	    													break;
	    												}
	    												if(l17q>c_libro17){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro17<<" libro17."<<endl;
	    												p_t_libro17=p_libro17*c_libro17;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro17<<endl;
	    												c_total+=c_libro17;
	    												p_total+=p_t_libro17;
	    												l17q-=c_libro17;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
												
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro18"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro18; 
	    												if(c_libro18==0){
	    													break;
	    												}
	    												if(l18q>c_libro18){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro18<<" libro18."<<endl;
	    												p_t_libro18=p_libro18*c_libro18;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro18<<endl;
	    												c_total+=c_libro18;
	    												p_total+=p_t_libro18;
	    												l18q-=c_libro18;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
													
	    									}
	    									
	    								}while(opcion!=4); break;
	    							case 4:
	    								break;
	    						}
	    						
	    					}while(opcion!=4); break;
	    				case 3:
	    					do{
	    						system("cls");
	    						cout<<"\n1. Biologia"<<endl;
	    						cout<<"2. Quimica"<<endl;
	    						cout<<"3. RV"<<endl;
	    						cout<<"4. Atras"<<endl;
	    						cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    						switch(opcion){
	    							case 1:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. libro19"<<"\t"<<"s/"<<p_libro19<<" el libro."<<endl;
	    									cout<<"2. libro20"<<"\t"<<"s/"<<p_libro20<<"el libro."<<endl;
	    									cout<<"3. libro21"<<"\t"<<"s/"<<p_libro21<<"el libro."<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro19"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro19; 
	    												if(c_libro19==0){
	    													break;
	    												}
	    												if(l19q>c_libro19){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro19<<" libro19."<<endl;
	    												p_t_libro19=p_libro19*c_libro19;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro19<<endl;
	    												c_total+=c_libro19;
	    												p_total+=p_t_libro19;
	    												l19q-=c_libro19;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro20"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro20; 
	    												if(c_libro20==0){
	    													break;
	    												}
	    												if(l20q>c_libro20){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro20<<" libro20."<<endl;
	    												p_t_libro20=p_libro20*c_libro20;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro20<<endl;
	    												c_total+=c_libro20;
	    												p_total+=p_t_libro20;
	    												l20q-=c_libro20;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
												
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro21"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro21; 
	    												if(c_libro21==0){
	    													break;
	    												}
	    												if(l21q>c_libro21){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro21<<" libro21."<<endl;
	    												p_t_libro21=p_libro21*c_libro21;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro21<<endl;
	    												c_total+=c_libro21;
	    												p_total+=p_t_libro21;
	    												l21q-=c_libro21;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
	    												else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}
	    											}while(op!='s'); break;
													
	    									}
	    									
	    								}while(opcion!=4); break;
	    							case 2:
	    								do{
	    									system("cls");
	    									cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
	    									cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. libro22"<<"\t"<<"s/"<<p_libro22<<" el libro."<<endl;
	    									cout<<"2. libro23"<<"\t"<<"s/"<<p_libro23<<"el libro."<<endl;
	    									cout<<"3. libro24"<<"\t"<<"s/"<<p_libro24<<" el libro."<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro22"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro22; 
	    												if(c_libro22==0){
	    													break;
	    												}
	    												if(l22q>c_libro22){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro22<<" libro22."<<endl;
	    												p_t_libro22=p_libro22*c_libro22;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro22<<endl;
	    												c_total+=c_libro22;
	    												p_total+=p_t_libro22;
	    												l22q-=c_libro22;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro23"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro23; 
	    												if(c_libro23==0){
	    													break;
	    												}
	    												if(l23q>c_libro23){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro23<<" libro23."<<endl;
	    												p_t_libro23=p_libro23*c_libro23;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro23<<endl;
	    												c_total+=c_libro23;
	    												p_total+=p_t_libro23;
	    												l23q-=c_libro23;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
												
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro24"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro24; 
	    												if(c_libro24==0){
	    													break;
	    												}
	    												if(l24q>c_libro24){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro24<<" libro24."<<endl;
	    												p_t_libro24=p_libro24*c_libro24;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro24<<endl;
	    												c_total+=c_libro24;
	    												p_total+=p_t_libro24;
	    												l24q-=c_libro24;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
													
	    									}
	    									
	    								}while(opcion!=4); break;
									case 3:
										do{
											system("cls");
											cout<<"\t********Lista de libros********"<<endl;
	    									cout<<"\n";
											cout<<"\tPara comprar presione una opcion"<<endl;
	    									cout<<"\n1. libro25"<<"\t"<<"s/"<<p_libro25<<" el libro."<<endl;
	    									cout<<"2. libro26"<<"\t"<<"s/"<<p_libro26<<"el libro."<<endl;
	    									cout<<"3. libro27"<<"\t"<<"s/"<<p_libro27<<"el libro."<<endl;
	    									cout<<"4. Atras"<<endl;
	    									cout<<"\n\tDigite una opcion:"; cin>>opcion;
	    									switch(opcion){
	    										case 1:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro25"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro25; 
	    												if(c_libro25==0){
	    													break;
	    												}
	    												if(l25q>c_libro25){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro25<<" libro25."<<endl;
	    												p_t_libro25=p_libro25*c_libro25;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro25<<endl;
	    												c_total+=c_libro25;
	    												p_total+=p_t_libro25;
	    												l25q-=c_libro25;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
	    											
	    										case 2:
	    											do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro26"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro26; 
	    												if(c_libro26==0){
	    													break;
	    												}
	    												if(l26q>c_libro26){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro26<<" libro26."<<endl;
	    												p_t_libro26=p_libro26*c_libro26;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro26<<endl;
	    												c_total+=c_libro26;
	    												p_total+=p_t_libro26;
	    												l26q-=c_libro26;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}	
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}
	    											}while(op!='s'); break;
												
												case 3:
													do{
	    												system("cls");
	    												cout<<"\tUsted a elegido el libro27"<<endl;
	    												cout<<"\nCuantos libros desea comprar"; 
	    												cout<<"\nSi no desea comprar presione 0 ";
														cout<<"\nDigite opcion: "; cin>>c_libro27; 
	    												if(c_libro27==0){
	    													break;
	    												}
	    												if(l27q>c_libro27){
	    													system("cls");
	    												cout<<"\nUsted esta comprando "<<c_libro27<<" libro27."<<endl;
	    												p_t_libro27=p_libro27*c_libro27;
	    												cout<<"\nPrecio a pagar en total: "<<p_t_libro27<<endl;
	    												c_total+=c_libro27;
	    												p_total+=p_t_libro27;
	    												l27q-=c_libro27;
	    												cout<<"Desea salir (s/n): "<<endl;
	    												cin>>op;
	    													
	    												}
														else{
															cout<<"\n Faltan libros"<<endl;
															system("pause");
														}	
	    											}while(op!='s'); break;
													
	    									}
											
										}while(opcion!=4); break;
									case 4:
										break;
	    						}
	    						
	    					}while(opcion!=4); break;
	    				case 4:
	    					break;
	    			}
	    			
	    		}while(opcion!=4); break;
	    		
		    case 2:
		    		system("cls");
		    	cout<<"\tUsted esta llevando"<<endl;
		    	cout<<"\t\nCantidad total de libros que lleva: "<<c_total<<endl;
		    	cout<<"\t\nPrecio total de la compra: "<<p_total<<endl;
		    	system("pause");
		    	break;

			case 3: 
			do{	
		system("cls");	
		do{	
			system("cls");
			cout<<"\t\t******Bienvenido al inventario******"<<endl;
			cout<<"\t\n\tPor favor digite su clave: "; cin>>clave;
		}while(clave!=123);
		
		system("cls");
		cout<<"\t\t******Bienvenido al inventario******"<<endl;
		cout<<"\n\nGEOMETRIA"<<"\t\t"<<"FILOSOFIA"<<"\t\t"<<"BIOLOGIA"<<endl;
		cout<<"\n1. libro1"<<"\t\t"<<"10. libro10"<<"\t\t"<<"19. libro19"<<endl;
		cout<<"2. libro2"<<"\t\t"<<"11. libro11"<<"\t\t"<<"20. libro20"<<endl;
		cout<<"3. libro3"<<"\t\t"<<"12. libro12"<<"\t\t"<<"21. libro21"<<endl<<endl;
		cout<<"\n\nTRIGONOMETRIA"<<"\t\t"<<"HISTORIA"<<"\t\t"<<"QUIMICA"<<endl;
		cout<<"\n4. libro4"<<"\t\t"<<"13. libro13"<<"\t\t"<<"22. libro22"<<endl;
		cout<<"5. libro5"<<"\t\t"<<"14. libro14"<<"\t\t"<<"23. libro23"<<endl;
		cout<<"6. libro6"<<"\t\t"<<"15. libro15"<<"\t\t"<<"24. libro24"<<endl<<endl;
		cout<<"\n\nFISICA"<<"\t\t\t"<<"GEOGRAFIA"<<"\t\t"<<"RV"<<endl;
		cout<<"\n7. libro7"<<"\t\t"<<"16. libro16"<<"\t\t"<<"25. libro25"<<endl;
		cout<<"8. libro8"<<"\t\t"<<"17. libro17"<<"\t\t"<<"26. libro26"<<endl;
		cout<<"9. libro9"<<"\t\t"<<"18. libro18"<<"\t\t"<<"27. libro27"<<endl<<endl;
		cout<<"\n\n0. SALIR"<<endl;
		cout<<"\nSeleccione una opcion: "; cin>>opcion;
		
		switch(opcion){
			case 1:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro1"<<endl;
				    cout<<"\n1. Reabastecer el libro1"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l1q<<" libro1"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al1;
				    				l1q+=al1;
				    				cout<<"\nSe añadio "<<al1<<" libro1 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro1 actualmente es de s/."<<p_libro1<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro1: "; cin>>p_libro1;
				    		    	cout<<"\nEl precio del libro1 actualmente es de s/."<<p_libro1<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l1q>0){
								cout<<"Se han vendido un total de "<<c_libro1<<" libro1"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro1<<endl;
								system("pause");
							    }
							    if(l1q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 2:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro2"<<endl;
				    cout<<"\n1. Reabastecer el libro2"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l2q<<" libro2"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al2;
				    				l2q+=al2;
				    				cout<<"\nSe añadio "<<al2<<" libro2 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro2 actualmente es de s/."<<p_libro2<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro2: "; cin>>p_libro2;
				    		    	cout<<"\nEl precio del libro2 actualmente es de s/."<<p_libro2<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l2q>0){
								cout<<"Se han vendido un total de "<<c_libro2<<" libro2"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro2<<endl;
								system("pause");
							    }
							    if(l2q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 3:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro3"<<endl;
				    cout<<"\n1. Reabastecer el libro3"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l3q<<" libro3"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al3;
				    				l3q+=al3;
				    				cout<<"\nSe añadio "<<al3<<" libro3 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro3 actualmente es de s/."<<p_libro3<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro3: "; cin>>p_libro3;
				    		    	cout<<"\nEl precio del libro3 actualmente es de s/."<<p_libro3<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l3q>0){
								cout<<"Se han vendido un total de "<<c_libro3<<" libro3"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro3<<endl;
								system("pause");
							    }
							    if(l3q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 4:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro4"<<endl;
				    cout<<"\n1. Reabastecer el libro4"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l4q<<" libro4"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al4;
				    				l4q+=al4;
				    				cout<<"\nSe añadio "<<al4<<" libro4 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro4 actualmente es de s/."<<p_libro4<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro4: "; cin>>p_libro4;
				    		    	cout<<"\nEl precio del libro4 actualmente es de s/."<<p_libro4<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l4q>0){
								cout<<"Se han vendido un total de "<<c_libro4<<" libro4"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro4<<endl;
								system("pause");
							    }
							    if(l4q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 5:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro5"<<endl;
				    cout<<"\n1. Reabastecer el libro5"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l5q<<" libro5"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al5;
				    				l5q+=al5;
				    				cout<<"\nSe añadio "<<al5<<" libro5 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro5 actualmente es de s/."<<p_libro5<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro5: "; cin>>p_libro5;
				    		    	cout<<"\nEl precio del libro5 actualmente es de s/."<<p_libro5<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l5q>0){
								cout<<"Se han vendido un total de "<<c_libro5<<" libro5"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro5<<endl;
								system("pause");
							    }
							    if(l5q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 6:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro6"<<endl;
				    cout<<"\n1. Reabastecer el libro6"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l6q<<" libro6"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al6;
				    				l6q+=al6;
				    				cout<<"\nSe añadio "<<al6<<" libro6 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro6 actualmente es de s/."<<p_libro6<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro6: "; cin>>p_libro6;
				    		    	cout<<"\nEl precio del libro6 actualmente es de s/."<<p_libro6<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l6q>0){
								cout<<"Se han vendido un total de "<<c_libro6<<" libro6"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro6<<endl;
								system("pause");
							    }
							    if(l6q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 7:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro7"<<endl;
				    cout<<"\n1. Reabastecer el libro7"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l7q<<" libro7"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al7;
				    				l7q+=al7;
				    				cout<<"\nSe añadio "<<al7<<" libro7 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro7 actualmente es de s/."<<p_libro7<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro7: "; cin>>p_libro7;
				    		    	cout<<"\nEl precio del libro7 actualmente es de s/."<<p_libro7<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l7q>0){
								cout<<"Se han vendido un total de "<<c_libro7<<" libro7"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro7<<endl;
								system("pause");
							    }
							    if(l7q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 8:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro8"<<endl;
				    cout<<"\n1. Reabastecer el libro8"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l8q<<" libro8"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al8;
				    				l8q+=al8;
				    				cout<<"\nSe añadio "<<al8<<" libro8 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro8 actualmente es de s/."<<p_libro8<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro8: "; cin>>p_libro8;
				    		    	cout<<"\nEl precio del libro8 actualmente es de s/."<<p_libro8<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l8q>0){
								cout<<"Se han vendido un total de "<<c_libro8<<" libro8"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro8<<endl;
								system("pause");
							    }
							    if(l8q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 9:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro9"<<endl;
				    cout<<"\n1. Reabastecer el libro9"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l9q<<" libro9"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al9;
				    				l9q+=al9;
				    				cout<<"\nSe añadio "<<al9<<" libro9 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro9 actualmente es de s/."<<p_libro9<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro9: "; cin>>p_libro9;
				    		    	cout<<"\nEl precio del libro9 actualmente es de s/."<<p_libro9<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l9q>0){
								cout<<"Se han vendido un total de "<<c_libro9<<" libro9"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro9<<endl;
								system("pause");
							    }
							    if(l9q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 10:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro10"<<endl;
				    cout<<"\n1. Reabastecer el libro10"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l10q<<" libro10"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al10;
				    				l10q+=al10;
				    				cout<<"\nSe añadio "<<al10<<" libro10 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro10 actualmente es de s/."<<p_libro10<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro10: "; cin>>p_libro10;
				    		    	cout<<"\nEl precio del libro10 actualmente es de s/."<<p_libro10<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l10q>0){
								cout<<"Se han vendido un total de "<<c_libro10<<" libro10"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro10<<endl;
								system("pause");
							    }
							    if(l10q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 11:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro11"<<endl;
				    cout<<"\n1. Reabastecer el libro11"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l11q<<" libro11"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea anadir: "; cin>>al11;
				    				l11q+=al11;
				    				cout<<"\nSe añadio "<<al11<<" libro11 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro11 actualmente es de s/."<<p_libro11<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro11: "; cin>>p_libro11;
				    		    	cout<<"\nEl precio del libro11 actualmente es de s/."<<p_libro11<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l11q>0){
								cout<<"Se han vendido un total de "<<c_libro11<<" libro11"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro11<<endl;
								system("pause");
							    }
							    if(l11q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 12:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro12"<<endl;
				    cout<<"\n1. Reabastecer el libro12"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l12q<<" libro12"<<endl;
				    			cout<<"\nDesea anadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al12;
				    				l12q+=al12;
				    				cout<<"\nSe añadio "<<al12<<" libro12 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro12 actualmente es de s/."<<p_libro12<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro12: "; cin>>p_libro12;
				    		    	cout<<"\nEl precio del libro12 actualmente es de s/."<<p_libro12<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l12q>0){
								cout<<"Se han vendido un total de "<<c_libro12<<" libro12"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro12<<endl;
								system("pause");
							    }
							    if(l12q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 13:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro13"<<endl;
				    cout<<"\n1. Reabastecer el libro13"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l13q<<" libro13"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al13;
				    				l13q+=al13;
				    				cout<<"\nSe añadio "<<al13<<" libro13 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro13 actualmente es de s/."<<p_libro13<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro13: "; cin>>p_libro13;
				    		    	cout<<"\nEl precio del libro13 actualmente es de s/."<<p_libro13<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l13q>0){
								cout<<"Se han vendido un total de "<<c_libro13<<" libro13"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro13<<endl;
								system("pause");
							    }
							    if(l13q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 14:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro14"<<endl;
				    cout<<"\n1. Reabastecer el libro14"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l14q<<" libro14"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al14;
				    				l14q+=al14;
				    				cout<<"\nSe añadio "<<al14<<" libro14 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro14 actualmente es de s/."<<p_libro14<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro14: "; cin>>p_libro14;
				    		    	cout<<"\nEl precio del libro14 actualmente es de s/."<<p_libro14<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l14q>0){
								cout<<"Se han vendido un total de "<<c_libro14<<" libro14"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro14<<endl;
								system("pause");
							    }
							    if(l14q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 15:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro15"<<endl;
				    cout<<"\n1. Reabastecer el libro15"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l15q<<" libro15"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al15;
				    				l15q+=al15;
				    				cout<<"\nSe añadio "<<al15<<" libro15 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro15 actualmente es de s/."<<p_libro15<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro15: "; cin>>p_libro15;
				    		    	cout<<"\nEl precio del libro15 actualmente es de s/."<<p_libro15<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l15q>0){
								cout<<"Se han vendido un total de "<<c_libro15<<" libro15"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro15<<endl;
								system("pause");
							    }
							    if(l15q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 16:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro16"<<endl;
				    cout<<"\n1. Reabastecer el libro16"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l16q<<" libro16"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al16;
				    				l16q+=al16;
				    				cout<<"\nSe añadio "<<al16<<" libro16 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro16 actualmente es de s/."<<p_libro16<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro16: "; cin>>p_libro16;
				    		    	cout<<"\nEl precio del libro16 actualmente es de s/."<<p_libro16<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l16q>0){
								cout<<"Se han vendido un total de "<<c_libro16<<" libro16"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro16<<endl;
								system("pause");
							    }
							    if(l16q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 17:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro17"<<endl;
				    cout<<"\n1. Reabastecer el libro17"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l17q<<" libro17"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al17;
				    				l17q+=al17;
				    				cout<<"\nSe añadio "<<al17<<" libro17 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro17 actualmente es de s/."<<p_libro17<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro17: "; cin>>p_libro17;
				    		    	cout<<"\nEl precio del libro17 actualmente es de s/."<<p_libro17<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l17q>0){
								cout<<"Se han vendido un total de "<<c_libro17<<" libro17"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro17<<endl;
								system("pause");
							    }
							    if(l17q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 18:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro18"<<endl;
				    cout<<"\n1. Reabastecer el libro18"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l18q<<" libro18"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al18;
				    				l18q+=al18;
				    				cout<<"\nSe añadio "<<al18<<" libro18 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro18 actualmente es de s/."<<p_libro18<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro18: "; cin>>p_libro18;
				    		    	cout<<"\nEl precio del libro18 actualmente es de s/."<<p_libro18<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l18q>0){
								cout<<"Se han vendido un total de "<<c_libro18<<" libro18"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro18<<endl;
								system("pause");
							    }
							    if(l18q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 19:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro19"<<endl;
				    cout<<"\n1. Reabastecer el libro19"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l19q<<" libro19"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al19;
				    				l19q+=al19;
				    				cout<<"\nSe añadio "<<al19<<" libro19 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro19 actualmente es de s/."<<p_libro19<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro19: "; cin>>p_libro19;
				    		    	cout<<"\nEl precio del libro19 actualmente es de s/."<<p_libro19<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l19q>0){
								cout<<"Se han vendido un total de "<<c_libro19<<" libro19"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro19<<endl;
								system("pause");
							    }
							    if(l19q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 20:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro20"<<endl;
				    cout<<"\n1. Reabastecer el libro20"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l20q<<" libro20"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al20;
				    				l20q+=al20;
				    				cout<<"\nSe añadio "<<al20<<" libro20 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro20 actualmente es de s/."<<p_libro20<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro20: "; cin>>p_libro20;
				    		    	cout<<"\nEl precio del libro20 actualmente es de s/."<<p_libro20<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l20q>0){
								cout<<"Se han vendido un total de "<<c_libro20<<" libro20"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro20<<endl;
								system("pause");
							    }
							    if(l20q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 21:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro21"<<endl;
				    cout<<"\n1. Reabastecer el libro21"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l21q<<" libro21"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al21;
				    				l21q+=al21;
				    				cout<<"\nSe añadio "<<al21<<" libro21 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro21 actualmente es de s/."<<p_libro21<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro21: "; cin>>p_libro21;
				    		    	cout<<"\nEl precio del libro21 actualmente es de s/."<<p_libro21<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l21q>0){
								cout<<"Se han vendido un total de "<<c_libro21<<" libro21"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro21<<endl;
								system("pause");
							    }
							    if(l21q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 22:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro22"<<endl;
				    cout<<"\n1. Reabastecer el libro22"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l22q<<" libro22"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al22;
				    				l22q+=al22;
				    				cout<<"\nSe añadio "<<al22<<" libro22 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro22 actualmente es de s/."<<p_libro22<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro22: "; cin>>p_libro22;
				    		    	cout<<"\nEl precio del libro22 actualmente es de s/."<<p_libro22<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l22q>0){
								cout<<"Se han vendido un total de "<<c_libro22<<" libro22"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro22<<endl;
								system("pause");
							    }
							    if(l22q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 23:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro23"<<endl;
				    cout<<"\n1. Reabastecer el libro23"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l23q<<" libro23"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al23;
				    				l23q+=al23;
				    				cout<<"\nSe añadio "<<al23<<" libro23 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro23 actualmente es de s/."<<p_libro23<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro23: "; cin>>p_libro23;
				    		    	cout<<"\nEl precio del libro23 actualmente es de s/."<<p_libro23<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l23q>0){
								cout<<"Se han vendido un total de "<<c_libro23<<" libro23"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro23<<endl;
								system("pause");
							    }
							    if(l23q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 24:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro24"<<endl;
				    cout<<"\n1. Reabastecer el libro24"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l24q<<" libro24"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al24;
				    				l24q+=al24;
				    				cout<<"\nSe añadio "<<al24<<" libro24 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro24 actualmente es de s/."<<p_libro24<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro24: "; cin>>p_libro24;
				    		    	cout<<"\nEl precio del libro24 actualmente es de s/."<<p_libro24<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l24q>0){
								cout<<"Se han vendido un total de "<<c_libro24<<" libro24"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro24<<endl;
								system("pause");
							    }
							    if(l24q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 25:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro25"<<endl;
				    cout<<"\n1. Reabastecer el libro25"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l25q<<" libro25"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al25;
				    				l25q+=al25;
				    				cout<<"\nSe añadio "<<al25<<" libro25 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro25 actualmente es de s/."<<p_libro25<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro25: "; cin>>p_libro25;
				    		    	cout<<"\nEl precio del libro25 actualmente es de s/."<<p_libro25<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l25q>0){
								cout<<"Se han vendido un total de "<<c_libro25<<" libro25"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro25<<endl;
								system("pause");
							    }
							    if(l25q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 26:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro26"<<endl;
				    cout<<"\n1. Reabastecer el libro26"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l26q<<" libro26"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al26;
				    				l26q+=al26;
				    				cout<<"\nSe añadio "<<al26<<" libro26 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro26 actualmente es de s/."<<p_libro26<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro26: "; cin>>p_libro26;
				    		    	cout<<"\nEl precio del libro26 actualmente es de s/."<<p_libro26<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l26q>0){
								cout<<"Se han vendido un total de "<<c_libro26<<" libro26"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro26<<endl;
								system("pause");
							    }
							    if(l26q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
								
							}while(op != 's');
				    }
					
				}while(opcion != 4); break;
				
			case 27:
				do{
					system("cls");		
					cout<<"\t\tUsted a elegido el libro27"<<endl;
				    cout<<"\n1. Reabastecer el libro27"<<endl;
				    cout<<"2. Poner precio al producto"<<endl;
				    cout<<"3. Ver ventas sobre este producto"<<endl;
				    cout<<"4. SALIR"<<endl;
				    cout<<"\nPara ver actividad digite una opcion: ";
				    cin>>opcion;
				    switch(opcion){
				    	case 1:
				    		do{
				    			system("cls");
				    			cout<<"Actualmente tiene "<<l27q<<" libro27"<<endl;
				    			cout<<"\nDesea añadir productos (s/n): "; cin>>opop;
				    			if(opop == 's'){
				    				cout<<"\nCuantos desea añadir: "; cin>>al27;
				    				l27q+=al27;
				    				cout<<"\nSe añadio "<<al27<<" libro27 al inventario."<<endl;
				    			}
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    			
				    		}while(op!='s'); break;
				    		
				    	case 2:
				    		do{
				    			system("cls");
				    			cout<<"El precio del producto libro27 actualmente es de s/."<<p_libro27<<endl;
				    		    cout<<"\nDesea cambiar el precio (s/n): "; cin>>opop;
				    		    if(opop=='s'){
				    		    	cout<<"Digite el precio del libro27: "; cin>>p_libro27;
				    		    	cout<<"\nEl precio del libro27 actualmente es de s/."<<p_libro27<<endl;
				    		    }
				    			else{
				    				break;
				    			}
				    			cout<<"Desea salir (s/n): "; cin>>op;
				    		}while(op != 's'); break;
						
						case 3:
							do{
								system("cls");
								if(l27q>0){
								cout<<"Se han vendido un total de "<<c_libro27<<" libro27"<<endl;
								cout<<"\nVenta total s/."<<p_t_libro27<<endl;
								system("pause");
							    }
							    if(l27q==0){
								cout<<"\nNo se vendio ningun libro"<<endl;
							    }
							    cout<<"Desea salir (s/n): "; cin>>op;	
						}while(op != 's');
				    }
				}while(opcion != 4); break;
		case 0:
			break;
		}
		cout<<" Desea salir s/n"<<endl;
		cin>>oopppp;	
	}while(oopppp!= 's');
			
				
				break;
			case 0:
				do{
		    		system("cls");
		    	cout<<"\tUsted esta llevando"<<endl;
		    	cout<<"\nCantidad total de libros que lleva: "<<c_total<<endl;
		    	cout<<"\nPrecio total de la compra: "<<p_total<<endl;
		    	cout<<"\nCancele su deuda aqui: "; cin>>cancelar;
		    	deuda=p_total-cancelar;
		    	}while(deuda!=0);
	}
	
	}while(opcion!=0);
	
	getch();
	return 0;
}
