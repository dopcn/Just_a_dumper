//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString, UISwitch, UITableView;

@interface SettingVC : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UISwitch *theP2PSwitch;
    UISwitch *theServerSwitch;
    NSMutableDictionary *theMainUserSettingMDict;
    NSMutableDictionary *theVideop2pMDict;
    NSMutableDictionary *theVideoServerParamMDict;
    NSMutableDictionary *theVideoSolutionMDict;
    NSMutableDictionary *theVideoBitrateMDict;
    NSMutableDictionary *theVideoFramerateMDict;
    NSMutableDictionary *theVideoPresetMDict;
    NSMutableDictionary *theVideoQualityMDict;
    NSNumber *theP2PNum;
    NSNumber *theServerParamNum;
    NSNumber *theSolutionNum;
    NSNumber *theBitrateNum;
    NSNumber *theFrameRateNum;
    NSNumber *thePresetNum;
    NSNumber *theQualityNum;
    NSString *theSolutionStr;
    NSString *theBitrateStr;
    NSString *theFrameRateStr;
    NSString *thePresetStr;
    NSString *theQualityStr;
    UITableView *_theUserSettingTabelView;
}

+ (id)sharedSettingVC;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak UITableView *theUserSettingTabelView; // @synthesize theUserSettingTabelView=_theUserSettingTabelView;
@property(retain, nonatomic) NSString *theQualityStr; // @synthesize theQualityStr;
@property(retain, nonatomic) NSString *thePresetStr; // @synthesize thePresetStr;
@property(retain, nonatomic) NSString *theFrameRateStr; // @synthesize theFrameRateStr;
@property(retain, nonatomic) NSString *theBitrateStr; // @synthesize theBitrateStr;
@property(retain, nonatomic) NSString *theSolutionStr; // @synthesize theSolutionStr;
@property(retain, nonatomic) NSNumber *theQualityNum; // @synthesize theQualityNum;
@property(retain, nonatomic) NSNumber *thePresetNum; // @synthesize thePresetNum;
@property(retain, nonatomic) NSNumber *theFrameRateNum; // @synthesize theFrameRateNum;
@property(retain, nonatomic) NSNumber *theBitrateNum; // @synthesize theBitrateNum;
@property(retain, nonatomic) NSNumber *theSolutionNum; // @synthesize theSolutionNum;
@property(retain, nonatomic) NSNumber *theServerParamNum; // @synthesize theServerParamNum;
@property(retain, nonatomic) NSNumber *theP2PNum; // @synthesize theP2PNum;
@property(retain, nonatomic) NSMutableDictionary *theVideoQualityMDict; // @synthesize theVideoQualityMDict;
@property(retain, nonatomic) NSMutableDictionary *theVideoPresetMDict; // @synthesize theVideoPresetMDict;
@property(retain, nonatomic) NSMutableDictionary *theVideoFramerateMDict; // @synthesize theVideoFramerateMDict;
@property(retain, nonatomic) NSMutableDictionary *theVideoBitrateMDict; // @synthesize theVideoBitrateMDict;
@property(retain, nonatomic) NSMutableDictionary *theVideoSolutionMDict; // @synthesize theVideoSolutionMDict;
@property(retain, nonatomic) NSMutableDictionary *theVideoServerParamMDict; // @synthesize theVideoServerParamMDict;
@property(retain, nonatomic) NSMutableDictionary *theVideop2pMDict; // @synthesize theVideop2pMDict;
@property(retain, nonatomic) NSMutableDictionary *theMainUserSettingMDict; // @synthesize theMainUserSettingMDict;
@property(retain, nonatomic) UISwitch *theServerSwitch; // @synthesize theServerSwitch;
@property(retain, nonatomic) UISwitch *theP2PSwitch; // @synthesize theP2PSwitch;
- (void).cxx_destruct;
- (void)updateUserVideoSettings;
- (id)getValuesFromMDict:(id)arg1 firstMDictKey:(id)arg2 secondValuesKey:(id)arg3;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)switchBtnStatus:(id)arg1;
- (void)saveBtn_OnClick;
- (void)configParamData;
- (void)readDataWithPList;
- (id)readPListToMDictionaryAtSandboxPList:(id)arg1;
- (void)createObjPlistFileToDocumentsPath;
- (id)plistFileAtSandboxPathWithName:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

