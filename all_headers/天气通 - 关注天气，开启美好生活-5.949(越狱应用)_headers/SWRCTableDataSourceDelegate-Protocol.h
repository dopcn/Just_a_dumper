//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWWeiboDetailDataSourceDelegate-Protocol.h"

@class SWRCDetailTableDataSource, SWRecommendsObject;

@protocol SWRCTableDataSourceDelegate <SWWeiboDetailDataSourceDelegate>
- (void)dataSource:(SWRCDetailTableDataSource *)arg1 didTapRecommendObject:(SWRecommendsObject *)arg2;
- (void)onTapLike:(id)arg1;
- (void)onTapListen:(id)arg1;
- (void)onTapFollow:(id)arg1;
- (void)onTapDownload:(id)arg1;
@end

