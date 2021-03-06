//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDPanHybridHandlerInterface-Protocol.h"

@class BDPanHridWebViewController, NSMutableArray, NSString, NSURL;

@interface BDPanHybridHandle : NSObject <BDPanHybridHandlerInterface>
{
    BDPanHridWebViewController *_webViewController;
    NSMutableArray *_handlerList;
    NSURL *_webURL;
}

@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) NSMutableArray *handlerList; // @synthesize handlerList=_handlerList;
@property(nonatomic) __weak BDPanHridWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (_Bool)isValidURL;
- (void)openPage:(id)arg1;
- (_Bool)canOpenPage:(id)arg1;
- (void)executeCallback:(id)arg1 dic:(id)arg2;
- (void)handleURL:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addHandler:(id)arg1;
- (_Bool)canHandleURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

