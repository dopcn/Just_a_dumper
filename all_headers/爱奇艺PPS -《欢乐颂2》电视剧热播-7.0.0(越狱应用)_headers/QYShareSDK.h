//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYShareSDK : NSObject
{
}

+ (void)launchShareWithType:(int)arg1 Title:(id)arg2 H5URL:(id)arg3 ImgURL:(id)arg4 description:(id)arg5 parentVC:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)customizedSharePageWithKey:(unsigned long long)arg1 Title:(id)arg2 H5URL:(id)arg3 ImgURL:(id)arg4 description:(id)arg5 colorInfo:(id)arg6 parentVC:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)customizedSharePageWithKey:(unsigned long long)arg1 Title:(id)arg2 H5URL:(id)arg3 ImgURL:(id)arg4 description:(id)arg5 parentVC:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)launchSharePageWithTitle:(id)arg1 H5URL:(id)arg2 ImgURL:(id)arg3 description:(id)arg4 colorInfo:(id)arg5 parentVC:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)launchSharePageWithTitle:(id)arg1 H5URL:(id)arg2 ImgURL:(id)arg3 description:(id)arg4 parentVC:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end

