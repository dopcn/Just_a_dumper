//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJH5RPCViewController.h"

#import "GJJsonWebViewRPCDelegate-Protocol.h"

@class NSString;

@interface GJFLH5RPCViewController : GJH5RPCViewController <GJJsonWebViewRPCDelegate>
{
    NSString *_puid;
    NSString *_mark;
}

@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(copy, nonatomic) NSString *puid; // @synthesize puid=_puid;
- (void).cxx_destruct;
- (void)GJJsonRPCWebView:(id)arg1 createNativeForParams:(id)arg2;
- (void)setUpRead;
- (void)closePage;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

