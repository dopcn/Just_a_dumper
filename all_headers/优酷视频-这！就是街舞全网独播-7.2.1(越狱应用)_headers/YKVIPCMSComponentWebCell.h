//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CMSComponentCellProtocol-Protocol.h"

@class NSDictionary, NSString, NSURL, VIPCMSComponentContext, YKVIPWebView;

@interface YKVIPCMSComponentWebCell : UITableViewCell <CMSComponentCellProtocol>
{
    NSDictionary *_params;
    VIPCMSComponentContext *_componentContext;
    YKVIPWebView *_webView;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) YKVIPWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) VIPCMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)setupModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

