#include "xx.C"
#include <iostream>
#include <fstream>
using namespace std;

void runxx() {
//TString dir="/data/pku/home/anying/cms/CMSSW_8_0_26_patch2/analysis_code/MakeTemplate/ZAJetfakeohoton/pesudo/";
TString dir = "/data/pku/home/anying/cms/rootfiles/2016/nohlt/";
//TString dir = "/home/pku/anying/cms/file_in_cms/files_weighted/";
ifstream infile("file");
string buffer;
TString infilename;

int k=1;

while (k>0){
getline (infile, buffer) ;
infilename = buffer;
if(infilename.Contains(".root")==0) {k=-2; continue;}
TString outname="cutla-"+infilename;
//TString outname="cutlep-out"+infilename;
infilename ="cutla-"+ infilename;

cout<<infilename<<endl;
cout<<outname<<endl;

TFile *file1 =new TFile(dir+infilename);
TTree *tree1 = (TTree*) file1->Get("ZPKUCandidates");
//TTree *tree1 = (TTree*) file1->Get("demo");
xx m1(tree1,outname);
m1.Loop(outname);
m1.endJob();

}
}

int main(){
    runxx();
    return 1;
  }
