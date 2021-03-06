//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CCBNavigationViewController, NSMutableDictionary;

@interface CCB_ChanelDeployUtil : NSObject
{
    unsigned long long isUseLocalDB;
    CCBNavigationViewController *_navigation;
    NSMutableDictionary *_functionArray;
}

+ (void)moveTable;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (id)createPageCFG:(id)arg1 withPageType:(id)arg2 withFloorType:(id)arg3;
+ (void)updateUserDefinedFloorPage:(id)arg1;
+ (void)updateUserDefinedAggregationPage:(id)arg1;
+ (void)filterFloorOptionID:(id)arg1;
+ (id)getFunctionDictByEntryId:(id)arg1;
+ (void)createUserFunctionEntry:(id)arg1 withCFG:(id)arg2;
+ (void)createCommonFunctionEntry:(id)arg1 withCFG:(id)arg2;
+ (id)filterSelectedFloors:(id)arg1;
+ (void)createUserFloorArrayForAggregationPage:(id)arg1 withCFG:(id)arg2;
+ (void)createCommonFloorArrayForAggregationPage:(id)arg1 withCFG:(id)arg2;
+ (id)loadingFloorPageDeploy:(id)arg1;
+ (id)loadingAggregationPageDeploy:(id)arg1;
+ (void)loadFunctionEntries;
+ (_Bool)updataUserDefinePageToDatabase:(id)arg1 withPageType:(id)arg2 withPageCFG:(id)arg3 withTimeStamp:(id)arg4;
+ (_Bool)updataUserDefineDeployToDatabase:(id)arg1;
+ (_Bool)cleanUserDefineDeployDatabase;
+ (id)readUserDefineDeployFromDatabase:(id)arg1;
+ (id)readOneUserDefineDeployFromDatabase:(id)arg1;
+ (id)readPTNAVIGATIONFromDatabase:(id)arg1 andNavType:(id)arg2;
+ (id)readPTNAVIGATIONFromDatabase:(id)arg1 andPageId:(id)arg2 andNavType:(id)arg3;
+ (id)readFuncidFromDatabase:(id)arg1;
+ (id)readFuncidFromDatabase:(id)arg1 andFuncIds:(id)arg2;
+ (id)readFuncDeployFromDatabase;
+ (id)searchForMenuWithKeywords:(id)arg1 FromDatabase:(id)arg2;
+ (id)searchForMenuWithKeywords:(id)arg1;
+ (id)readFuncDeployFromDatabase:(id)arg1;
+ (id)readPageDeployFromDatabase:(id)arg1;
+ (id)readPageDeployFromDatabase:(id)arg1 andPageIds:(id)arg2;
+ (id)readOnePageDeployFromDatabase:(id)arg1;
+ (id)readOnePageDeployFromDatabase:(id)arg1 andPageId:(id)arg2;
+ (id)readCommonDeployFromDatabase:(id)arg1;
+ (id)readCommonDeployFromDatabase:(id)arg1 pageIds:(id)arg2;
+ (id)readOneCommonDeployFromDatabase:(id)arg1;
+ (id)readOneCommonDeployFromDatabase:(id)arg1 andPageId:(id)arg2;
+ (_Bool)isUseLocalDBConfig;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *functionArray; // @synthesize functionArray=_functionArray;
@property(retain, nonatomic) CCBNavigationViewController *navigation; // @synthesize navigation=_navigation;
- (void).cxx_destruct;
- (void)movePAGE_USERDEPLOY;
- (id)init;

@end

