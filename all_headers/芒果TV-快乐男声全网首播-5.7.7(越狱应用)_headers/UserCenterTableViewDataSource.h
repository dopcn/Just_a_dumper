//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BaseDataSourceDelegate-Protocol.h"

@class LHSafeMutableArray, NSString, UserCenterDataSource, UserCenterViewController;

@interface UserCenterTableViewDataSource : NSObject <BaseDataSourceDelegate>
{
    _Bool _isRefresh;
    LHSafeMutableArray *_tableData;
    LHSafeMutableArray *_playRecordsArray;
    LHSafeMutableArray *_downloadArray;
    LHSafeMutableArray *_favoritesArray;
    UserCenterDataSource *_userCenterDataSource;
    UserCenterViewController *_controller;
}

@property(nonatomic) UserCenterViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UserCenterDataSource *userCenterDataSource; // @synthesize userCenterDataSource=_userCenterDataSource;
@property(retain, nonatomic) LHSafeMutableArray *favoritesArray; // @synthesize favoritesArray=_favoritesArray;
@property(retain, nonatomic) LHSafeMutableArray *downloadArray; // @synthesize downloadArray=_downloadArray;
@property(retain, nonatomic) LHSafeMutableArray *playRecordsArray; // @synthesize playRecordsArray=_playRecordsArray;
@property(retain, nonatomic) LHSafeMutableArray *tableData; // @synthesize tableData=_tableData;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
- (void).cxx_destruct;
- (void)saveplayRecordToTodayWidget;
- (void)operation:(id)arg1 didSuccess:(id)arg2;
- (void)dealloc;
- (id)getDownloadCollectionArrayWithClipId:(id)arg1;
- (void)loadLocalFavoritesData;
- (void)addDownloadDataToCollectionArray;
- (id)dictionaryWithUserPlayRecord:(id)arg1;
- (void)addLocalPlayRecord;
- (id)cellDataWithIndexPath:(id)arg1;
- (void)refreshTableView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

