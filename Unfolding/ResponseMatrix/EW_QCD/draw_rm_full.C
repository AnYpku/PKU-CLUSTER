#include "CMS_lumi.C"
void cmsLumi()
{       
        TLatex latex;
        latex.SetNDC();
        latex.SetTextSize(0.04);
        latex.SetLineWidth(2);
        float lumiel=137.1;
        float lumimu=137.1;
        int beamcomenergytev=13;
        latex.SetTextAlign(31);
        latex.SetTextAlign(11);
        latex.SetTextSize(0.06);
        latex.DrawLatex(0.5,0.8,"Preliminary");
        latex.DrawLatex(0.5,0.8,"CMS");
//        latex.SetTextSize(0.06);
//        latex.DrawLatex(0.76,0.92,Form("137.1 fb^{-1} (%d TeV)", (beamcomenergytev)));
}
TH2D*run(TString var,int num){
	TFile*file1=new TFile("/home/pku/anying/cms/PKU-Cluster/Unfolding/common/root/hist_ZA-EWK_"+var+"16.root");
	TFile*file2=new TFile("/home/pku/anying/cms/PKU-Cluster/Unfolding/common/root/hist_ZA-EWK_"+var+"17.root");
	TFile*file3=new TFile("/home/pku/anying/cms/PKU-Cluster/Unfolding/common/root/hist_ZA-EWK_"+var+"18.root");
	TFile*f1=new TFile("/home/pku/anying/cms/PKU-Cluster/Unfolding/common/EW_QCD/root/hist_ZA_"+var+"16.root");
	TFile*f2=new TFile("/home/pku/anying/cms/PKU-Cluster/Unfolding/common/EW_QCD/root/hist_ZA_"+var+"17.root");
	TFile*f3=new TFile("/home/pku/anying/cms/PKU-Cluster/Unfolding/common/EW_QCD/root/hist_ZA_"+var+"18.root");
	TH1D*h2 =(TH1D*)file1->Get("histGen_"+var);
	TH1D*h21=(TH1D*)file2->Get("histGen_"+var);
	TH1D*h22=(TH1D*)file3->Get("histGen_"+var);
        h2->Add(h21,1);h2->Add(h22,1);

	TH1D*hh2 =(TH1D*)f1->Get("histGen_"+var);
	TH1D*hh21=(TH1D*)f2->Get("histGen_"+var);
	TH1D*hh22=(TH1D*)f3->Get("histGen_"+var);
        hh2->Add(hh21,1);hh2->Add(hh22,1);
        h2->Add(hh2,1);
        const int binx=h2->GetNbinsX();
        TH1D*h1[num];TH1D*h11[num];TH1D*h12[num];
        TH1D*hh1[num];TH1D*hh11[num];TH1D*hh12[num];
	for(int i=0;i<binx;i++){
		h1[i] =(TH1D*)file1->Get(var+Form("_%i",i));
		h11[i]=(TH1D*)file2->Get(var+Form("_%i",i));
		h12[i]=(TH1D*)file3->Get(var+Form("_%i",i));
                h1[i]->Add(h11[i],1);h1[i]->Add(h12[i],1);
		hh1[i] =(TH1D*)f1->Get(var+Form("_%i",i));
		hh11[i]=(TH1D*)f2->Get(var+Form("_%i",i));
		hh12[i]=(TH1D*)f3->Get(var+Form("_%i",i));
                hh1[i]->Add(hh11[i],1);hh1[i]->Add(hh12[i],1);
                
                h1[i]->Add(hh1[i],1);
	}
        
        TH2D*hout=new TH2D("hout","",num,0,num,num,0,num);
        for(int i=0;i<binx;i++){
		for(int j=0;j<binx;j++){
                    double element=h1[i]->GetBinContent(j+1)/h2->GetBinContent(j+1);
                    hout->SetBinContent(i+1,j+1,element);
		}
	}
return hout;
}
int draw_rm_full(){
	vector<TString> genvars={"genlep1pt","genphotonet","genjet1pt","genMjj"};
        vector<TString> title={"p_{T}^{l_{1}}","p_{T}^{#gamma}","p_{T}^{j_{1}}","M_{jj}"};
	vector<vector<double>> bins;
	vector<double> ptlepBins={20,80,120,200,400};
	vector<double> photonEtBins={20,80,120,200,400};
	vector<double> jetptBins={30,150,250,350,800};
       const char *name[7]={"0.5~0.8","0.8~1.2","1.2~2","0.5~0.8","0.8~1.2","1.2~2","0.5~2"};
	bins.push_back(ptlepBins);
	bins.push_back(photonEtBins);
	bins.push_back(jetptBins);
	vector<int> num={4,4,4,7};
	vector<TString> tag={"16","17","18"};
	for(int i=0;i<genvars.size();i++){
		TH2D*h1=run(genvars[i],num[i]);
		TFile*file=new TFile("rm_"+genvars[i]+"_full.root","recreate");
		file->cd();
		h1->Write();
		file->Close();
		TCanvas *c1  = new TCanvas("c1","c1",0,0,600,400);
		TPad*    fPads1 = new TPad("pad1", "", 0.00, 0., 0.99, 0.99);
		fPads1->Draw();
		fPads1->cd();
		fPads1->SetBottomMargin(0.2);
		Int_t palette[5];
		palette[0] = 19;
		palette[1] = 20;
		palette[2] = 23;
		palette[3] = 30;
		palette[4] = 32;
		gStyle->SetPalette(5,palette);
		gStyle->SetOptStat(0);
		for(int j=0;j<h1->GetNbinsX();j++){
                   if(genvars[i].Contains("Mjj")==0){
			   fPads1->SetLeftMargin(0.2);
			   h1->GetYaxis()->SetBinLabel(j+1,Form("[%0.f,%0.f]",bins[i][j],bins[i][j+1]));
			   h1->GetXaxis()->SetBinLabel(j+1,Form("[%0.f,%0.f]",bins[i][j],bins[i][j+1]));
			   h1->GetYaxis()->SetTitle("Gen "+title[i]+" [GeV]");
			   h1->GetXaxis()->SetTitle("Reco "+title[i]+" [GeV]");
			   h1->GetYaxis()->SetTitleOffset(1.25);
			   h1->GetXaxis()->SetTitleOffset(0.9);
		   }
		   else{
			   fPads1->SetLeftMargin(0.15);
			   h1->GetXaxis()->SetBinLabel(j+1,name[j]);
			   h1->GetYaxis()->SetBinLabel(j+1,name[j]);
			   h1->GetYaxis()->SetTitle("Gen "+title[i]+" [TeV]");
			   h1->GetXaxis()->SetTitle("Reco "+title[i]+"[TeV]");
			   h1->GetYaxis()->SetTitleOffset(1);
			   h1->GetXaxis()->SetTitleOffset(1);
		   }
		   h1->GetYaxis()->SetTitleSize(0.07);
		   h1->GetXaxis()->SetTitleSize(0.07);
		   h1->GetYaxis()->SetTitleFont(22);
		   h1->GetXaxis()->SetTitleFont(22);
		   h1->GetYaxis()->SetLabelFont(12);
		   h1->GetXaxis()->SetLabelFont(12);
		   h1->GetYaxis()->SetLabelOffset(0.001);
		   h1->GetYaxis()->SetLabelSize(0.07);
		   h1->GetXaxis()->SetLabelSize(0.07);
		}
		h1->Draw("colz");
		TLine* vline1 = new TLine(h1->GetXaxis()->GetBinLowEdge(4),0,h1->GetXaxis()->GetBinLowEdge(4),7);
		TLine* vline2 = new TLine(h1->GetXaxis()->GetBinLowEdge(7),0,h1->GetXaxis()->GetBinLowEdge(7),7);
		vline1->SetLineStyle(2);
		vline2->SetLineStyle(2);
		vline1->SetLineWidth(2);
		vline2->SetLineWidth(2);
		CMS_lumi(fPads1, 4, 0, "137.1");
		if(genvars[i].Contains("Mjj")){
			TLatex latex1;
			latex1.SetTextSize(0.065);
			latex1.SetLineWidth(2);
			latex1.DrawLatex(0.08,2.5,"2.5<#Delta#eta_{jj}<4.5");
			latex1.DrawLatex(3.8,2.5,"4.5<#Delta#eta_{jj}<6");
			latex1.DrawLatex(6,2.5,"#Delta#eta_{jj}>6");
			vline1->Draw();
			vline2->Draw();
		}
		c1->Print("rm_"+genvars[i]+"_full.pdf");
	}
	return 0;
}
