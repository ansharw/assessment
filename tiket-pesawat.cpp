#include <iostream>
#include <string>

using namespace std;
main()

{
    string nama_pesawat,jenis_penerbangan,kode_pesawat,jenis_terbang,jenis_t;
    long jumlah_beli,harga,ppn,ttl_byr;
    cout<<endl;
    cout<<"                         AGEN TIKET PESAWAT              "   ;cout<<endl;
    cout<<endl;
    cout<<"=========================================================";
    cout<<endl;
    cout<<  "Kode Pesawat   [L/G/A]     :";cin>>kode_pesawat;
    cout<<  "Jenis Penerbangan [D/I]    :";cin>>jenis_terbang;
    cout<<  "Jumlah Tiket               :";cin>>jumlah_beli;
    cout<<endl;
    cout<<"=========================================================";

if (kode_pesawat=="L"){nama_pesawat="city link";
if (jenis_terbang=="D"){jenis_t="domestik";harga=400000;}
    else if
    (jenis_terbang=="I"){jenis_t="internasional";harga=800000;}
}

if (kode_pesawat=="G"){nama_pesawat="garuda";
if (jenis_terbang=="D"){jenis_t="domestik";harga=800000;}
    else if
    (jenis_terbang=="I"){jenis_t="internasional";harga=700000;}
}

if (kode_pesawat=="A"){nama_pesawat="air asia";
if (jenis_terbang=="D"){jenis_t="domestik";harga=500000;}
    else if
    (jenis_terbang=="I"){jenis_t="internasional";harga=300000;}
}

    cout<<endl;
    cout<<"             Nama Pesawat            :   "<<nama_pesawat<<endl;
    cout<<"             Jenis Penerbangan       :   "<<jenis_t<<endl;
    cout<<"             Harga Tiket             :   "<<harga<<endl;
        if (jumlah_beli > 3){ppn=0.3*harga;}
            else {ppn=0;}

    cout<<"             PPN                     :   "<<ppn<<endl;
    ttl_byr=harga*jumlah_beli+ppn;
    cout<<"             total bayar             :   "<<ttl_byr<<endl;
    cout<<"=============================================================="<<endl<<endl;
}

