//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSString;

@protocol JSInteractDelegate <JSExport>
- (void)showShareDialog;
- (void)jumpToHelp:(NSString *)arg1;
- (NSString *)getIMEI;
- (NSString *)getUserToken;
- (void)contact;
- (void)dismissDialog:(long long)arg1;
- (void)showDialog:(NSString *)arg1;
@end

