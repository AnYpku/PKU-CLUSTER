#include "TH2.h"
#include "TFile.h"
#include "TTree.h"
#include <string>
#define num 3

using namespace std;

TH2D*th2[num];
void run(std::string filename);
void run(std::string filename){

	std::string file = filename;
	TFile* f1 = TFile::Open(file.c_str());

//	TTree* t = (TTree*)f1->Get("demo");
//	TTree* t = (TTree*)f1->Get("ZPKUCandidates");
	TTree* t = (TTree*)f1->Get("outtree");

	Double_t Mjj,zepp,delta_phi;
	Double_t detajj;
    Double_t ZGmass,lumiWeight,scalef,pweight[703],pileupWeight;
//  Double_t pileupWeight;
    Double_t actualWeight[num];
    Int_t lep;Double_t photoneta;
    Double_t npT;
    t->SetBranchAddress("lep",&lep);
    t->SetBranchAddress("npT",&npT);
    t->SetBranchAddress("photoneta", &photoneta);
    t->SetBranchAddress("Mjj", &Mjj);
    t->SetBranchAddress("zepp", &zepp);
    t->SetBranchAddress("delta_phi", &delta_phi);
    t->SetBranchAddress("deltaetajj", &detajj);
    t->SetBranchAddress("pweight", pweight);
    t->SetBranchAddress("pileupWeight",&pileupWeight);
    t->SetBranchAddress("scalef", &scalef);
    t->SetBranchAddress("ZGmass", &ZGmass);
    t->SetBranchAddress("lumiWeight", &lumiWeight);

    TFile * input13 = new TFile ("./pu_calc/puweight.root");
    TH1* h13 = NULL;
    input13->GetObject("h2",h13);

    Double_t mjj_bins[2]={150,500};
    Double_t detajj_bins[2]={0,  6.5};
    char th2name[num];
    for(Int_t i=0;i<num;i++){
       sprintf(th2name,"th2_%d",i);
	   th2[i] = new TH2D(th2name,th2name,1, mjj_bins, 1, detajj_bins);
	   th2[i]->Sumw2();}
    Int_t p;
    bool flag=false;
    if(num==7) flag = true;
    int count=0;
	for(Int_t j=0; j<t->GetEntries();j++)
	{
		p=0;
		t->GetEntry(j);
//		cout<<npT<<endl;
//		pileupWeight=h13->GetBinContent(h13->GetXaxis()->FindBin(npT));
		if( !( Mjj>150 && Mjj<500 && ZGmass>100 ) ) continue;
		count++;
		for(Int_t i=0;i<3;i++){
			  actualWeight[p]=scalef*lumiWeight*pweight[i]*pileupWeight;
			if(Mjj<500 && detajj<6.5) th2[p]->Fill(Mjj, detajj, actualWeight[p]);
			if(Mjj<500 && detajj>=6.5) th2[p]->Fill(Mjj, 6.1, actualWeight[p]);
			p++;
		}
		cout<<"p = "<<p<<endl;
		cout<<"entry "<<count<<endl;
		cout<<"scalef = "<<scalef<<endl;
		cout<<"pileupWeight = "<<pileupWeight<<endl;
		for(Int_t k=0;k<3;k++){
			cout<<"pweight ["<<k<<"] = "<<pweight[k]<<endl;
		}
		for(Int_t k=0;k<num;k++){
			cout<<"actualWeight ["<<k<<"] = "<<actualWeight[k]<<endl;
		}
		cout<<"######################################"<<endl;
	}
	//  return 0;
	cout<<"nentries "<<count<<endl;
}

int d_hist(){
//	run("/home/pku/anying/cms/file_in_cms/files_weighted/outZA-mu-ele_nozepp.root");
//	run("/home/pku/anying/cms/file_in_cms/files_weighted/outZA-mu-ele.root");
	run("/afs/cern.ch/user/y/yian/work/PKU-Cluster/RunII2016/aa2/ScalSeq/output-slimmed-rootfiles/optimal_2016_ZA-EWK-pweight.root");
	TFile* f5=new TFile("th2-histo.root","RECREATE");
    for(Int_t i=0;i<num;i++){
	   th2[i]->Write();}
	f5->Close();
    return 0;
	
}
