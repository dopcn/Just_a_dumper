//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDetailBaseTemplateModel.h"

#import "WBPCModelAProtocal-Protocol.h"

@class NSDictionary, NSString;

@interface WBPCAdModel : WBDetailBaseTemplateModel <WBPCModelAProtocal>
{
    NSString *_url;
    NSDictionary *_action;
}

@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)jumpToAimVCWithExtraParam:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

