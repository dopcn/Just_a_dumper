//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VBPosterOwner-Protocol.h"

@class FMDatabaseQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface VideoBoxHistoryDataModel : NSObject <VBPosterOwner>
{
    NSString *_databasePath;
    FMDatabaseQueue *_databaseQueue;
    NSMutableArray *_observers;
    NSMutableDictionary *_videoFinishRecordDict;
}

+ (id)sharedModel;
@property(retain, nonatomic) NSMutableDictionary *videoFinishRecordDict; // @synthesize videoFinishRecordDict=_videoFinishRecordDict;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) FMDatabaseQueue *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)shouldRemovePosters:(id)arg1;
- (id)mutableObjectFromData:(id)arg1 withKey:(id)arg2;
- (id)dataFromObject:(id)arg1 forKey:(id)arg2;
- (void)checkDataBaseErrorForDataBase:(id)arg1;
- (void)removeOldestRecordIfExceedsMaxLimit;
- (id)getHistoryItemFromCurrentResultSet:(id)arg1;
- (id)queryAllHistoryItems;
- (id)applicationDocumentDirectory;
- (void)notifyObserverForRemoveItems:(id)arg1;
- (void)notifyObserverForRemoveItem:(id)arg1;
- (void)notifyObserverForAddItem:(id)arg1;
- (void)notifyObserverForDataChanged;
- (_Bool)videoHadPlayForPageURL:(id)arg1;
- (_Bool)videoHadFinishedForPageURL:(id)arg1;
- (void)updatePageURL:(id)arg1 playVideoFinished:(_Bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)clearAllHistoryItems;
- (void)removeAllHistoryItemsByUserAction;
- (void)removeHistoryItemForURL:(id)arg1 withPageURL:(id)arg2 notify:(_Bool)arg3;
- (void)updateFavoriteStatus:(int)arg1 forVideoURL:(id)arg2 pageURL:(id)arg3 notify:(_Bool)arg4;
- (void)updatePosterURL:(id)arg1 forVideoURL:(id)arg2 pageURL:(id)arg3;
- (void)updateFavoriteStatus:(int)arg1 forVideoURL:(id)arg2 pageURL:(id)arg3;
- (void)updateVideoTitle:(id)arg1 forURL:(id)arg2 andPageURL:(id)arg3;
- (void)updateVideoURL:(id)arg1 forItemWithPageURL:(id)arg2;
- (_Bool)addHistoryItemForStatus:(int)arg1 withItem:(id)arg2 notify:(_Bool)arg3;
- (_Bool)addHistoryItem:(id)arg1;
- (id)historyItemForVideoURL:(id)arg1 withPageURL:(id)arg2;
- (_Bool)isHistoryVideoURL:(id)arg1 withPageURL:(id)arg2;
- (id)allHistoryItemGroups;
- (id)allHistoryItems;
- (long long)allHistoryItemCount;
- (void)importOldPlistDataBaseIfNeeded;
- (void)loadDatabase;
- (void)startDatabaseMigration;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

