//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSBaseEvent.h"

@class HXSocketFetcher;

@interface JSGemGeneralEvent : JSBaseEvent
{
    HXSocketFetcher *_generalFetcher;
}

@property(retain, nonatomic) HXSocketFetcher *generalFetcher; // @synthesize generalFetcher=_generalFetcher;
- (void).cxx_destruct;
- (void)receivedData:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)resetWebView:(id)arg1;
- (void)registerJS:(id)arg1;
- (id)initWithCWebView:(id)arg1;

@end

