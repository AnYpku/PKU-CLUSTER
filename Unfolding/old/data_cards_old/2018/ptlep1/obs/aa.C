void aa()
{
//=========Macro generated from canvas: /
//=========  (Thu Nov 14 01:46:19 2019) by ROOT version6.06/09
   TCanvas * = new TCanvas("", "",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0,0,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-51.25,-85.41321,423.75,571.6115);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.15);
   pad1->SetRightMargin(0.05);
   pad1->SetBottomMargin(0.13);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   Double_t xAxis1[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1","",5, xAxis1);
   hs_stack_1->SetMinimum(0);
   hs_stack_1->SetMaximum(512.4793);
   hs_stack_1->SetDirectory(0);
   hs_stack_1->SetStats(0);
   hs_stack_1->SetLineStyle(0);
   hs_stack_1->SetLineWidth(2);
   hs_stack_1->SetMarkerStyle(20);
   hs_stack_1->GetXaxis()->SetBinLabel(1,"20~50");
   hs_stack_1->GetXaxis()->SetBinLabel(2,"50~80");
   hs_stack_1->GetXaxis()->SetBinLabel(3,"80~120");
   hs_stack_1->GetXaxis()->SetBinLabel(4,"120~200");
   hs_stack_1->GetXaxis()->SetBinLabel(5,"200~400");
   hs_stack_1->GetXaxis()->SetLabelFont(42);
   hs_stack_1->GetXaxis()->SetLabelOffset(0.007);
   hs_stack_1->GetXaxis()->SetTitleSize(0.06);
   hs_stack_1->GetXaxis()->SetTitleOffset(0.9);
   hs_stack_1->GetXaxis()->SetTitleFont(42);
   hs_stack_1->GetYaxis()->SetTitle("Events /bin");
   hs_stack_1->GetYaxis()->SetLabelFont(42);
   hs_stack_1->GetYaxis()->SetLabelOffset(0.007);
   hs_stack_1->GetYaxis()->SetTitleSize(0.06);
   hs_stack_1->GetYaxis()->SetTitleOffset(0.8);
   hs_stack_1->GetYaxis()->SetTitleFont(42);
   hs_stack_1->GetZaxis()->SetLabelFont(42);
   hs_stack_1->GetZaxis()->SetLabelOffset(0.007);
   hs_stack_1->GetZaxis()->SetTitleSize(0.06);
   hs_stack_1->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_1);
   
   Double_t xAxis2[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist__1 = new TH1D("hist__1","ST		 20<leading p_{T}^{reco}<400  reco && gen",5, xAxis2);
   hist__1->SetBinContent(1,0.4289798);
   hist__1->SetBinContent(2,0.2144899);
   hist__1->SetBinContent(3,0.4850079);
   hist__1->SetBinContent(4,0.270518);
   hist__1->SetBinError(1,0.3033345);
   hist__1->SetBinError(2,0.2144899);
   hist__1->SetBinError(3,0.3452331);
   hist__1->SetBinError(4,0.270518);
   hist__1->SetEntries(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   hist__1->SetFillColor(ci);

   ci = TColor::GetColor("#00ff00");
   hist__1->SetLineColor(ci);

   ci = TColor::GetColor("#00ff00");
   hist__1->SetMarkerColor(ci);
   hist__1->GetXaxis()->SetTitle("leding p_{T}^{reco}");
   hist__1->GetXaxis()->SetBinLabel(1,"20~50");
   hist__1->GetXaxis()->SetBinLabel(2,"50~80");
   hist__1->GetXaxis()->SetBinLabel(3,"80~120");
   hist__1->GetXaxis()->SetBinLabel(4,"120~200");
   hist__1->GetXaxis()->SetBinLabel(5,"200~400");
   hist__1->GetXaxis()->SetLabelFont(42);
   hist__1->GetXaxis()->SetLabelSize(0.035);
   hist__1->GetXaxis()->SetTitleSize(0.035);
   hist__1->GetXaxis()->SetTitleFont(42);
   hist__1->GetYaxis()->SetTitle("yields");
   hist__1->GetYaxis()->SetLabelFont(42);
   hist__1->GetYaxis()->SetLabelSize(0.035);
   hist__1->GetYaxis()->SetTitleSize(0.035);
   hist__1->GetYaxis()->SetTitleOffset(0);
   hist__1->GetYaxis()->SetTitleFont(42);
   hist__1->GetZaxis()->SetLabelFont(42);
   hist__1->GetZaxis()->SetLabelSize(0.035);
   hist__1->GetZaxis()->SetTitleSize(0.035);
   hist__1->GetZaxis()->SetTitleFont(42);
   hs->Add(hist,"");
   Double_t xAxis3[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist__2 = new TH1D("hist__2","TTA		 20<leading p_{T}^{reco}<400  reco && gen",5, xAxis3);
   hist__2->SetBinContent(1,2.728499);
   hist__2->SetBinContent(2,5.067212);
   hist__2->SetBinContent(3,1.429214);
   hist__2->SetBinContent(4,0.259857);
   hist__2->SetBinError(1,1.014774);
   hist__2->SetBinError(2,1.252985);
   hist__2->SetBinError(3,0.9094996);
   hist__2->SetBinError(4,0.486148);
   hist__2->SetBinError(5,0.1837467);
   hist__2->SetEntries(219);

   ci = TColor::GetColor("#00ffff");
   hist__2->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   hist__2->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   hist__2->SetMarkerColor(ci);
   hist__2->GetXaxis()->SetTitle("leding p_{T}^{reco}");
   hist__2->GetXaxis()->SetBinLabel(1,"20~50");
   hist__2->GetXaxis()->SetBinLabel(2,"50~80");
   hist__2->GetXaxis()->SetBinLabel(3,"80~120");
   hist__2->GetXaxis()->SetBinLabel(4,"120~200");
   hist__2->GetXaxis()->SetBinLabel(5,"200~400");
   hist__2->GetXaxis()->SetLabelFont(42);
   hist__2->GetXaxis()->SetLabelSize(0.035);
   hist__2->GetXaxis()->SetTitleSize(0.035);
   hist__2->GetXaxis()->SetTitleFont(42);
   hist__2->GetYaxis()->SetTitle("yields");
   hist__2->GetYaxis()->SetLabelFont(42);
   hist__2->GetYaxis()->SetLabelSize(0.035);
   hist__2->GetYaxis()->SetTitleSize(0.035);
   hist__2->GetYaxis()->SetTitleOffset(0);
   hist__2->GetYaxis()->SetTitleFont(42);
   hist__2->GetZaxis()->SetLabelFont(42);
   hist__2->GetZaxis()->SetLabelSize(0.035);
   hist__2->GetZaxis()->SetTitleSize(0.035);
   hist__2->GetZaxis()->SetTitleFont(42);
   hs->Add(hist,"");
   Double_t xAxis4[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist__3 = new TH1D("hist__3","VV		 20<leading p_{T}^{reco}<400  reco && gen",5, xAxis4);
   hist__3->SetBinContent(1,0.7385266);
   hist__3->SetBinContent(2,2.63262);
   hist__3->SetBinContent(3,1.251121);
   hist__3->SetBinContent(4,1.989648);
   hist__3->SetBinContent(5,1.155567);
   hist__3->SetBinError(1,0.5222172);
   hist__3->SetBinError(2,0.9960196);
   hist__3->SetBinError(3,0.7223351);
   hist__3->SetBinError(4,0.8913354);
   hist__3->SetBinError(5,0.6683064);
   hist__3->SetEntries(20);

   ci = TColor::GetColor("#6666cc");
   hist__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666cc");
   hist__3->SetLineColor(ci);

   ci = TColor::GetColor("#6666cc");
   hist__3->SetMarkerColor(ci);
   hist__3->GetXaxis()->SetTitle("leding p_{T}^{reco}");
   hist__3->GetXaxis()->SetBinLabel(1,"20~50");
   hist__3->GetXaxis()->SetBinLabel(2,"50~80");
   hist__3->GetXaxis()->SetBinLabel(3,"80~120");
   hist__3->GetXaxis()->SetBinLabel(4,"120~200");
   hist__3->GetXaxis()->SetBinLabel(5,"200~400");
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetLabelSize(0.035);
   hist__3->GetXaxis()->SetTitleSize(0.035);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetTitle("yields");
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetLabelSize(0.035);
   hist__3->GetYaxis()->SetTitleSize(0.035);
   hist__3->GetYaxis()->SetTitleOffset(0);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetLabelSize(0.035);
   hist__3->GetZaxis()->SetTitleSize(0.035);
   hist__3->GetZaxis()->SetTitleFont(42);
   hs->Add(hist,"");
   Double_t xAxis5[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist__4 = new TH1D("hist__4","WA		 20<leading p_{T}^{reco}<400  reco && gen",5, xAxis5);

   ci = TColor::GetColor("#000099");
   hist__4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hist__4->SetLineColor(ci);

   ci = TColor::GetColor("#000099");
   hist__4->SetMarkerColor(ci);
   hist__4->GetXaxis()->SetTitle("leding p_{T}^{reco}");
   hist__4->GetXaxis()->SetBinLabel(1,"20~50");
   hist__4->GetXaxis()->SetBinLabel(2,"50~80");
   hist__4->GetXaxis()->SetBinLabel(3,"80~120");
   hist__4->GetXaxis()->SetBinLabel(4,"120~200");
   hist__4->GetXaxis()->SetBinLabel(5,"200~400");
   hist__4->GetXaxis()->SetLabelFont(42);
   hist__4->GetXaxis()->SetLabelSize(0.035);
   hist__4->GetXaxis()->SetTitleSize(0.035);
   hist__4->GetXaxis()->SetTitleFont(42);
   hist__4->GetYaxis()->SetTitle("yields");
   hist__4->GetYaxis()->SetLabelFont(42);
   hist__4->GetYaxis()->SetLabelSize(0.035);
   hist__4->GetYaxis()->SetTitleSize(0.035);
   hist__4->GetYaxis()->SetTitleOffset(0);
   hist__4->GetYaxis()->SetTitleFont(42);
   hist__4->GetZaxis()->SetLabelFont(42);
   hist__4->GetZaxis()->SetLabelSize(0.035);
   hist__4->GetZaxis()->SetTitleSize(0.035);
   hist__4->GetZaxis()->SetTitleFont(42);
   hs->Add(hist,"");
   Double_t xAxis6[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist__5 = new TH1D("hist__5","plj		 20<leading p_{T}^{reco}<400  reco && gen",5, xAxis6);
   hist__5->SetBinContent(1,211.8315);
   hist__5->SetBinContent(2,257.9044);
   hist__5->SetBinContent(3,111.7903);
   hist__5->SetBinContent(4,41.17417);
   hist__5->SetBinContent(5,13.16508);
   hist__5->SetBinError(1,7.815675);
   hist__5->SetBinError(2,8.487719);
   hist__5->SetBinError(3,5.41518);
   hist__5->SetBinError(4,3.283083);
   hist__5->SetBinError(5,1.871036);
   hist__5->SetEntries(2510);

   ci = TColor::GetColor("#ffff00");
   hist__5->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   hist__5->SetLineColor(ci);

   ci = TColor::GetColor("#ffff00");
   hist__5->SetMarkerColor(ci);
   hist__5->GetXaxis()->SetTitle("leding p_{T}^{reco}");
   hist__5->GetXaxis()->SetBinLabel(1,"20~50");
   hist__5->GetXaxis()->SetBinLabel(2,"50~80");
   hist__5->GetXaxis()->SetBinLabel(3,"80~120");
   hist__5->GetXaxis()->SetBinLabel(4,"120~200");
   hist__5->GetXaxis()->SetBinLabel(5,"200~400");
   hist__5->GetXaxis()->SetLabelFont(42);
   hist__5->GetXaxis()->SetLabelSize(0.035);
   hist__5->GetXaxis()->SetTitleSize(0.035);
   hist__5->GetXaxis()->SetTitleFont(42);
   hist__5->GetYaxis()->SetTitle("yields");
   hist__5->GetYaxis()->SetLabelFont(42);
   hist__5->GetYaxis()->SetLabelSize(0.035);
   hist__5->GetYaxis()->SetTitleSize(0.035);
   hist__5->GetYaxis()->SetTitleOffset(0);
   hist__5->GetYaxis()->SetTitleFont(42);
   hist__5->GetZaxis()->SetLabelFont(42);
   hist__5->GetZaxis()->SetLabelSize(0.035);
   hist__5->GetZaxis()->SetTitleSize(0.035);
   hist__5->GetZaxis()->SetTitleFont(42);
   hs->Add(hist,"");
   Double_t xAxis7[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist__6 = new TH1D("hist__6","ZA		 20<leading p_{T}^{reco}<400  reco && gen",5, xAxis7);
   hist__6->SetBinContent(1,69.31339);
   hist__6->SetBinContent(2,173.2835);
   hist__6->SetBinContent(3,93.04569);
   hist__6->SetBinContent(4,53.11515);
   hist__6->SetBinContent(5,21.09538);
   hist__6->SetBinError(1,6.235548);
   hist__6->SetBinError(2,9.995066);
   hist__6->SetBinError(3,7.581006);
   hist__6->SetBinError(4,6.109099);
   hist__6->SetBinError(5,3.841634);
   hist__6->SetEntries(1750);

   ci = TColor::GetColor("#ff00ff");
   hist__6->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   hist__6->SetLineColor(ci);

   ci = TColor::GetColor("#ff00ff");
   hist__6->SetMarkerColor(ci);
   hist__6->GetXaxis()->SetTitle("leding p_{T}^{reco}");
   hist__6->GetXaxis()->SetBinLabel(1,"20~50");
   hist__6->GetXaxis()->SetBinLabel(2,"50~80");
   hist__6->GetXaxis()->SetBinLabel(3,"80~120");
   hist__6->GetXaxis()->SetBinLabel(4,"120~200");
   hist__6->GetXaxis()->SetBinLabel(5,"200~400");
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetLabelSize(0.035);
   hist__6->GetXaxis()->SetTitleSize(0.035);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetTitle("yields");
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetLabelSize(0.035);
   hist__6->GetYaxis()->SetTitleSize(0.035);
   hist__6->GetYaxis()->SetTitleOffset(0);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetLabelSize(0.035);
   hist__6->GetZaxis()->SetTitleSize(0.035);
   hist__6->GetZaxis()->SetTitleFont(42);
   hs->Add(hist,"");
   Double_t xAxis8[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist__7 = new TH1D("hist__7","ZA-EWK		 20<leading p_{T}^{reco}<400  reco && gen",5, xAxis8);
   hist__7->SetBinContent(1,10.88795);
   hist__7->SetBinContent(2,44.22667);
   hist__7->SetBinContent(3,30.18932);
   hist__7->SetBinContent(4,21.95587);
   hist__7->SetBinContent(5,10.16809);
   hist__7->SetBinError(1,0.4959283);
   hist__7->SetBinError(2,0.9999867);
   hist__7->SetBinError(3,0.8259347);
   hist__7->SetBinError(4,0.7056645);
   hist__7->SetBinError(5,0.4793235);
   hist__7->SetEntries(5248);

   ci = TColor::GetColor("#ff3333");
   hist__7->SetFillColor(ci);

   ci = TColor::GetColor("#ff3333");
   hist__7->SetLineColor(ci);

   ci = TColor::GetColor("#ff3333");
   hist__7->SetMarkerColor(ci);
   hist__7->SetMarkerStyle(21);
   hist__7->GetXaxis()->SetTitle("leding p_{T}^{reco}");
   hist__7->GetXaxis()->SetBinLabel(1,"20~50");
   hist__7->GetXaxis()->SetBinLabel(2,"50~80");
   hist__7->GetXaxis()->SetBinLabel(3,"80~120");
   hist__7->GetXaxis()->SetBinLabel(4,"120~200");
   hist__7->GetXaxis()->SetBinLabel(5,"200~400");
   hist__7->GetXaxis()->SetLabelFont(42);
   hist__7->GetXaxis()->SetLabelSize(0.035);
   hist__7->GetXaxis()->SetTitleSize(0.035);
   hist__7->GetXaxis()->SetTitleFont(42);
   hist__7->GetYaxis()->SetTitle("yields");
   hist__7->GetYaxis()->SetLabelFont(42);
   hist__7->GetYaxis()->SetLabelSize(0.035);
   hist__7->GetYaxis()->SetTitleSize(0.035);
   hist__7->GetYaxis()->SetTitleFont(42);
   hist__7->GetZaxis()->SetLabelFont(42);
   hist__7->GetZaxis()->SetLabelSize(0.035);
   hist__7->GetZaxis()->SetTitleSize(0.035);
   hist__7->GetZaxis()->SetTitleFont(42);
   hs->Add(hist,"");
   Double_t xAxis9[6] = {20, 50, 80, 120, 200, 400}; 
   
   TH1D *hist3__8 = new TH1D("hist3__8","ZA-EWK		 20<leading p_{T}^{reco}<400 reco out of gen",5, xAxis9);
   hist3__8->SetBinContent(1,1.957131);
   hist3__8->SetBinContent(2,4.746606);
   hist3__8->SetBinContent(3,2.789475);
   hist3__8->SetBinContent(4,1.91214);
   hist3__8->SetBinContent(5,0.9223263);
   hist3__8->SetBinError(1,0.2098265);
   hist3__8->SetBinError(2,0.3267698);
   hist3__8->SetBinError(3,0.2505022);
   hist3__8->SetBinError(4,0.2074007);
   hist3__8->SetBinError(5,0.1440432);
   hist3__8->SetEntries(548);

   ci = TColor::GetColor("#ffcc00");
   hist3__8->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hist3__8->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hist3__8->SetMarkerColor(ci);
   hist3__8->SetMarkerStyle(21);
   hist3__8->GetXaxis()->SetTitle("leding p_{T}^{gen}");
   hist3__8->GetXaxis()->SetBinLabel(1,"20~50");
   hist3__8->GetXaxis()->SetBinLabel(2,"50~80");
   hist3__8->GetXaxis()->SetBinLabel(3,"80~120");
   hist3__8->GetXaxis()->SetBinLabel(4,"120~200");
   hist3__8->GetXaxis()->SetBinLabel(5,"200~400");
   hist3__8->GetXaxis()->SetLabelFont(42);
   hist3__8->GetXaxis()->SetLabelSize(0.035);
   hist3__8->GetXaxis()->SetTitleSize(0.035);
   hist3__8->GetXaxis()->SetTitleFont(42);
   hist3__8->GetYaxis()->SetTitle("yields");
   hist3__8->GetYaxis()->SetLabelFont(42);
   hist3__8->GetYaxis()->SetLabelSize(0.035);
   hist3__8->GetYaxis()->SetTitleSize(0.035);
   hist3__8->GetYaxis()->SetTitleFont(42);
   hist3__8->GetZaxis()->SetLabelFont(42);
   hist3__8->GetZaxis()->SetLabelSize(0.035);
   hist3__8->GetZaxis()->SetTitleSize(0.035);
   hist3__8->GetZaxis()->SetTitleFont(42);
   hs->Add(hist3,"");
   hs->Draw("hist");
   
   TLegend *leg = new TLegend(0.82,0.7,0.95,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hist","ST","lpf");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist","TTA","lpf");

   ci = TColor::GetColor("#00ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist","VV","lpf");

   ci = TColor::GetColor("#6666cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#6666cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6666cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist","WA","lpf");

   ci = TColor::GetColor("#000099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist","non-prompt","lpf");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist","ZA","lpf");

   ci = TColor::GetColor("#ff00ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist","ZA_sig","lpf");

   ci = TColor::GetColor("#ff3333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff3333");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff3333");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist3","ZA_sig_out","lpf");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.82,"Preliminary");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.86,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.76,0.92,"35.862 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   ->cd();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
