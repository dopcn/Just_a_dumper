//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TMUIKits : NSObject
{
}

+ (void)modalMessageBox:(id)arg1 title:(id)arg2 button1:(id)arg3 button2:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)messageBox:(id)arg1 title:(id)arg2 offset:(struct CGPoint)arg3;
+ (void)messageBox:(id)arg1 offset:(struct CGPoint)arg2;
+ (void)messageBox:(id)arg1 title:(id)arg2 tag:(long long)arg3 delegate:(id)arg4 offset:(struct CGPoint)arg5;
+ (void)messageBox:(id)arg1 title:(id)arg2 tag:(long long)arg3 delegate:(id)arg4 buttons:(id)arg5 offset:(struct CGPoint)arg6;
+ (void)messageBox:(id)arg1 title:(id)arg2;
+ (void)messageBox:(id)arg1;
+ (void)messageBox:(id)arg1 title:(id)arg2 tag:(long long)arg3 delegate:(id)arg4;
+ (void)killCurrentMessageBox;
+ (void)messageBox:(id)arg1 title:(id)arg2 tag:(long long)arg3 delegate:(id)arg4 buttons:(id)arg5;

@end

