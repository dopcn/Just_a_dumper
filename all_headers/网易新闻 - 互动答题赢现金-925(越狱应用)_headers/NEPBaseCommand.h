//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEPCommandProtocol-Protocol.h"

@class NEPCommonWebViewController, NSString;

@interface NEPBaseCommand : NSObject <NEPCommandProtocol>
{
}

- (void)handleCommandWithMessage:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NEPCommonWebViewController *NEPWebViewcController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

