//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface UIImageView (BSAdd)
- (void)clearActiveDownloadInformation;
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1;
- (void)bs_setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)bs_setMissionImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)bs_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)bs_setImageWithURL:(id)arg1;
@property(copy, nonatomic) NSString *bs_preImageUrl;
@end

