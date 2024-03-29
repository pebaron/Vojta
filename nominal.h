//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Oct 27 13:55:20 2016 by ROOT version 5.34/14
// from TTree nominal/tree
// found on file: user.amenga.7892672._000108.ljets.output.root
//////////////////////////////////////////////////////////

#ifndef nominal_h
#define nominal_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class nominal {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  // TChain 	   both("t"); // creates a chain to process a Tree called "T" //	Int_t TChain::Ad( 	TChain *  	chain	) 	
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         weight_mc;
   Float_t         weight_pileup;
   Float_t         weight_leptonSF;
   Float_t         weight_bTagSF_85;
   Float_t         weight_bTagSF_77;
   Float_t         weight_bTagSF_70;
   Float_t         weight_jvt;
   Float_t         weight_pileup_UP;

   Float_t         weight_pileup_DOWN;
   Float_t         weight_leptonSF_EL_SF_Trigger_UP;
   Float_t         weight_leptonSF_EL_SF_Trigger_DOWN;
   Float_t         weight_leptonSF_EL_SF_Reco_UP;
   Float_t         weight_leptonSF_EL_SF_Reco_DOWN;
   Float_t         weight_leptonSF_EL_SF_ID_UP;
   Float_t         weight_leptonSF_EL_SF_ID_DOWN;
   Float_t         weight_leptonSF_EL_SF_Isol_UP;
   Float_t         weight_leptonSF_EL_SF_Isol_DOWN;
   Float_t         weight_leptonSF_MU_SF_Trigger_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_Trigger_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_Trigger_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_Trigger_SYST_DOWN;
   Float_t         weight_leptonSF_MU_SF_ID_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_ID_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_ID_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_ID_SYST_DOWN;
   Float_t         weight_leptonSF_MU_SF_Isol_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_Isol_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_Isol_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_Isol_SYST_DOWN;
   Float_t         weight_leptonSF_MU_SF_TTVA_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_TTVA_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_TTVA_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_TTVA_SYST_DOWN;
   Float_t         weight_indiv_SF_EL_Trigger;
   Float_t         weight_indiv_SF_EL_Trigger_UP;
   Float_t         weight_indiv_SF_EL_Trigger_DOWN;
   Float_t         weight_indiv_SF_EL_Reco;
   Float_t         weight_indiv_SF_EL_Reco_UP;
   Float_t         weight_indiv_SF_EL_Reco_DOWN;
   Float_t         weight_indiv_SF_EL_ID;
   Float_t         weight_indiv_SF_EL_ID_UP;
   Float_t         weight_indiv_SF_EL_ID_DOWN;
   Float_t         weight_indiv_SF_EL_Isol;
   Float_t         weight_indiv_SF_EL_Isol_UP;
   Float_t         weight_indiv_SF_EL_Isol_DOWN;
   Float_t         weight_indiv_SF_MU_Trigger;
   Float_t         weight_indiv_SF_MU_Trigger_STAT_UP;
   Float_t         weight_indiv_SF_MU_Trigger_STAT_DOWN;
   Float_t         weight_indiv_SF_MU_Trigger_SYST_UP;
   Float_t         weight_indiv_SF_MU_Trigger_SYST_DOWN;
   Float_t         weight_indiv_SF_MU_ID;
   Float_t         weight_indiv_SF_MU_ID_STAT_UP;
   Float_t         weight_indiv_SF_MU_ID_STAT_DOWN;
   Float_t         weight_indiv_SF_MU_ID_SYST_UP;
   Float_t         weight_indiv_SF_MU_ID_SYST_DOWN;
   Float_t         weight_indiv_SF_MU_Isol;
   Float_t         weight_indiv_SF_MU_Isol_STAT_UP;
   Float_t         weight_indiv_SF_MU_Isol_STAT_DOWN;
   Float_t         weight_indiv_SF_MU_Isol_SYST_UP;
   Float_t         weight_indiv_SF_MU_Isol_SYST_DOWN;
   Float_t         weight_indiv_SF_MU_TTVA;
   Float_t         weight_indiv_SF_MU_TTVA_STAT_UP;
   Float_t         weight_indiv_SF_MU_TTVA_STAT_DOWN;
   Float_t         weight_indiv_SF_MU_TTVA_SYST_UP;
   Float_t         weight_indiv_SF_MU_TTVA_SYST_DOWN;
   vector<float>   *weight_bTagSF_85_eigenvars_B_up;
   vector<float>   *weight_bTagSF_85_eigenvars_C_up;
   vector<float>   *weight_bTagSF_85_eigenvars_Light_up;
   vector<float>   *weight_bTagSF_85_eigenvars_B_down;
   vector<float>   *weight_bTagSF_85_eigenvars_C_down;
   vector<float>   *weight_bTagSF_85_eigenvars_Light_down;
   Float_t         weight_bTagSF_85_extrapolation_up;
   Float_t         weight_bTagSF_85_extrapolation_down;
   Float_t         weight_bTagSF_85_extrapolation_from_charm_up;
   Float_t         weight_bTagSF_85_extrapolation_from_charm_down;
   vector<float>   *weight_bTagSF_77_eigenvars_B_up;
   vector<float>   *weight_bTagSF_77_eigenvars_C_up;
   vector<float>   *weight_bTagSF_77_eigenvars_Light_up;
   vector<float>   *weight_bTagSF_77_eigenvars_B_down;
   vector<float>   *weight_bTagSF_77_eigenvars_C_down;
   vector<float>   *weight_bTagSF_77_eigenvars_Light_down;
   Float_t         weight_bTagSF_77_extrapolation_up;
   Float_t         weight_bTagSF_77_extrapolation_down;
   Float_t         weight_bTagSF_77_extrapolation_from_charm_up;
   Float_t         weight_bTagSF_77_extrapolation_from_charm_down;
   vector<float>   *weight_bTagSF_70_eigenvars_B_up;
   vector<float>   *weight_bTagSF_70_eigenvars_C_up;
   vector<float>   *weight_bTagSF_70_eigenvars_Light_up;
   vector<float>   *weight_bTagSF_70_eigenvars_B_down;
   vector<float>   *weight_bTagSF_70_eigenvars_C_down;
   vector<float>   *weight_bTagSF_70_eigenvars_Light_down;
   Float_t         weight_bTagSF_70_extrapolation_up;
   Float_t         weight_bTagSF_70_extrapolation_down;
   Float_t         weight_bTagSF_70_extrapolation_from_charm_up;
   Float_t         weight_bTagSF_70_extrapolation_from_charm_down;
   Float_t         weight_jvt_UP;
   Float_t         weight_jvt_DOWN;
   ULong64_t       eventNumber;
   UInt_t          runNumber;
   UInt_t          mcChannelNumber;
   Float_t         mu;
   vector<float>   *el_pt;
   vector<float>   *el_eta;
   vector<float>   *el_cl_eta;
   vector<float>   *el_phi;
   vector<float>   *el_e;
   vector<float>   *el_charge;
   vector<float>   *el_topoetcone20;
   vector<float>   *el_ptvarcone20;
   vector<float>   *el_d0sig;
   vector<float>   *el_delta_z0_sintheta;
   vector<float>   *mu_pt;
   vector<float>   *mu_eta;
   vector<float>   *mu_phi;
   vector<float>   *mu_e;
   vector<float>   *mu_charge;
   vector<float>   *mu_topoetcone20;
   vector<float>   *mu_ptvarcone30;
   vector<float>   *mu_d0sig;
   vector<float>   *mu_delta_z0_sintheta;
   vector<float>   *jet_pt;
   vector<float>   *jet_eta;
   vector<float>   *jet_phi;
   vector<float>   *jet_e;
   vector<float>   *jet_mv2c00;
   vector<float>   *jet_mv2c10;
   vector<float>   *jet_mv2c20;
   vector<float>   *jet_ip3dsv1;
   vector<float>   *jet_jvt;
   vector<float>   *ljet_pt;
   vector<float>   *ljet_eta;
   vector<float>   *ljet_phi;
   vector<float>   *ljet_e;
   vector<float>   *ljet_m;
   vector<float>   *ljet_sd12;
   Float_t         met_met;
   Float_t         met_phi;
   Int_t           passed_resolved_ejets_2j0b;
   Int_t           passed_resolved_mujets_2j0b;
   Int_t           passed_resolved_ejets_4j0b;
   Int_t           passed_resolved_ejets_4j1b;
   Int_t           passed_resolved_ejets_4j2b;
   Int_t           passed_resolved_mujets_4j0b;
   Int_t           passed_resolved_mujets_4j1b;
   Int_t           passed_resolved_mujets_4j2b;
   Int_t           passed_boosted_ejets_1fj0b_noMET;
   Int_t           passed_boosted_ejets_1fj0b;
   Int_t           passed_boosted_ejets_1fj1b;
   Int_t           passed_boosted_mujets_1fj0b_noMET;
   Int_t           passed_boosted_mujets_1fj0b;
   Int_t           passed_boosted_mujets_1fj1b;
   Int_t           passed_resolved_ejets_5je2be;
   Int_t           passed_resolved_mujets_5je2be;
   Int_t           passed_resolved_ejets_5je3be;
   Int_t           passed_resolved_mujets_5je3be;
   Int_t           passed_resolved_ejets_5ji2be;
   Int_t           passed_resolved_mujets_5ji2be;
   Int_t           passed_resolved_ejets_5ji3bi;
   Int_t           passed_resolved_mujets_5ji3bi;
   Char_t          HLT_mu20_iloose_L1MU15;
   Char_t          HLT_mu50;
   Char_t          HLT_e60_lhmedium;
   Char_t          HLT_e24_lhmedium_L1EM18VH;
   Char_t          HLT_e120_lhloose;
   vector<char>    *el_trigMatch_HLT_e60_lhmedium;
   vector<char>    *el_trigMatch_HLT_e24_lhmedium_L1EM18VH;
   vector<char>    *el_trigMatch_HLT_e120_lhloose;
   vector<char>    *mu_trigMatch_HLT_mu50;
   vector<char>    *mu_trigMatch_HLT_mu20_iloose_L1MU15;
   UInt_t          lumiblock;
   UInt_t          npv;
   Float_t         vtxz;
   vector<float>   *ljet_tau32;
   vector<float>   *ljet_tau21;
  // vector<float>   *ljet_sd12;
   vector<float>   *ljet_sd23;
   vector<int>     *ljet_topTag50;
   vector<int>     *ljet_topTag80;
   vector<int>     *ljet_isWTaggedMed;
   vector<int>     *ljet_isWTaggedTight;
   vector<int>     *ljet_isZTaggedMed;
   vector<int>     *ljet_isZTaggedTight;

   // List of branches
   TBranch        *b_weight_mc;   //!
   TBranch        *b_weight_pileup;   //!
   TBranch        *b_weight_leptonSF;   //!
   TBranch        *b_weight_bTagSF_85;   //!
   TBranch        *b_weight_bTagSF_77;   //!
   TBranch        *b_weight_bTagSF_70;   //!
   TBranch        *b_weight_jvt;   //!
   TBranch        *b_weight_pileup_UP;   //!
   TBranch        *b_weight_pileup_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Trigger_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Trigger_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Reco_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Reco_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_ID_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_ID_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Isol_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Isol_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_SYST_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_SYST_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_SYST_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_Trigger;   //!
   TBranch        *b_weight_indiv_SF_EL_Trigger_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_Trigger_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_Reco;   //!
   TBranch        *b_weight_indiv_SF_EL_Reco_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_Reco_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_ID;   //!
   TBranch        *b_weight_indiv_SF_EL_ID_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_ID_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_Isol;   //!
   TBranch        *b_weight_indiv_SF_EL_Isol_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_Isol_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_Trigger;   //!
   TBranch        *b_weight_indiv_SF_MU_Trigger_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_Trigger_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_Trigger_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_Trigger_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_ID;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_SYST_DOWN;   //!
   TBranch        *b_weight_bTagSF_85_eigenvars_B_up;   //!
   TBranch        *b_weight_bTagSF_85_eigenvars_C_up;   //!
   TBranch        *b_weight_bTagSF_85_eigenvars_Light_up;   //!
   TBranch        *b_weight_bTagSF_85_eigenvars_B_down;   //!
   TBranch        *b_weight_bTagSF_85_eigenvars_C_down;   //!
   TBranch        *b_weight_bTagSF_85_eigenvars_Light_down;   //!
   TBranch        *b_weight_bTagSF_85_extrapolation_up;   //!
   TBranch        *b_weight_bTagSF_85_extrapolation_down;   //!
   TBranch        *b_weight_bTagSF_85_extrapolation_from_charm_up;   //!
   TBranch        *b_weight_bTagSF_85_extrapolation_from_charm_down;   //!
   TBranch        *b_weight_bTagSF_77_eigenvars_B_up;   //!
   TBranch        *b_weight_bTagSF_77_eigenvars_C_up;   //!
   TBranch        *b_weight_bTagSF_77_eigenvars_Light_up;   //!
   TBranch        *b_weight_bTagSF_77_eigenvars_B_down;   //!
   TBranch        *b_weight_bTagSF_77_eigenvars_C_down;   //!
   TBranch        *b_weight_bTagSF_77_eigenvars_Light_down;   //!
   TBranch        *b_weight_bTagSF_77_extrapolation_up;   //!
   TBranch        *b_weight_bTagSF_77_extrapolation_down;   //!
   TBranch        *b_weight_bTagSF_77_extrapolation_from_charm_up;   //!
   TBranch        *b_weight_bTagSF_77_extrapolation_from_charm_down;   //!
   TBranch        *b_weight_bTagSF_70_eigenvars_B_up;   //!
   TBranch        *b_weight_bTagSF_70_eigenvars_C_up;   //!
   TBranch        *b_weight_bTagSF_70_eigenvars_Light_up;   //!
   TBranch        *b_weight_bTagSF_70_eigenvars_B_down;   //!
   TBranch        *b_weight_bTagSF_70_eigenvars_C_down;   //!
   TBranch        *b_weight_bTagSF_70_eigenvars_Light_down;   //!
   TBranch        *b_weight_bTagSF_70_extrapolation_up;   //!
   TBranch        *b_weight_bTagSF_70_extrapolation_down;   //!
   TBranch        *b_weight_bTagSF_70_extrapolation_from_charm_up;   //!
   TBranch        *b_weight_bTagSF_70_extrapolation_from_charm_down;   //!
   TBranch        *b_weight_jvt_UP;   //!
   TBranch        *b_weight_jvt_DOWN;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_mu;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_e;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_topoetcone20;   //!
   TBranch        *b_el_ptvarcone20;   //!
   TBranch        *b_el_d0sig;   //!
   TBranch        *b_el_delta_z0_sintheta;   //!
   TBranch        *b_mu_pt;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_mu_e;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_mu_topoetcone20;   //!
   TBranch        *b_mu_ptvarcone30;   //!
   TBranch        *b_mu_d0sig;   //!
   TBranch        *b_mu_delta_z0_sintheta;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_e;   //!
   TBranch        *b_jet_mv2c00;   //!
   TBranch        *b_jet_mv2c10;   //!
   TBranch        *b_jet_mv2c20;   //!
   TBranch        *b_jet_ip3dsv1;   //!
   TBranch        *b_jet_jvt;   //!
   TBranch        *b_ljet_pt;   //!
   TBranch        *b_ljet_eta;   //!
   TBranch        *b_ljet_phi;   //!
   TBranch        *b_ljet_e;   //!
   TBranch        *b_ljet_m;   //!
   TBranch        *b_ljet_sd12;   //!
   TBranch        *b_met_met;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_passed_resolved_ejets_2j0b;   //!
   TBranch        *b_passed_resolved_mujets_2j0b;   //!
   TBranch        *b_passed_resolved_ejets_4j0b;   //!
   TBranch        *b_passed_resolved_ejets_4j1b;   //!
   TBranch        *b_passed_resolved_ejets_4j2b;   //!
   TBranch        *b_passed_resolved_mujets_4j0b;   //!
   TBranch        *b_passed_resolved_mujets_4j1b;   //!
   TBranch        *b_passed_resolved_mujets_4j2b;   //!
   TBranch        *b_passed_boosted_ejets_1fj0b_noMET;   //!
   TBranch        *b_passed_boosted_ejets_1fj0b;   //!
   TBranch        *b_passed_boosted_ejets_1fj1b;   //!
   TBranch        *b_passed_boosted_mujets_1fj0b_noMET;   //!
   TBranch        *b_passed_boosted_mujets_1fj0b;   //!
   TBranch        *b_passed_boosted_mujets_1fj1b;   //!
   TBranch        *b_passed_resolved_ejets_5je2be;   //!
   TBranch        *b_passed_resolved_mujets_5je2be;   //!
   TBranch        *b_passed_resolved_ejets_5je3be;   //!
   TBranch        *b_passed_resolved_mujets_5je3be;   //!
   TBranch        *b_passed_resolved_ejets_5ji2be;   //!
   TBranch        *b_passed_resolved_mujets_5ji2be;   //!
   TBranch        *b_passed_resolved_ejets_5ji3bi;   //!
   TBranch        *b_passed_resolved_mujets_5ji3bi;   //!
   TBranch        *b_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_HLT_mu50;   //!
   TBranch        *b_HLT_e60_lhmedium;   //!
   TBranch        *b_HLT_e24_lhmedium_L1EM18VH;   //!
   TBranch        *b_HLT_e120_lhloose;   //!
   TBranch        *b_el_trigMatch_HLT_e60_lhmedium;   //!
   TBranch        *b_el_trigMatch_HLT_e24_lhmedium_L1EM18VH;   //!
   TBranch        *b_el_trigMatch_HLT_e120_lhloose;   //!
   TBranch        *b_mu_trigMatch_HLT_mu50;   //!
   TBranch        *b_mu_trigMatch_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_lumiblock;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_vtxz;   //!
   TBranch        *b_ljet_tau32;   //!
   TBranch        *b_ljet_tau21;   //!
 //  TBranch        *b_ljet_sd12;   //!
   TBranch        *b_ljet_sd23;   //!
   TBranch        *b_ljet_topTag50;   //!
   TBranch        *b_ljet_topTag80;   //!
   TBranch        *b_ljet_isWTaggedMed;   //!
   TBranch        *b_ljet_isWTaggedTight;   //!
   TBranch        *b_ljet_isZTaggedMed;   //!
   TBranch        *b_ljet_isZTaggedTight;   //!

   nominal(TTree *tree=0);
   virtual ~nominal();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};
 
#endif // #ifdef nominal_cxx
