//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGImageProgressView, NSError, NSNumber, NSString, UIImage;

@protocol IGImageProgressViewDelegate <NSObject>
- (void)progressImageView:(IGImageProgressView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)progressImageView:(IGImageProgressView *)arg1 didLoadImage:(UIImage *)arg2 loadSource:(NSString *)arg3;
- (void)progressImageView:(IGImageProgressView *)arg1 didLoadPreviewImage:(UIImage *)arg2 progressiveJPEGScanNumber:(NSNumber *)arg3;
@end

