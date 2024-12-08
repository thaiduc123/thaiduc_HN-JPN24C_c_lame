#include <stdio.h>

int main(){
    int arr[100], brr[100];
    int pick, x, pos, n;
    do{
        printf("\n\t\tMENU\n");
        printf("1:Nhap so phan tu va gia tri\n");
        printf("2:In ra cac phan tu\n");
        printf("3:Dem so luong cac so nguyen to\n");
        printf("4:Tim so hoan hao\n");
        printf("5:Tim gia tri nho thu hai\n");
        printf("6:Tim gia tri lon thu hai\n");
        printf("7:Them mot phan tu vao trong mang\n");
        printf("8:Xoa mot phan tu tai vi tri cu the\n");
        printf("9:Sap xep theo thu tu giam dan\n");
        printf("10:Sap xep theo thu tu tang dan\n");
        printf("11:Tim kiem phan tu\n");
        printf("12:Sap xep dua so chan len truoc so le xuong cuoi mang va in ra\n");
        printf("13:Xoa toan bo phan tu trung lap phan tu doc nhat co trong mang\n");
        printf("14:Dao nguoc thu tu\n");
        printf("15:Thoat\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &pick);
        switch (pick) {
            case 1:{
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cho mang:\n");
                for (int i=0; i<n; i++) {
                    printf("nhap gia tri a[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break; 
			}
            case 2:{
            	if (n<=0 || n>100){
            		printf("Khong hop le\n");
				} else {
	                printf("Cac gia tri cua mang: \n");
	                for (int i=0; i<n; i++) {
	                    printf("arr[%d]=%d\t",i, arr[i]);
	                }
	                printf("\n");
	            }
                break;   
			}
            case 3:
            	
                break;
            case 4:{
            	int sum = 0;
            	if(n>0 && n<=100){
					for(int i=0; i<n; i++){
						for(int j = 1; j<n;j++){
							if(n % j ==0){
								sum += j;
							}
						}
						if(n==sum){
							printf("so hoan hao la: %d\n", n);
						}
					}
				}else{
					printf("Chua co mang\n");
				}
				break; 
			}
            case 5:{
            	for (int i=0; i<n; i++){
            		brr[i]=arr[i];
				}
                if (n<=0 || n>100){
            		printf("Khong hop le\n");
				} else {
					
					for(int i = n - 1; i > 0; i--){
						for(int j = 0; j < i; j++){
							if(brr[j] > brr[j+1]){
								int temp = brr[j];
								brr[j] = brr[j+1];
								brr[j+1] = temp;
							}
						}
					}
	                printf("Gia tri nho thu hai trong mang: %d\n", brr[1]);
                }
                break;
            }
            case 6:{
            	for (int i=0; i<n; i++){
            		brr[i]=arr[i];
				}
            	if (n<=0 || n>100){
            		printf("Khong hop le\n");
				} else {
				for (int i = 0; i < n - 1; i++) {
                        for (int j = i + 1; j < n; j++) {
                            if (brr[i] < brr[j]) {
                                int temp = brr[i];
                                brr[i] = brr[j];
                                brr[j] = temp;
                            }
                        }
                    }
				printf("Phan tu lon thu 2 cua mang la: %d", brr[1]);
				}
				break;
			}
            case 7:{
                printf("Nhap gia tri can them: ");
                scanf("%d", &x);
                printf("Nhap vi tri can them: ");
                scanf("%d", &pos);
                if (pos>=0 && pos<=n) {
                    for (int i=n; i>pos; i--) {
                        arr[i] = arr[i-1];
                    }
	                arr[pos]=x;
	                n++;
	                printf("Mang sau khi them: ");
	                for (int i=0; i<n; i++) {
                    	printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("khong hop le\n");
                }
                break;
            }
            case 8:{
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                if (pos>=0 && pos<=n) {
                    for (int i=pos; i<n - 1; i++) {
                        arr[i] = arr[i+1];
                    }
                    n--;
                    printf("Mang sau khi xoa: ");
                    for (int i=0; i<n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("khong hop le\n");
                }
                break;
            }
            case 9:{
            	if(n>0){
                  for (int i = 0; i < n - 1; i++) {
                        for (int j = i + 1; j < n; j++) {
                            if (arr[i] < arr[j]) {
                                int temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                            }
                        }
                    }
                    printf("Mang sau khi sap xep giam dan: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                }else{
					printf("chua khoi tao mang");
				}
                break;
            }
            case 10:{
            	if(n > 0){
					for(int i = n - 1; i > 0; i--){
						for(int j = 0; j < i; j++){
							if(arr[j] > arr[j+1]){
								int temp = arr[j];
								arr[j] = arr[j+1];
								arr[j+1] = temp;
							}
						}
					}
					printf("Mang sau khi sap xep giam dan: ");
	                for (int i = 0; i < n; i++) {
	                    printf("%d ", arr[i]);
	                }
				}else{
					printf("chua khoi tao mang");
				}
				break;
			}
            case 11:{
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                int found = -1;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        found = i;
                        break;
                    }
                }
                if (found==-1) {
                    printf("Phan tu %d khong co trong mang\n", x);
                } else {
                    printf("Phan tu %d tim thay tai vi tri %d\n", x, found);
                }
                break;
            }
            case 15:{
				break;
			}
            default: 
            	break;
    	}
    }while(pick!=15);
    return 0;
}

