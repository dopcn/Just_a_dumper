//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTMYProgressHUD : NSObject
{
}

+ (void)dismiss;
+ (void)showImage:(id)arg1 status:(id)arg2 maskType:(unsigned long long)arg3 containerView:(id)arg4;
+ (void)showImage:(id)arg1 status:(id)arg2 duration:(double)arg3;
+ (void)showImage:(id)arg1 status:(id)arg2;
+ (void)showInfoWithStatus:(id)arg1;
+ (void)showErrorWithStatus:(id)arg1;
+ (void)showSuccessWithStatus:(id)arg1;
+ (void)showProgress:(double)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
+ (void)showWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showWithMaskType:(unsigned long long)arg1;
+ (void)show;

@end

