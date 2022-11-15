#include <iostream>
using namespace std;

int main()
{
    cout<<"By 竹南高中 205 郭宥均"<<"\n"<<endl;
    int x=10;
    int a[5]={},b[4]={},c[4]={},d[4]={},profit=0;
    int atm=0,atp=0,btm=0,btp=0,ctm=0,ctp=0,dtm=0,dtp=0,am=0,ap=0,bm=0,bp=0,cm=0,cp=0,dm=0,dp=0;
    while(x!=-1){
        cout<<"★☆★ 205小舖 ★☆★"<<"\n"<<endl;
        cout<<"1:顧客 2:員工"<<"\n"<<">>>";
        cin>>x;
        switch (x){
        default:{
            cout<<"請輸入存在的選項"<<endl;
            break;
        }
            case 1:{
                cout<<"1 顧客"<<"\n"<<endl;
                cout<<"★☆★ 歡迎光臨205小舖 ★☆★"<<"\n"<<endl;
                int t=10;
                while(t!=-1){
                    cout<<"1:菜單 0:離開"<<"\n"<<">>>";
                    cin>>t;
                    switch (t){
                         default:{
                            cout<<"請輸入存在的選項"<<endl;
                            break;
                        }
                        case 0:{
                            t=-1;
                            break;
                        }
                        case 1:{
                            int u=10;
                            while(u!=-1){
                                cout<<"1 菜單"<<"\n"<<endl;
                                cout<<"1.烤麻糬"<<"\t"<<a[1]<<"元"<<"\t"<<"剩餘數量: "<<a[0]<<"\n"<<"2.烤棉花糖"<<"\t"<<b[1]<<"元"<<"\t"<<"剩餘數量: "<<
                                b[0]<<"\n"<<"3.草莓吐司加蛋"<<"\t"<<c[1]<<"元"<<"\t"<<"剩餘數量: "<<c[0]<<"\n"<<"4.熱可可"<<"\t"<<d[1]<<"元"<<"\t"<<"剩餘數量: "<<d[0]<<endl;
                                int u;
                                cout<<"1:購買  0:離開"<<"\n"<<">>";
                                cin>>u;
                                switch (u){
                                     default:{
                                        cout<<"請輸入存在的選項"<<endl;
                                        break;
                                    }
                                    case 0:{
                                        u=-1;
                                        cout<<"離開"<<endl;
                                        break;
                                    }
                                    case 1:{
                                        am=0,ap=0,bm=0,bp=0,cm=0,cp=0,dm=0,dp=0;

                                        int g=10;
                                        while(g!=-1){
                                            cout<<"1:烤麻糬 2:烤棉花糖 3:草莓吐司加蛋 4:熱可可 0:結帳（離開）"<<"\n"<<">>";
                                            cin>>g;
                                            switch (g){
                                                 default:{
                                                    cout<<"請輸入存在的選項!!!"<<endl;
                                                    break;
                                                }
                                                case 1:{
                                                    cout<<"烤麻糬"<<"\n"<<"數量: ";
                                                    am=0;
                                                    ap=0;
                                                    cin>>am;
                                                    ap=am*a[1];
                                                    a[0]-=am;
                                                    atp+=ap;
                                                    atm+=am;
                                                    cout<<"價格: "<<ap<<endl;
                                                    break;
                                                }
                                                case 2:{
                                                    cout<<"烤棉花糖"<<"\n"<<"數量: ";
                                                    bm=0;
                                                    bp=0;
                                                    cin>>bm;
                                                    bp=bm*b[1];
                                                    b[0]-=bm;
                                                    btp+=bp;
                                                    btm+=bm;
                                                    cout<<"價格: "<<bp<<endl;
                                                    break;
                                                }
                                                case 3:{
                                                    cout<<"草莓吐司加蛋"<<"\n"<<"數量: ";
                                                    cm=0;
                                                    cp=0;
                                                    cin>>cm;
                                                    cp=cm*c[1];
                                                    c[0]-=cm;
                                                    ctp+=cp;
                                                    ctm+=cm;
                                                    cout<<"價格: "<<cp<<endl;
                                                    break;
                                                }
                                                case 4:{
                                                    cout<<"熱可可"<<"\n"<<"數量: ";
                                                    dm=0;
                                                    dp=0;
                                                    cin>>dm;
                                                    dp=dm*d[1];
                                                    d[0]-=dm;
                                                    dtp+=dp;
                                                    dtm+=dm;
                                                    cout<<"價格: "<<dp<<endl;
                                                    break;
                                                }
                                                case 0:{
                                                    cout<<"\n"<<"結帳"<<endl;
                                                    cout<<"烤麻糬"<<"\t"<<am<<"個"<<"\t"<<ap<<"元"<<endl;
                                                    cout<<"烤棉花糖"<<"\t"<<bm<<"個"<<"\t"<<bp<<"元"<<endl;
                                                    cout<<"草莓吐司加蛋"<<"\t"<<cm<<"個"<<"\t"<<cp<<"元"<<endl;
                                                    cout<<"熱可可"<<"\t"<<dm<<"個"<<"\t"<<dp<<"元"<<endl;
                                                    cout<<"總計:\t"<<am+bm+cm+dm<<"個"<<"\t"<<ap+bp+cp+dp<<"元"<<endl;
                                                    cout<<"收您: ";
                                                    int h;
                                                    cin>>h;
                                                    cout<<"找您: "<<h-ap+bp+cp+dp<<" 元"<<endl;
                                                    cout<<"！！！謝謝光臨！！！"<<endl;
                                                    cout<<"================================================="<<"\n"<<endl;
                                                    g=-1;
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                            break;
                            }
                            break;
                        }
                    }
                }
                break;
            }
            case 2:{
                cout<<"2 員工"<<endl;
                int f=10;
                while(f!=-1){
                     cout<<"1:察看貨（進貨）  2:備貨(定價(第一次進貨))   3:今日總計 0:離開"<<"\n"<<">>>";
                     cin>>f;
                     switch(f){




                        case 1:{
                            int k=10;
                            while(k!=-1){
                                cout<<"1 察看貨（進貨）"<<"\n"<<">>";
                                cout<<"1:烤麻糬 2:烤棉花糖 3:草莓吐司加蛋 4:熱可可 0:離開"<<"\n"<<">>";
                                cin>>k;
                                switch(k){
                                    default:{
                                        cout<<"請輸入存在的選項!!!"<<endl;
                                        break;
                                    }
                                    case 1:{
                                        cout<<"烤麻糬"<<"\n"<<"數量: ";
                                        cout<<a[0];
                                        cout<<"\n"<<"價格/份: ";
                                        cout<<a[1];
                                        cout<<"\n"<<"成本/份: ";
                                        cout<<a[2];
                                        a[3]=a[1]-a[2];
                                        cout<<"\n"<<"利潤/份: "<<a[3]<<endl;
                                        int q=10;
                                        while(q!=-1){
                                            cout<<"1:進貨 0:離開"<<"\n"<<">>";
                                            cin>>q;
                                            switch(q){
                                                default:{
                                                    cout<<"請輸入存在的選項!!!"<<endl;
                                                    break;
                                                }
                                                case 1:{
                                                    cout<<"數量: ";
                                                    int l=0;
                                                    cin>>l;
                                                    a[0]+=l;
                                                    cout<<"總數: "<<a[0]<<endl;
                                                    break;
                                                }
                                                case 0:{
                                                    cout<<"離開"<<"\n"<<endl;
                                                    q=-1;
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 2:{
                                        cout<<"烤棉花糖"<<"\n"<<"數量: ";
                                        cout<<b[0];
                                        cout<<"\n"<<"價格/份: ";
                                        cout<<b[1];
                                        cout<<"\n"<<"成本/份: ";
                                        cout<<b[2];
                                        b[3]=b[1]-b[2];
                                        cout<<"\n"<<"利潤/份: "<<b[3]<<endl;
                                        int q=-10;
                                        while(q!=-1){
                                            cout<<"1:進貨 0:離開"<<"\n"<<">>";
                                            cin>>q;
                                            switch(q){
                                                default:{
                                                    cout<<"請輸入存在的選項!!!"<<endl;
                                                    break;
                                                }
                                                case 1:{
                                                    cout<<"數量: "<<endl;
                                                    int l=0;
                                                    cin>>l;
                                                    b[0]+=l;
                                                    cout<<"總數: "<<b[0]<<endl;
                                                    break;
                                                }
                                                case 0:{
                                                    cout<<"離開"<<"\n"<<endl;
                                                    q=-1;
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 3:{
                                        cout<<"草莓吐司加蛋"<<"\n"<<"數量: ";
                                        cout<<c[0];
                                        cout<<"\n"<<"價格/份: ";
                                        cout<<c[1];
                                        cout<<"\n"<<"成本/份: ";
                                        cout<<c[2];
                                        c[3]=c[1]-c[2];
                                        cout<<"\n"<<"利潤/份: "<<c[3]<<endl;
                                        int q=10;
                                        while(q!=-1){
                                            cout<<"1:進貨 0:離開"<<"\n"<<">>";
                                            cin>>q;

                                            switch(q){
                                                default:{
                                                    cout<<"請輸入存在的選項!!!"<<endl;
                                                    break;
                                                }
                                                case 1:{
                                                    cout<<"數量: "<<"\n"<<">"<<endl;
                                                    int l=0;
                                                    cin>>l;
                                                    c[0]+=l;
                                                    cout<<"總數: "<<c[0]<<endl;
                                                    break;
                                                }
                                                case 0:{
                                                    cout<<"離開"<<"\n"<<endl;
                                                    q=-1;
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 4:{
                                        cout<<"熱可可"<<"\n"<<"數量: ";
                                        cout<<d[0];
                                        cout<<"\n"<<"價格/份: ";
                                        cout<<d[1];
                                        cout<<"\n"<<"成本/份: ";
                                        cout<<d[2];
                                        d[3]=d[1]-d[2];
                                        cout<<"\n"<<"利潤/份: "<<d[3]<<endl;
                                        int q=-10;
                                        while(q!=-1){
                                            cout<<"1:進貨 0:離開"<<"\n"<<">>"<<endl;
                                            cin>>q;
                                            switch(q){
                                                default:{
                                                    cout<<"請輸入存在的選項!!!"<<endl;
                                                    break;
                                                }
                                                case 1:{
                                                    cout<<"數量: "<<"\n"<<">"<<endl;
                                                    int l=0;
                                                    cin>>l;
                                                    d[0]+=l;
                                                    cout<<"總數: "<<d[0]<<endl;
                                                    break;
                                                }
                                                case 0:{
                                                    cout<<"離開"<<"\n"<<endl;
                                                    q=-1;
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 0:{
                                        k=-1;
                                        cout<<"離開"<<"\n"<<endl;
                                        break;
                                    }
                                }
                            }
                    break;
                    }
                    case 2:{
                        cout<<"2 備貨(定價(第一次進貨))"<<endl;

                        int r=10;
                        while(r!=-1){
                            cout<<"1:烤麻糬 2:烤棉花糖 3:草莓吐司加蛋 4:熱可可 0:離開"<<"\n"<<">>";
                            cin>>r;
                            switch (r){
                                default:{
                                    cout<<"請輸入存在的選項!!!"<<endl;
                                    break;
                                }
                                case 1:{
                                    cout<<"烤麻糬"<<"\n"<<"數量: ";
                                    int w=0;
                                    cin>>w;
                                    a[0]+=w;

                                    cout<<"價格/份: ";
                                    cin>>a[1];
                                    cout<<"成本/份: ";
                                    cin>>a[2];
                                    a[3]=a[1]-a[2];
                                    cout<<"利潤/份: "<<a[3]<<"\n"<<endl;
                                    break;
                                }
                                case 2:{
                                    cout<<"烤棉花糖"<<"\n"<<"數量: ";
                                    int w=0;
                                    cin>>w;
                                    b[0]+=w;

                                    cout<<"價格/份: ";
                                    cin>>b[1];
                                    cout<<"成本/份: ";
                                    cin>>b[2];
                                    b[3]=b[1]-b[2];
                                    cout<<"利潤/份: "<<b[3]<<"\n"<<endl;
                                    break;
                                }
                                case 3:{
                                    cout<<"草莓吐司加蛋"<<"\n"<<"數量: ";
                                    int w=0;
                                    cin>>w;
                                    c[0]+=w;

                                    cout<<"價格/份:";
                                    cin>>c[1];
                                    cout<<"成本/份: ";
                                    cin>>c[2];
                                    c[3]=c[1]-c[2];
                                    cout<<"利潤/份: "<<c[3]<<"\n"<<endl;
                                    break;
                                }
                                case 4:{
                                    cout<<"熱可可"<<"\n"<<"數量: ";
                                    int w=0;
                                    cin>>w;
                                    d[0]+=w;

                                    cout<<"價格/份:";
                                    cin>>d[1];
                                    cout<<"成本/份: ";
                                    cin>>d[2];
                                    d[3]=d[1]-d[2];
                                    cout<<"利潤/份: "<<d[3]<<"\n"<<endl;
                                    break;
                                }
                                case 0:{
                                    cout<<"離開"<<"\n"<<endl;
                                    r=-1;
                                    break;
                                }

                            }

                        }
                        break;
                    }
                    case 3:{
                        cout<<"3 今日總計"<<endl;
                        cout<<"烤麻糬         賣出: "<<atm<<" 個"<<"\t"<<"獲利: "<<atp<<" 元"<<"\t"<<"剩餘: "<<a[0]<<" 個"<<endl;
                        cout<<"烤棉花糖       賣出: "<<btm<<" 個"<<"\t"<<"獲利: "<<btp<<" 元"<<"\t"<<"剩餘: "<<b[0]<<" 個"<<endl;
                        cout<<"草莓吐司加蛋   賣出: "<<ctm<<" 個"<<"\t"<<"獲利: "<<ctp<<" 元"<<"\t"<<"剩餘: "<<c[0]<<" 個"<<endl;
                        cout<<"烤棉花糖       賣出: "<<dtm<<" 個"<<"\t"<<"獲利: "<<dtp<<" 元"<<"\t"<<"剩餘: "<<d[0]<<" 個"<<endl;
                        cout<<"共獲利: "<<atp+btp+ctp+dtp<<" 元"<<"\n"<<"離開"<<"\n"<<endl;
                        break;
                    }
                    case 0:{
                        f=-1;
                        cout<<"離開"<<"\n"<<endl;
                        break;
                    }

                }
            }
            break;
        }
        }
    }
}




