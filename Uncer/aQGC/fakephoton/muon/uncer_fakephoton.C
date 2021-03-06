void uncer_fakephoton(){
	ofstream f1("./RunIIaQGC_fake_uncer.txt");
	TFile* file = new TFile("./aa.root");
	TH1D* h1 = (TH1D*)file->Get("mu");
	TH1D* h2 = (TH1D*)file->Get("mu_up");
	TH1D* h3 = (TH1D*)file->Get("mu_down");

/*	
	ofstream f1("./Uncertainty_2.txt");
 	TFile* file = new TFile("./output.root");
	TH1D* h1 = (TH1D*)file->Get("mjj_new");
	TH1D* h2 = (TH1D*)file->Get("mjj_JEC_up");
	TH1D* h3 = (TH1D*)file->Get("mjj_JEC_down");
*/
        const int bins=h1->GetNbinsX();
	Double_t bincontent_new[bins],bincontent_up[bins],bincontent_down[bins];
	Double_t uncer[bins];
		 for(Int_t i=0;i<h1->GetNbinsX();i++){
			 bincontent_new[i] = h1->GetBinContent(i+1);
			 bincontent_up[i] = h2->GetBinContent(i+1);
			 bincontent_down[i] = h3->GetBinContent(i+1);
                         if(bincontent_new[i]>0)
				 uncer[i] = fabs(bincontent_up[i]-bincontent_down[i])/2/bincontent_new[i];
                         else
                                 uncer[i] = 0;
//			 cout<<"new "<<bincontent_new[i]<<"; up "<<bincontent_up[i]<<"; down "<<bincontent_down[i]<<endl;
			 cout<<fixed<<setprecision(2)<<1+uncer[i]<<",";
			 f1<<uncer[i]<<endl;
		 }
		 cout<<endl;
}
