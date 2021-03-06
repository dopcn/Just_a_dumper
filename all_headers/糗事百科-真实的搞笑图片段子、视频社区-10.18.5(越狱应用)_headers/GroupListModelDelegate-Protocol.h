//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, QBGroupMemListModel;

@protocol GroupListModelDelegate <NSObject>

@optional
- (void)groupMemListModel:(QBGroupMemListModel *)arg1 dictionFetched:(NSDictionary *)arg2 isRefresh:(_Bool)arg3;
- (void)groupMemListModel:(QBGroupMemListModel *)arg1 moreItemFetchFailed:(NSError *)arg2;
- (void)groupMemListModel:(QBGroupMemListModel *)arg1 moreItemFetched:(long long)arg2;
- (NSDictionary *)groupMemListModel:(QBGroupMemListModel *)arg1 handleListItems:(NSArray *)arg2 isNeedRemoveDuplicated:(_Bool)arg3;
@end

