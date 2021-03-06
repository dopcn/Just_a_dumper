//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPerson, FBProfileFriendListDataSource, NSArray, NSError, NSIndexPath;

@protocol FBProfileFriendListDataSourceDelegate <NSObject>
- (void)searchResultUpdatedWithHasResults:(_Bool)arg1;
- (void)person:(FBMemPerson *)arg1 changedAtIndexPath:(NSIndexPath *)arg2;
- (void)dataSource:(FBProfileFriendListDataSource *)arg1 didFinishLoadingDetailedFriendListForIDs:(NSArray *)arg2;
- (void)dataSource:(FBProfileFriendListDataSource *)arg1 didFailLoadingDetailedFriendListWithError:(NSError *)arg2;
- (void)dataSource:(FBProfileFriendListDataSource *)arg1 didFailLoadingFullFriendListWithError:(NSError *)arg2;
- (void)dataSourceDidFinishLoadingFullFriendListWithOnlyBasicInformation:(FBProfileFriendListDataSource *)arg1;
- (void)dataSourceDidFinishLoadingFullFriendListWithEmptyResponse:(FBProfileFriendListDataSource *)arg1;

@optional
- (_Bool)dataSourceShouldHideSectionHeaderRegardlessOfHelper:(FBProfileFriendListDataSource *)arg1;
@end

