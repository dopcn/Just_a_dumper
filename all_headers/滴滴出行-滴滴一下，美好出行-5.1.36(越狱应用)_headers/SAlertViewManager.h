//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SAlertViewManager : NSObject
{
}

+ (void)dismissAll;
+ (id)showAlertWithCustomView:(id)arg1 canColse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 cancelTitle:(id)arg4 otherTitles:(id)arg5;
+ (id)showAlertWithTitle:(id)arg1 alertViewIconImage:(id)arg2 message:(id)arg3 checkText:(id)arg4 completion:(CDUnknownBlockType)arg5 cancelTitle:(id)arg6 otherTitles:(id)arg7;
+ (long long)getCancelIndex:(id)arg1 titles:(id)arg2;
+ (id)showAlertWithTitle:(id)arg1 alertViewIcon:(unsigned long long)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4 cancelTitle:(id)arg5 otherTitles:(id)arg6;
+ (id)showAlertWithTitle:(id)arg1 alertViewIcon:(unsigned long long)arg2 attrMessage:(id)arg3 completion:(CDUnknownBlockType)arg4 cancelTitle:(id)arg5 otherTitles:(id)arg6;
+ (id)showAlertWithTitle:(id)arg1 iconUrl:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4 cancelTitle:(id)arg5 otherTitles:(id)arg6;
+ (id)showAlertWithCustomAlertView:(id)arg1 canClose:(_Bool)arg2;

@end

