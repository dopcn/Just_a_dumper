//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DataLoadManager, NSString, QYPageData, QYUPadBaseCardViewController;

@protocol QYUPadCardViewControllerDelegate <NSObject>

@optional
- (void)subscribeDidClickWith:(NSString *)arg1 cardId:(NSString *)arg2;
- (void)openLoginViewWithTarget:(id)arg1 action:(SEL)arg2;
- (void)cardViewController:(QYUPadBaseCardViewController *)arg1 pageStatus:(int)arg2;
- (void)cardViewController:(QYUPadBaseCardViewController *)arg1 dataFailed:(QYPageData *)arg2;
- (void)cardViewController:(QYUPadBaseCardViewController *)arg1 dataLoadManagerFinished:(DataLoadManager *)arg2;
- (void)cardViewController:(QYUPadBaseCardViewController *)arg1 dataFinished:(QYPageData *)arg2 isFirstPage:(_Bool)arg3 isFromNet:(_Bool)arg4;
@end

