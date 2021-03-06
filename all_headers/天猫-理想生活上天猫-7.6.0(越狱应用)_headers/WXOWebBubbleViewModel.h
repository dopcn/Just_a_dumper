//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWBaseBubbleViewModel.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString;

@interface WXOWebBubbleViewModel : YWBaseBubbleViewModel <UIWebViewDelegate>
{
    _Bool _forceReloadUrl;
    unsigned long long _contentType;
    NSString *_content;
    CDUnknownBlockType _ask2OpenBlock;
    CDUnknownBlockType _startedBlock;
    CDUnknownBlockType _doneBlock;
}

@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType startedBlock; // @synthesize startedBlock=_startedBlock;
@property(copy, nonatomic) CDUnknownBlockType ask2OpenBlock; // @synthesize ask2OpenBlock=_ask2OpenBlock;
@property(nonatomic) _Bool forceReloadUrl; // @synthesize forceReloadUrl=_forceReloadUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

