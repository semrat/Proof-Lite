{  

#include "TTree.h"
#include "TDSet.h"
#include "TProof.h"
#include "TString.h"


  // INPUT DATA SAMPLE ON LOCAL DISK	

  TDSet* dataset = new TDSet("TTree", "X_data", "mkcands");

  /// SEMRA
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012B_Merged/MuOniaParked_Run2012B_MuMuKKPAT_merged.root"); // 87 GB ++
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012B_Merged/MuOniaParked_Run2012B_MuMuKKPAT_merged_failedjob1.root"); // 262 GB ++  
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012D_Merged/MuOniaParked_Run2012D_MuMuKKPAT_merged.root"); // 248 GB ++
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012D_Merged/MuOniaParked_Run2012D_MuMuKKPAT_merged0_failedjob1.root"); // 73 GB
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012D_Merged/MuOniaParked_Run2012D_MuMuKKPAT_merged1_failedjob1.root"); // 84 GB
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012D_Merged/MuOniaParked_Run2012D_MuMuKKPAT_merged2_failedjob1.root"); // 36 GB
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012D_Merged/MuOniaParked_Run2012D_MuMuKKPAT_merged3_failedjob1.root"); // 63 GB
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012D_Merged/MuOniaParked_Run2012D_MuMuKKPAT_merged4_failedjob1.root"); // 97 GB
  //dataset->Add("/lustre/home/sturkcapar/BARI_2016/2012D_Merged/MuOniaParked_Run2012D_MuMuKKPAT_merged5_failedjob1.root"); // 56 GB

  /// ADRIANO
  /*dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0000.root"); /// 89 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0001.root"); /// 89 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0002.root"); /// 100 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0003.root"); /// 80 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0004.root"); /// 77 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0005.root"); /// 85 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0006.root"); /// 76 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0007.root"); /// 89 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged/runB_merged_0008.root"); /// 7.9 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0000.root"); /// 46 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0001.root"); /// 43 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0002.root"); /// 42 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0003.root"); /// 36 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0004.root"); /// 33 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0005.root"); /// 31 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0006.root"); /// 31 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0007.root"); /// 42 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012B/merged1/runB_merger_1_0008.root"); /// 3.7 GB

  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged/runC_merged_0001.root"); /// 79 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged/runC_merged_0002.root"); /// 72 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged/runC_merged_0003.root"); /// 65 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged/runC_merged_0004.root"); /// 31 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged/runC_merged_0005.root"); /// 31 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0000.root"); /// 35 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0001.root"); /// 34 GB 
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0002.root"); /// 37 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0003.root"); /// 38 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0004.root"); /// 37 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0005.root"); /// 30 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0006.root"); /// 32 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0007.root"); /// 35 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012C/merged1/runC_merged_1_0008.root"); /// 33 GB

  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012D/merged/runD_merged_0_5000.root"); /// 270 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012D/merged/runD_merged_5000_10000.root"); /// 360 GB
  dataset->Add("/lustre/cms/store/user/adiflori/2017/X4140/Run2012D/merged/runD_merged_10000_20000.root"); /// 202 GB
*/

  /// These are last update from Adriano in totally, 1.967 GB
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB/sept17_merged.root"); /// 222 GB
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC/sept17_merged.root"); /// 393 GB
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD/sept17_merged.root"); /// 500 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB/sept17_merged_part1.root"); /// 261 GB 
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB/sept17_merged_part2.root"); /// 151 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC/sept17_merged_part1.root"); /// 439 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC/sept17_merged_part2.root"); /// 314 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD/sept17_merged_part1.root"); /// 495 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD/sept17_merged_part2.root"); /// 307 GB

  TString selector = "Y4140";
  TProof *p = TProof::Open("workers=12"); // 12 workers for qsub
  
  // Processing
  cout << ">> Processing " << selector << " ... " << endl;



  TString selectorplus = selector;
  selectorplus += ".C+";
  p->Process(dataset, selectorplus);

}
