//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol SNNewsScreenWeiXinDelegate <NSObject>
- (void)weixinAuthFailed;
- (void)shareLater:(NSString *)arg1;
- (void)updateLink2:(UIImage *)arg1 Background:(NSString *)arg2;
- (void)sohuShareCallBack:(id)arg1;
- (void)weixinShareCallBack:(id)arg1;
- (void)share:(NSString *)arg1;
- (void)getAuthUserInfo:(id)arg1;
@end

