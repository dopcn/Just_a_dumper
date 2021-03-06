//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBComponentCollectionViewDataSource, FBPrivacySettingComposingSet, FBUserSession, NSArray, NSString;

@interface FBPrivacyCheckupDataSourceAdapter : NSObject
{
    FBComponentCollectionViewDataSource *_dataSource;
    FBUserSession *_session;
    NSArray *_privacyCheckupItems;
    unsigned long long _queryType;
    NSString *_afterCursor;
    _Bool _canFetchMoreData;
    unsigned long long _loadingState;
    _Bool _showHeaderTopDivider;
    FBPrivacySettingComposingSet *_composingSet;
}

- (void).cxx_destruct;
- (void)insertItemsFromArray:(id)arg1;
- (void)_createDataSections;
- (unsigned long long)_currentProgressIndex;
- (void)reloadData;
- (void)deleteCheckupModel:(id)arg1 withCheckupItem:(id)arg2;
- (void)_updateComposingSetForAllCheckupModels:(id)arg1;
- (void)updateCheckupModel:(id)arg1 withCheckupItem:(id)arg2;
- (void)_updateLoadingState:(unsigned long long)arg1;
- (void)fetchMoreData;
- (void)_fetchPrivacySettings;
- (id)_dataFromCheckupItems:(id)arg1;
- (id)initWithSession:(id)arg1 queryType:(unsigned long long)arg2 dataSource:(id)arg3;

@end

