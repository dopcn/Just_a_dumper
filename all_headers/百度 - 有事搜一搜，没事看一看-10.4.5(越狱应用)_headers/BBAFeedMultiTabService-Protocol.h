//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BBAMultiTabBar, BBAMultiTabItem, NSArray, NSDictionary, NSString;
@protocol BBAFeedMultiTabDelegate;

@protocol BBAFeedMultiTabService <NSObject>
@property(readonly, nonatomic) BBAMultiTabBar *multiTabBar;
@property(copy, nonatomic) NSString *currentTabId;
@property(nonatomic) __weak id <BBAFeedMultiTabDelegate> delegate;
- (NSDictionary *)debugFileTabsData;
- (NSDictionary *)debugCurrentTabsData;
- (NSDictionary *)debugServerTabsData;
- (NSDictionary *)debugBundleTabsData;
- (BBAMultiTabItem *)defaultMultiTabItem;
- (void)cleanDefaultTabGuidance;
- (void)showDefaultTabGuidance;
- (void)scrollToSelectedTablIfNeed;
- (_Bool)deleteTabFromTabs:(NSString *)arg1;
- (_Bool)addTabToTabs:(NSDictionary *)arg1;
- (_Bool)hasTabInTabs:(NSString *)arg1;
- (long long)loadFirstTabCacheIfNeeded;
- (void)presentTabEditViewController;
- (NSString *)tabIdForTTSPlay;
- (void)playFirstVideoWithVideoId:(NSString *)arg1;
- (void)forceRefreshFeedTabViewWithType:(int)arg1 extraInfo:(NSDictionary *)arg2;
- (void)addFeedRecordBoxWithExtraInfo:(NSDictionary *)arg1 tabId:(NSString *)arg2;
- (NSArray *)currentAddedTabIds;
- (void)updateServerMultiTabsDataIfNeed;
- (void)loadFeedTabServerData:(NSDictionary *)arg1;
- (NSDictionary *)multiTabUpdateData;
- (NSString *)multiTabDataVersion;
- (_Bool)isTransiting;
- (void)setCurrentTabId:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end

