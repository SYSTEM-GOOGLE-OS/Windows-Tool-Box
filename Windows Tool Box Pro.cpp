/*
*Copyright@2022, SGO
*All rights reserved
*�ļ�����:Windows Tool Box Pro
*��ǰ�汾:��ʽ��1.0.0
*���л���:Microsoft Windows 7+
*����:SYSTEM-GOOGLE-OS 
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main()
{
	float pass=114514;
	FILE *fp;
	if ((fp=fopen("C:\\WTBset.txt","rb"))==NULL)         //����Ƿ�ע�� 
    {
    	MessageBox(NULL, "�㻹û��ע�ᣡ���ȷ����ע��Windows Tool Box Pro", "��û��ע�ᣡ", MB_ICONERROR | MB_TOPMOST);
    	system("start .\\logs\\log.txt");
    	goto start1;       //δע����תע�� 
	}
	else goto start2;
	start1:int key;
	printf("���뿪���߸������Կ:");
	scanf("%s",&key);
	if (key == pass)
	{
		fp==fopen("C:\\WTBset.txt","wb+");
		system("attrib +h C:\\WTBset.txt");
		MessageBox(NULL,"ע��ɹ�!��л��ʹ��Windows Tool Box Pro","ע��ɹ�!", MB_ICONASTERISK | MB_ICONINFORMATION);
		Sleep (500);
		goto start2;	
	}
	else
	{
		MessageBox(NULL, "Input Error!", "Windows Tool Box Pro Error!", MB_ICONERROR | MB_ICONHAND);
	    goto start1;
	}
	start2:
	system("cls");
	system("title Windows Tool Box Pro v1.0.0 [InnoSofts Confidential]");
	system("mode con cols=80 lines=35");
	system("color 3F");
	system("date /t");
	system("time /t");
	int iNum; 
	printf("\n------------------------Windows������------------------------[����0 �˳�]-------");
	printf("[������PEС����:]\n");
	printf("1.bootice����С����                    2.DiskGenius��������\n");
	printf("3.UEFI�����޸�                         4.��ͳ�����޸�\n");
	printf("5.��÷��������                         6.CPU-Z��⹤��\n");
	printf("7.QEMU����������                       8.ToDesk���ذ�\n");
	printf("9.AAct�����                         10.HEU-KMS�����\n");
	printf("11.Dism++                              12.Everything�ļ�Ѱ��\n");
	printf("13.HDTuneӲ�̼��                      14.Windows�������ù���\n");
	printf("15.Wimtool(wim��ȡ����)                16.WinHex�ļ��ָ�����\n");
	printf("17.WinNTSetup(Windows��װ����)\n"); 
	printf("\n[������WTB����:]\n");
	printf("51.��cmd                             52.�������\n");
	printf("53.�����������                      54.��ע���\n");
	printf("55.�򿪰ٶ�                            56.����Դ������\n");
	printf("57.������������̳                    58.����SYSTEM�˻�(win7ר��)\n");
	printf("59.��������\n");
	printf("\n[�����ǿ����߹���:]\n");
	printf("101.��IST����                        102.ȡ��ע��WTBPro\n");
	printf("--------------------------------------------------------------------------------");
	printf("ע��:���ݵ������ܵĲ�ͬ���򿪻����ӳ�\n\n");
	printf("���������ѡ��:");
	scanf("%d",&iNum);
	switch(iNum)
	{
	    case 0:exit(0);
		case 1:system("start .\\tools\\bootice.exe");break;
		case 2:system("start .\\tools\\dg.exe");break;
		case 3:system("start .\\tools\\UEfix.exe");break;
		case 4:system("start .\\tools\\NTFix.exe");break;
		case 5:system("start .\\tools\\PA.exe");break;
		case 6:system("start .\\tools\\cpuz.exe");break;
		case 7:system("start .\\tools\\Qemu.exe");break;
		case 8:system("start .\\tools\\ToDesk.exe");break;
		case 9:system("start .\\tools\\AAct.exe");break;
		case 10:system("start .\\tools\\HEU.exe");break;
		case 11:system("start .\\tools\\Dism++\\Dism++x64.exe");break;
		case 12:system("start .\\tools\\Everything.exe");break;
		case 13:system("start .\\tools\\HDTune.exe");break;
		case 14:system("start .\\tools\\NTPassword\\password.exe");break;
		case 15:system("start .\\tools\\Wimtool\\WimTool.EXE");break;
		case 16:system("start .\\tools\\winhex.exe");break;
		case 17:system("start .\\tools\\WinNTSetup\\WinNTSetup.exe");break;
		case 51:system("start cmd");break;
		case 52:system("start gpedit.msc");break;
		case 53:system("start taskmgr");break;
		case 54:system("start regedit");break;
		case 55:system("start www.baidu.com");break;
		case 56:system("start explorer.exe");break;
		case 57:system("start http://bbs.wuyou.net/forum.php");break;
		case 58:MessageBox(NULL, "ע��:����������ʽ������ʱ,����鿴��Ϣ\n\
�������������������explorer.exe��������\n\
�˹���ֻ��Windows7����!", "ע��!", MB_ICONEXCLAMATION | MB_ICONWARNING);
				system("sc Create SuperCMD binpath= 'cmd /K start' type= own type= interact");
				system("net start SuperCMD");break;
		case 59:int num;
		        system("cls");
		        printf("1.A\t2.B\t3.C\t4.D\t5.E\t6.F\t7.G\t8.H\t9.I\t10.J\t11.K\n\n\
12.L\t13.M\t14.N\t15.O\t16.P\t17.Q\t18.R\t19.S\t20.T\t21.U\t22.V\n\n\
23.W\t24.X\t25.Y\t26.Z\n\n");
		        printf("���뵯��ʲô?\n");
		        printf("�Ǳ�Ҫ�벻Ҫ����C��!\n");
		        printf("������:");
		        scanf("%d",&num);
		        switch(num)
				{
					case 1:system("mountvol A: /d");break;
					case 2:system("mountvol B: /d");break;
					case 3:system("mountvol C: /d");break;
					case 4:system("mountvol D: /d");break;
					case 5:system("mountvol E: /d");break;
					case 6:system("mountvol F: /d");break;
					case 7:system("mountvol G: /d");break;
					case 8:system("mountvol H: /d");break;
					case 9:system("mountvol I: /d");break;
					case 10:system("mountvol J: /d");break;
					case 11:system("mountvol K: /d");break;
					case 12:system("mountvol L: /d");break;
					case 13:system("mountvol M: /d");break;
					case 14:system("mountvol N: /d");break;
					case 15:system("mountvol O: /d");break;
					case 16:system("mountvol P: /d");break;
					case 17:system("mountvol Q: /d");break;
					case 18:system("mountvol R: /d");break;
					case 19:system("mountvol S: /d");break;
					case 20:system("mountvol T: /d");break;
					case 21:system("mountvol U: /d");break;
					case 22:system("mountvol V: /d");break;
					case 23:system("mountvol W: /d");break;
					case 24:system("mountvol X: /d");break;
					case 25:system("mountvol Y: /d");break;
					case 26:system("mountvol Z: /d");break;
					default:MessageBox(NULL, "Input Error!", "Windows Tool Box Pro Error!", MB_ICONERROR | MB_ICONHAND);
				}
		        MessageBox(NULL, "�ѵ���!", "Windows Tool Box Pro", MB_ICONASTERISK | MB_ICONINFORMATION);break;
		case 101:system("start www.innosofts.ml");break;
		case 102:system("start .\\logs\\WTBProȡ��ע��.exe");
		         exit(0);
		default:MessageBox(NULL, "Input Error!", "Windows Tool Box Pro Error!", MB_ICONERROR | MB_ICONHAND);
	}
	goto start2;
}
