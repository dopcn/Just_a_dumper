//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CEDatabaseDelegate-Protocol.h"

@class CEDatabase, NSString;

@interface RepoDb : NSObject <CEDatabaseDelegate>
{
    CEDatabase *_db;
}

@property(retain, nonatomic) CEDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (int)purgeFreqCapLabel;
- (int)putFreqCapLabel:(id)arg1;
- (id)getFreqCapLabels;
- (int)putUnitStatWithUnitId:(int)arg1 date:(long long)arg2 request:(int)arg3 reponse:(int)arg4;
- (int)deleteResponse:(int)arg1;
- (int)updateResponse:(id)arg1 respId:(int)arg2;
- (int)insertResponse:(id)arg1 respId:(int *)arg2;
- (int)putCampaign:(id)arg1;
- (id)getResponses;
- (id)getUnitStats;
- (int)trimUnitStat:(long long)arg1;
- (int)trimCampaignState;
- (id)getCampaignStates;
- (int)clearTables;
- (int)createDatabase;
- (int)migrateFreqCapping;
- (int)migrateDBVersionFromVersion:(int)arg1;
- (int)putVersion:(int)arg1;
- (int)getCurrentVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

