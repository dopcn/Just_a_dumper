//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TYTextStorage.h"

#import "TYLinkStorageProtocol-Protocol.h"

@class NSString, UIColor;

@interface TYLinkTextStorage : TYTextStorage <TYLinkStorageProtocol>
{
    id _linkData;
}

@property(retain, nonatomic) id linkData; // @synthesize linkData=_linkData;
- (void).cxx_destruct;
- (void)addTextStorageWithAttributedString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct _NSRange range;
@property(nonatomic) struct _NSRange realRange;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIColor *textColor;

@end

