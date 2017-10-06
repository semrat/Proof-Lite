{  

#include "TTree.h"
#include "TDSet.h"
#include "TProof.h"
#include "TString.h"


  // INPUT DATA SAMPLE ON LOCAL DISK	

  TDSet* dataset = new TDSet("TTree", "X_data", "mkcands");

  
  /// These are last updates from Adriano 
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB/sept17_merged_part1.root"); /// 261 GB 
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB/sept17_merged_part2.root"); /// 151 GB
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC/sept17_merged_part1.root"); /// 439 GB
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC/sept17_merged_part2.root"); /// 314 GB
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD/sept17_merged_part1.root"); /// 495 GB
  //dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD/sept17_merged_part2.root"); /// 307 GB

  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_00.root"); /// 51 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_01.root"); /// 24 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_02.root"); /// 41 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_03.root"); /// 95 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_04.root"); /// 39 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_05.root"); /// 16 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_06.root"); /// 47 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_07.root"); /// 34 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_08.root"); /// 26 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_09.root"); /// 78 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_010.root"); /// 14 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_011.root"); /// 12 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_012.root"); /// 9.8 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_013.root"); /// 50 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_014.root"); /// 9.4 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_015.root"); /// 31 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_016.root"); /// 11 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_017.root"); /// 13 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_018.root"); /// 35 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runB_resplit_Oct17/runB_split_019.root"); /// 16 GB

  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_00.root"); /// 151 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_01.root"); /// 64 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_02.root"); /// 74 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_03.root"); /// 121 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_04.root"); /// 59 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_05.root"); /// 64 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_06.root"); /// 71 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_07.root"); /// 156 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_08.root"); /// 57 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_09.root"); /// 89 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_010.root"); /// 60 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_011.root"); /// 40 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_012.root"); /// 24 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_013.root"); /// 29 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_014.root"); /// 33 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_015.root"); /// 56 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_016.root"); /// 24 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_017.root"); /// 50 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_018.root"); /// 8.6 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runC_resplit_Oct17/runC_split_019.root"); /// 25 GB
  
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_00.root"); /// 129 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_01.root"); /// 114 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_02.root"); /// 72 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_03.root"); /// 157 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_04.root"); /// 124 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_05.root"); /// 85 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_06.root"); /// 77 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_07.root"); /// 74 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_08.root"); /// 68 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_09.root"); /// 42 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_010.root"); /// 21 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_011.root"); /// 66 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_012.root"); /// 46 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_013.root"); /// 24 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_014.root"); /// 27 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_015.root"); /// 27 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_016.root"); /// 11 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_017.root"); /// 26 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_018.root"); /// 63 GB
  dataset->Add("/lustre/cms/store/user/adiflori/MuOniaParked/runD_resplit_Oct17/runD_split_019.root"); /// 33 GB










  TString selector = "Y4140";
  TProof *p = TProof::Open("workers=12"); // 12 workers for qsub
  
  // Processing
  cout << ">> Processing " << selector << " ... " << endl;




  TString selectorplus = selector;
  selectorplus += ".C+";
  p->Process(dataset, selectorplus);

}
