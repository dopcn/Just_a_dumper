//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BBAFeedTableViewCell, NSError, NSIndexPath, NSString;

@protocol BBAFeedCellImageProtocol <NSObject>

@optional
- (void)feedCell:(BBAFeedTableViewCell *)arg1 didClickBannerButtonAtIndexPath:(NSIndexPath *)arg2;
- (void)feedCell:(BBAFeedTableViewCell *)arg1 didFailedDownloadImage:(NSString *)arg2 renderError:(NSError *)arg3 forRowAtIndexPath:(NSIndexPath *)arg4;
- (void)feedCell:(BBAFeedTableViewCell *)arg1 didImageRendering:(NSString *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end

